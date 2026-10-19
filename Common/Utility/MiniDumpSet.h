/*//===============================================================

	<< MINI-DUMP SET >>

	FILE : MINIDUMPSET.H, MINIDUMPSET.CPP
	DESC : Minidump management class
	INIT BUILT DATE : 2007. 10. 28
	LAST BUILT DATE : 2007. 11. 20

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

	P.S.>
		- Minidump type flags (MINIDUMP_TYPE enum) are as follows (Reference : http://msdn.microsoft.com/en-us/library/ms680519(VS.85).aspx)
			MiniDumpNormal = 0x00000000
			MiniDumpWithDataSegs = 0x00000001
			MiniDumpWithFullMemory = 0x00000002
			MiniDumpWithHandleData = 0x00000004
			MiniDumpFilterMemory = 0x00000008
			MiniDumpScanMemory = 0x00000010
			MiniDumpWithUnloadedModules = 0x00000020
			MiniDumpWithIndirectlyReferencedMemory = 0x00000040
			MiniDumpFilterModulePaths = 0x00000080
			MiniDumpWithProcessThreadData = 0x00000100
			MiniDumpWithPrivateReadWriteMemory = 0x00000200
			MiniDumpWithoutOptionalData = 0x00000400
			MiniDumpWithFullMemoryInfo = 0x00000800
			MiniDumpWithThreadInfo = 0x00001000
			MiniDumpWithCodeSegs = 0x00002000

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include <WINDOWS.H>
#include <DBGHELP.H>
#include "STRINGSET.H"

#pragma comment (lib, "DBGHELP.LIB")


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

#define DF_MINIDUMP_EXCEPTIONDESCSIZE	(1024)


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMiniDumpSet
//*---------------------------------------------------------------
// DESC : Exception handler class
// PRGM : B4nFter
//*---------------------------------------------------------------
class CMiniDumpSet
{

protected:
	typedef	BOOL (WINAPI *LPFN_MINIDUMPWRITEDUMP)(HANDLE, DWORD, HANDLE, MINIDUMP_TYPE, PMINIDUMP_EXCEPTION_INFORMATION, PMINIDUMP_USER_STREAM_INFORMATION, PMINIDUMP_CALLBACK_INFORMATION);
	typedef	BOOL (WINAPI *LPFN_MINIDUMPREADDUMPSTREAM)(PVOID, ULONG, PMINIDUMP_DIRECTORY, PVOID*, ULONG*);

private:
//	DISABLE_COPY_ASSIGN(CMiniDumpSet);	// Prevent copy and assignment

public:
	CMiniDumpSet();
	~CMiniDumpSet();

	DWORD Open();
	VOID Close();
	BOOL IsOpen() { return(NULL != m_lpfnMiniDumpWriteDump); }

	DWORD Read(LPCTSTR lpszFilePath);
	DWORD Write(LPEXCEPTION_POINTERS lpstExceptionPointers, MINIDUMP_TYPE pMiniDumpType, LPCTSTR lpszFilePath);

	VOID SetUserMessage(LPCTSTR lpszUserMessage);
	LPCTSTR GetUserMessage() const { return m_szUserMessage; }
	LPCTSTR GetFilePath() const { return m_szFilePath; }
	LPCTSTR GetFileName() const { return m_szFileName; }

	LPCTSTR GetModuleName() const { return m_szModuleName; }
	LPCTSTR GetProcessorArchitectureName() const { return m_szProcessorArchitecture; }
	LPCTSTR GetWindowVersion() const { return m_szWindowVersion; }
	LPCTSTR GetExceptionCause() const { return m_szExceptionDesc; }
	LPCTSTR GetUserString() const { return m_strUserString.Get(); }

public:
	static VOID GetExceptionCause(DWORD dwExceptionCode, LPTSTR lpszDesc, DWORD nDescSize);

private:
	LPVOID GetDumpInfo(ULONG eInfoType);

	// http://msdn2.microsoft.com/en-us/library/ms680394.aspx
	MINIDUMP_MISC_INFO*	GetMiscInfo()			{ return (MINIDUMP_MISC_INFO*)GetDumpInfo(MiscInfoStream); }
	MINIDUMP_MODULE_LIST* GetModuleList()		{ return (MINIDUMP_MODULE_LIST*)GetDumpInfo(ModuleListStream); }
	MINIDUMP_SYSTEM_INFO* GetSystemInfo()		{ return (MINIDUMP_SYSTEM_INFO*)GetDumpInfo(SystemInfoStream); }
	MINIDUMP_EXCEPTION_STREAM* GetException()	{ return (MINIDUMP_EXCEPTION_STREAM*)GetDumpInfo(ExceptionStream); }
	MINIDUMP_USER_STREAM* GetUserData(int nCount)	{ return (MINIDUMP_USER_STREAM*)GetDumpInfo(LastReservedStream+1+nCount); }

	BOOL ReadBaseInfo();
	BOOL ReadMiscInfo();
	BOOL ReadMouleName();
	BOOL ReadSystemInfo();
	BOOL ReadException();
	BOOL ReadUserData();

private:
	HMODULE m_hDebugHelp;
	LPFN_MINIDUMPWRITEDUMP m_lpfnMiniDumpWriteDump;
	LPFN_MINIDUMPREADDUMPSTREAM m_lpfnMiniDumpReadDumpStream;

	LPVOID m_lpMapping;
	HANDLE m_hMap;
	HANDLE m_hFile;

	TCHAR m_szUserMessage[MAX_PATH];
	TCHAR m_szFilePath[MAX_PATH];
	TCHAR m_szFileName[MAX_PATH];

	TCHAR m_szModuleName[MAX_PATH];
	TCHAR m_szProcessorArchitecture[MAX_PATH];
	TCHAR m_szWindowVersion[MAX_PATH];
	TCHAR m_szExceptionDesc[DF_MINIDUMP_EXCEPTIONDESCSIZE+1];
	CStringSet m_strUserString;

	ULONG32	m_dwProcessTime;
	ULONG32	m_dwUserTime;
	ULONG32	m_dwKernelTime;
	ULONG32 m_uExceptionCode;
	ULONG64 m_uExceptionAddress;

};

