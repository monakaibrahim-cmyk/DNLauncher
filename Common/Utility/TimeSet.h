/*//===============================================================

	<< TIME SET >>

	FILE : TIMESET.H, TIMESET.CPP
	DESC : Time management class
	INIT BUILT DATE : 2007. 04. 22
	LAST BUILT DATE : 2008. 05. 29

	P.S.>
		- tm structure layout
			int tm_sec          : Seconds (0 ~ 59) (*)
			int tm_min          : Minutes (0 ~ 59) (*)
			int tm_hour         : Hours (0 ~ 23) (*)
			int tm_mday         : Day of month (1 ~ 31) (*)
			int tm_mon          : Month (0 ~ 11, Jan=0) (*)
			int tm_year         : Year (years since 1900) (*)
			int tm_wday         : Day of week (0 ~ 6, Sun=0)
			int tm_yday         : Day of year (0 ~ 365)
			int tm_isdst        : Daylight saving time flag

			// P.S.> Only members marked (*) affect __time32_t / __time64_t conversion

		- DBTIMESTAMP structure layout
			SHORT year          : Year (0 ~ 9999)
			USHORT month        : Month (1 ~ 12)
			USHORT day          : Day (1 ~ 31)
			USHORT hour         : Hour (0 ~ 23)
			USHORT minute       : Minute (0 ~ 59)
			USHORT second       : Second (0 ~ 59)
			ULONG fraction      : Precision fraction (0 ~ 999,999,999)

		- __time32_t range: 1970-01-01 00:00:00 ~ 2038-01-18 12:14:07
		- __time64_t range: 1970-01-01 00:00:00 ~ 2999-12-31 23:59:59

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include <WINDOWS.H>
#include <OLEDB.H>
#include <sqltypes.h>


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

#define DF_TM_YEAR_EPOCH		(1900)					// tm structure base year
#define DF_TIME32_MAX			(0x7FFFFFFF)			// __time32_t max value
#define DF_TIME64_MAX			(0x00000007933FF16F)	// __time64_t max value


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CTimeSet
//*---------------------------------------------------------------
// DESC : Time management class
// PRGM : B4nFter
//*---------------------------------------------------------------
class CTimeSet
{
public:
	// Must match SYSTEMTIME::wDayOfWeek value order
	enum EF_DAYOFWEEK { EV_DAYOFWEEK_SUN=0, EV_DAYOFWEEK_MON, EV_DAYOFWEEK_TUE, EV_DAYOFWEEK_WEN, EV_DAYOFWEEK_THU, EV_DAYOFWEEK_FRI, EV_DAYOFWEEK_SAT };
public:
	CTimeSet();
	CTimeSet(WORD wYear, WORD wMonth, WORD wDay, WORD wHour, WORD wMinute, WORD wSecond);
	CTimeSet(const __time32_t& pTime, bool pIsLocal);	// 20100506
	CTimeSet(const __time64_t& pTime, bool pIsLocal);	// 20100506
	CTimeSet(const char* szTime, bool pIsLocal);		// 20110104 by robust
	explicit CTimeSet(const FILETIME& stTime);
	explicit CTimeSet(const SYSTEMTIME& stTime);
	explicit CTimeSet(const DBTIMESTAMP& stTime);

public:
	WORD GetYear() const { return m_stLocalTime.wYear; }
	WORD GetMonth() const { return m_stLocalTime.wMonth; }
	WORD GetDay() const { return m_stLocalTime.wDay; }
	WORD GetHour() const { return m_stLocalTime.wHour; }
	WORD GetMinute() const { return m_stLocalTime.wMinute; }
	WORD GetSecond() const { return m_stLocalTime.wSecond; }
	WORD GetMilliseconds() const { return m_stLocalTime.wMilliseconds; }
	WORD GetDayOfWeek() const { return m_stLocalTime.wDayOfWeek	; }

	const SYSTEMTIME& GetSystemTime() const { return m_stLocalTime; }
	SYSTEMTIME& GetSystemTime() { return m_stLocalTime; }
	__time32_t GetTimeT32_LC() const;	// 20100506
	__time64_t GetTimeT64_LC() const;	// 20100506
	__time32_t GetTimeT32_GM() const;	// 20100506
	__time64_t GetTimeT64_GM() const;	// 20100506

	TIMESTAMP_STRUCT& GetDBTimeStampStruct();
	DBTIMESTAMP& GetDbTimeStamp();
	DBDATE& GetDBDate();

	EF_DAYOFWEEK CalculateDayOfWeek();	// 20100728

	VOID Reset();
	VOID Set(WORD wYear, WORD wMonth, WORD wDay, WORD wHour, WORD wMinute,WORD wSecond);
	VOID Set(const __time32_t& pTime, bool pIsLocal);
	VOID Set(const __time64_t& pTime, bool pIsLocal);
	VOID Set(const FILETIME& stTime);
	VOID Set(const SYSTEMTIME& stTime);
	VOID Set(const DBTIMESTAMP& stTime);

	DWORD GetTimeTo(EF_DAYOFWEEK eDayOfWeek, WORD wHour, WORD wMinute, WORD wSecond);	// Max difference: Week (ms)
	DWORD GetTimeTo(WORD wHour, WORD wMinute, WORD wSecond);	// Max difference: Day (ms)
	DWORD GetTimeTo(WORD wMinute, WORD wSecond);	// Max difference: Hour (ms)

	INT CompareFileTime(const FILETIME& stFileTime1, const FILETIME& stFileTime2);	// Compare FILETIME values (-1: first is greater, 0: equal, 1: second is greater)
	BOOL CheckIntegrity();

	VOID AddSecond(INT64 ui64Second);	// 20100728
	INT64 operator-(const CTimeSet& pTime) const;

	static VOID ConvertFileTimeToDbTimeStamp(const FILETIME* lpFileTime, DBTIMESTAMP* lpDbTime);
	static VOID ConvertDbTimeStampToFileTime(const DBTIMESTAMP* lpDbTime, FILETIME* lpFileTime);
	static __time32_t ConvertTmToTimeT32_LC(tm* lpTm);
	static __time64_t ConvertTmToTimeT64_LC(tm* lpTm);
	static __time32_t ConvertTmToTimeT32_GM(tm* lpTm);
	static __time64_t ConvertTmToTimeT64_GM(tm* lpTm);
	static __time32_t ConvertDbTimeStampToTimeT32_LC(const DBTIMESTAMP* lpDbTime);
	static __time64_t ConvertDbTimeStampToTimeT64_LC(const DBTIMESTAMP* lpDbTime);
	static __time32_t ConvertDbTimeStampToTimeT32_GM(const DBTIMESTAMP* lpDbTime);
	static __time64_t ConvertDbTimeStampToTimeT64_GM(const DBTIMESTAMP* lpDbTime);
	static BOOL ConvertTimeT32ToTm_LC(__time32_t pTimeT32, tm* lpTm);
	static BOOL ConvertTimeT64ToTm_LC(__time64_t pTimeT64, tm* lpTm);
	static BOOL ConvertTimeT32ToTm_GM(__time32_t pTimeT32, tm* lpTm);
	static BOOL ConvertTimeT64ToTm_GM(__time64_t pTimeT64, tm* lpTm);
	static BOOL ConvertTimeT32ToDbTimeStamp_LC(__time32_t pTimeT32, DBTIMESTAMP* lpDbTime);
	static BOOL ConvertTimeT64ToDbTimeStamp_LC(__time64_t pTimeT64, DBTIMESTAMP* lpDbTime);
	static BOOL ConvertTimeT32ToDbTimeStamp_GM(__time32_t pTimeT32, DBTIMESTAMP* lpDbTime);
	static BOOL ConvertTimeT64ToDbTimeStamp_GM(__time64_t pTimeT64, DBTIMESTAMP* lpDbTime);
	static EF_DAYOFWEEK CalculateDayOfWeek(WORD wYear, WORD wMonth, WORD wDay);	// 20100728

private:
	SYSTEMTIME m_stLocalTime;		// Current local time
	TIMESTAMP_STRUCT m_DBTimeStampStruct;
	DBTIMESTAMP m_stDbTimeStamp;	// Temporary DBTIMESTAMP variable
	DBDATE m_DBDate;
};

