/*//===============================================================

	<< EXCEPTION REPORT >>

	FILE : EXCEPTIONREPORT.H, EXCEPTIONREPORT.CPP
	DESC : Exception handler class
	INIT BUILT DATE : 2007. 10. 28
	LAST BUILT DATE : 2007. 11. 20

	P.S.> 
		- Note: Based on CrashHandler from BugSlayer in Debugging Applications for Microsoft .NET and Microsoft Windows.

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include "SINGLETON.H"
#include "CRITICALSECTION.H"
#include "MINIDUMPSET.H"
#include "FILESET.H"
#include <PSAPI.H>

#pragma comment(lib, "PSAPI.LIB")


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

#define DF_EXCEPTIONREPORT_TEXTBUFFERSIZE		(2048)
#define DF_EXCEPTIONREPORT_MAXSYMBOLSIZE		(512)
#define DF_EXCEPTIONREPORT_SYMBOLBUFFERSIZE		(2048)
#define DF_EXCEPTIONREPORT_EXCEPTIONDESCSIZE	(1024)


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CExceptionReport
//*---------------------------------------------------------------
// DESC : Exception handler class
// PRGM : B4nFter
//*---------------------------------------------------------------
class CExceptionReport
{

protected:
	typedef	CSyncLock				TP_LOCK;
	typedef	ScopeLock<CSyncLock>	TP_LOCKAUTO;

protected:
	typedef BOOL	(WINAPI * LPFN_ENUMPROCESSMODULES)(HANDLE, HMODULE*, DWORD, LPDWORD);
	typedef DWORD	(WINAPI * LPFN_GETMODULEBASENAME)(HANDLE, HMODULE, LPTSTR, DWORD);
	typedef DWORD	(WINAPI * LPFN_GETMODULEFILENAMEEX)(HANDLE, HMODULE, LPTSTR, DWORD);

public:
	typedef VOID (*LPFN_OUTPUT_LOGPROC)(LPCTSTR /*TextBuffer*/, UINT /*TextLength*/, LPVOID /*UserParam*/);		// Function pointer for routing log output to external logger

private:
	enum EF_WRITEFLAGE 
	{
		EV_WF_FILE = 0x01,
		EV_WF_LOGPROC = 0x02,
		EV_WF_ALL = EV_WF_FILE | EV_WF_LOGPROC,
	};

private:
//	DISABLE_COPY_ASSIGN(CExceptionReport);		// Prevent copy and assignment
	DECLARE_SINGLETON_CLASS(CExceptionReport);

private:
	CExceptionReport();
	~CExceptionReport();

public:
	DWORD Open(LPCTSTR lpszFilePath, BOOL bDoSetFilter = TRUE, BOOL bDoCallStack = TRUE, MINIDUMP_TYPE pMiniDumpType = MiniDumpNormal);
	VOID Close();
//	BOOL IsOpen() const { return m_Lock.IsOpen(); }

	CMiniDumpSet& GetMiniDump() { return m_MiniDump; }
	BOOL DoSetFilter() const { return m_bDoSetFilter; }
	BOOL DoCallStack() const { return m_bDoCallStack; }
	LPCTSTR GetFilePath() const { return m_szFilePath; }
	VOID SetUserMessage(LPCTSTR lpszUserMessage);
	VOID SetMiniDumpType(MINIDUMP_TYPE pMiniDumpType) { m_MiniDumpType = pMiniDumpType; }

	VOID SetOutputLogProc(LPFN_OUTPUT_LOGPROC lpfnOutputLogProc, LPVOID lpOutputLogProcParam);

	static DWORD WINAPI _StackOverflowException( LPVOID pParam );
	static LONG WINAPI Proc(LPEXCEPTION_POINTERS lpstExceptionPointers);
	static LONG WINAPI Proc(LPEXCEPTION_POINTERS lpstExceptionPointers, MINIDUMP_TYPE pMiniDumpType);
	static LONG WINAPI ProcNoLock(LPEXCEPTION_POINTERS lpstExceptionPointers, MINIDUMP_TYPE pMiniDumpType);

	volatile bool IsDumping() { return m_bIsDumping; }
	void SetNowDump(bool bDump) { m_bIsDumping = bDump; }

	const LPTSTR GetUserMemoryString();
	static void SetValues(UINT nAccountID, INT64 biCharacterDBID, int nMainCmd, int nSubCmd);

private:
	VOID InitSymbolEngine();
	const LPTSTR GetFaultReason(LPCTSTR lpszPrefix);
	const LPTSTR GetStackTraceString(LPCTSTR lpszPrefix);
	const LPTSTR GetFirstStackTraceString(LPCTSTR lpszPrefix);
	const LPTSTR GetNextStackTraceString(LPCTSTR lpszPrefix);
	const LPTSTR GetRegisterString();
	const MINIDUMP_TYPE GetMiniDumpType() const { return m_MiniDumpType; }

	VOID Write(LPCTSTR lpszText, EF_WRITEFLAGE eWriteFlag);

private:
	static BOOL __stdcall ReadProcessMemoryWork(HANDLE hModule, DWORD64 dw64BaseAddr, LPVOID lpBuffer, DWORD dwBufferSize, LPDWORD lpReadBytesSize);

private:
	CMiniDumpSet m_MiniDump;
	MINIDUMP_TYPE m_MiniDumpType;
	DWORD m_MachineType;
	BOOL m_bDoSetFilter;
	BOOL m_bDoCallStack;
	BOOL m_InitSymbolEngine;
	CFileSet m_File;
	TP_LOCK m_Lock;
	EXCEPTION_POINTERS* m_lpstExceptionPointers;
	CONTEXT m_stContext;
	TCHAR m_szFilePath[MAX_PATH];
	TCHAR m_szFileName[MAX_PATH];
	TCHAR m_szText[DF_EXCEPTIONREPORT_TEXTBUFFERSIZE+1];
	TCHAR m_szExceptionDesc[DF_EXCEPTIONREPORT_EXCEPTIONDESCSIZE+1];
	BYTE m_btSymbol[DF_EXCEPTIONREPORT_MAXSYMBOLSIZE];

	IMAGEHLP_LINE64	m_Line;
	STACKFRAME64 m_StackFame;

	LPFN_OUTPUT_LOGPROC m_lpfnOutputLogProc;
	LPVOID m_lpOutputLogProcParam;

	_invalid_parameter_handler m_pInvalidParameterHandler;
	_purecall_handler m_pPureCallHandler;

	volatile bool m_bIsDumping;

	static UINT m_nAccountID;
	static INT64 m_biCharacterDBID;
	static int m_nMainCmd;
	static int m_nSubCmd;
};

