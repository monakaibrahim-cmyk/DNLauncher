// DnLauncher.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "DnLauncher.h"
#include "DnLauncherDlg.h"
#include "DnServiceModule.h"
#include "DnFIrstPatchDlg.h"
#include <locale.h>
#include <process.h>
#include "DnControlData.h"
#include <io.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#pragma comment( lib, "shlwapi.lib" )

// CDnLauncherApp
BEGIN_MESSAGE_MAP(CDnLauncherApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

int __cdecl DefautAllocHook( int, void *, size_t, int, long, const unsigned char *, int )
{
	return 1;
}

int __cdecl MyAllocHook( int nAllocType, void * pvData, size_t nSize, int nBlockUse,
						long lRequest, const unsigned char * szFileName, int nLine )
{
	if( nAllocType == _HOOK_ALLOC && nSize == 106 )
	{
		int a = 0;
	}
	return 1;
}


// The one and only CDnLauncherApp object
CDnLauncherApp	theApp;
CString			g_szCmdLine;
CString			g_szOriginalCmdLine;		// Original command line
CString			g_szCommandLinePatchURL;	// Command line PatchConfigList.xml URL
int				g_nInitErrorCode = 0;		// Launcher initialization error code

extern CDnFistPatchDownloadThread*  g_pFirstPatchDownloadThread;
CDnFIrstPatchDlg					g_FirstPatchDlg;
HANDLE								g_FirstPatchDlgHandle;
extern FirstPatchReturn				g_nFirstPatchErrorMessage;
unsigned int WINAPI ShowFirstPatchDlg(void* arg)
{
	INT_PTR nResult = g_FirstPatchDlg.DoModal();
	return 0;
}

#ifndef _DEBUG
static const char g_szMutexName[] = "Global\\___DN___";
HANDLE g_hMutex = NULL;
#endif // _DEBUG


// CDnLauncherApp construction
CDnLauncherApp::CDnLauncherApp()
{
#ifdef _USE_LOG
	DeleteOldLogFile();
	UseLogFile();
#endif // _USE_LOG

#ifdef _DEBUG
	// Visual Studio TRACE output configuration
	_tsetlocale( LC_ALL, _T("korean") );

//	_CrtSetAllocHook( MyAllocHook );
//	_CrtSetBreakAlloc( 2599 );
#endif

}

CDnLauncherApp::~CDnLauncherApp()
{
#ifndef _DEBUG
	if( g_hMutex )
	{
		CloseHandle( g_hMutex );
		g_hMutex = NULL;
	}
#endif // _DEBUG

	if( g_pServiceModule )
		g_pServiceModule->Destroy();

	SAFE_DELETE( g_pServiceModule );

	LogWnd::DestroyLog();
}

// CDnLauncherApp initialization
BOOL CDnLauncherApp::InitInstance()
{
	g_szOriginalCmdLine = g_szCmdLine = m_lpCmdLine;
	ParseCommandLine();	// Parse command line arguments

/*	while(1)
	{

	}*/

#ifdef _USE_MULTILANGUAGE
	SetLanguageParam();
#endif // _USE_MULTILANGUAGE

// Single-instance mutex check
#ifndef _DEBUG
	g_hMutex = ::OpenMutexA( MUTEX_ALL_ACCESS, FALSE, g_szMutexName );
	if( g_hMutex == NULL )
	{
		g_hMutex = ::CreateMutexA( NULL, FALSE, g_szMutexName );
	}
	else
	{
		ErrorMessageBoxLog( _S( STR_ALEADY_RUN + DNPATCHINFO.GetLanguageOffset() ) );
		return FALSE;
	}
#endif // _DEBUG

	CHECK_ALIGNMENT();

	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	AfxEnableControlContainer();
	SetRegistryKey(_T("DragonNest Launcher"));

//	ErrorMessageBoxLog( g_szCmdLine );
	// Visual Studio TRACE output configuration

	if( InitLauncher() )
	{
		CDnLauncherDlg* pDlg = CDnLauncherDlg::CreateLauncherDlg();
		m_pMainWnd			 = pDlg;
		INT_PTR nResponse	 = pDlg->DoModal();

		SAFE_DELETE( pDlg );
	}

	return FALSE;
}

BOOL CDnLauncherApp::InitLauncher()
{
	LogWnd::TraceLog( L"InitLauncher Start!" );

#ifdef _USE_SINGLE_CLIENT
	if( FindProcessName( _T(DNCLIENT_NAME) ) || FindProcessName( _T(DNCLIENT_NAME_X64) ) )	// Check if client is already running
	{
		ErrorMessageBoxLog( _S( STR_CLIENT_ALEADY_RUN + DNPATCHINFO.GetLanguageOffset() ) );
		g_nInitErrorCode = INIT_ERROR_CLIENT_ALEADY_RUN;
		return FALSE;
	}
#endif // _USE_SINGLE_CLIENT
		
#ifdef _FIRST_PATCH
	if( !InitFirstPatchThread() )			// Initialize FirstPatch thread
	{	
		return InitFail();
	}
#endif

	if( !CheckDirectXVersion() )			// Check DirectX version
	{
		return InitFail();
	}

		// Exit on failure
	{
		return InitFail();
	}

		// Exit on failure
	{
		return InitFail();
	}
#ifdef _USE_MULTILANGUAGE
	// Set locale guide page if multilanguage is enabled
	DNPATCHINFO.SetLocaleGuidePage();
#endif // _USE_MULTILANGUAGE

#if defined(_FIRST_PATCH)
	if( DNFIRSTPATCHINFO.GetFirstPatchStatus() == DNFIRSTPATCHINFO.EM_FIRSTPATCH_OK )
	{
		if( !DNFIRSTPATCHINFO.SetPatchInfo() ) // Initialize and set FirstPatch info
		{
			return InitFail();
		}
	}
	TerminateFirstPatchThread();			// Terminate FirstPatch thread
#endif // _FIRST_PATCH

#if defined( _USE_COMMAND_LINE ) // Direct browser redirect if no command line
	if( g_szCmdLine.GetLength() == 0 )
	{
		ShellExecute( NULL, L"open", DNPATCHINFO.GetHomepageUrl(), NULL, NULL, SW_SHOW );
		return FALSE;
	}
#endif // _USE_COMMAND_LINE

	g_pServiceModule = DnServiceModule::CreateServiceModule();
	if( g_pServiceModule && !g_pServiceModule->Initialize() )	// Initialize service module
	{
		g_nInitErrorCode = INIT_ERROR_SERVICE_MODULE;
		return InitFail();
	}
	
	if( !RemoveUsedFile() )	 // Remove temporary files used by launcher update
	{
		return InitFail();
	}

#ifdef _FIRST_PATCH
if(g_nFirstPatchErrorMessage == FPR_NEED_FULLPATCH)
	{
		// FirstPatch failed, client full patch required
		LogWnd::TraceLog( L"FirstPatch Failed / need Client Full Patch!" );
		LogWnd::Log( LogLevel::Error, _T("FirstPatch Failed / Need Full Patch") );
		return InitFail();
	}
#endif // _FIRST_PATCH

	LogWnd::TraceLog( L"InitLauncher Success!" );
	return TRUE;
}

#ifdef _FIRST_PATCH
BOOL CDnLauncherApp::InitFirstPatchThread()
{
	// * Tmp  .
	if(_access(DNLAUNCHER_NAME_TMP, 0) == 0)
	{
		if( !ClientDeleteFile(_T(DNLAUNCHER_NAME_TMP)) )
		{
			LogWnd::Log( LogLevel::Warning, _T("dnlauncher.tmp File Delete Failed") );
		}
	}

	// Create FirstPatch dialog thread
	g_FirstPatchDlgHandle = (HANDLE)_beginthreadex(NULL, 0, ShowFirstPatchDlg, NULL, 0, NULL);
	if(g_FirstPatchDlgHandle == NULL)
	{
		LogWnd::Log( LogLevel::Error, _T("FirstPatch Dialog Thread Create Failed") );
		g_nInitErrorCode = INIT_ERROR_FIRSTPATCH_THREAD_CREATE_FAILED;
		return FALSE;
	}

	// Set FirstPatch in progress state
	DNFIRSTPATCHINFO.SetFirstPatchProcess(DNFIRSTPATCHINFO.EM_FIRSTPATCH_ING);
	return TRUE;
}

void CDnLauncherApp::TerminateFirstPatchThread()
{
	if( g_pFirstPatchDownloadThread ) // Wait for FirstPatch download thread to complete
	{
		// Wait for FirstPatch thread completion
		WaitForSingleObject( g_pFirstPatchDownloadThread->GetThreadHandle(), INFINITE );
	}

	// Close FirstPatch dialog if open
	if( g_FirstPatchDlg )
	{
		// Terminate FirstPatch dialog thread and close dialog
		DWORD dwExitCode;
		if( GetExitCodeThread( g_FirstPatchDlgHandle, &dwExitCode ) )
		{
			TerminateThread( g_FirstPatchDlgHandle, dwExitCode );
		}

		g_FirstPatchDlg.EndDialog( IDYES );
	}

	// Reset FirstPatch status
	DNFIRSTPATCHINFO.SetFirstPatchProcess(DNFIRSTPATCHINFO.EM_FIRSTPATCH_NOT);
}
#endif // _FIRST_PATCH


BOOL CDnLauncherApp::InitFail()
{
	CString strError;
	strError.Format( _S( STR_LAUNCHER_INIT_FAILED + DNPATCHINFO.GetLanguageOffset() ), g_nInitErrorCode );
	LogWnd::Log( LogLevel::Error, strError );
	AfxMessageBox( strError );
	
#ifdef _FIRST_PATCH
	HANDLE	pHandles[2];
	pHandles[0] = g_FirstPatchDlgHandle;
	if(g_pFirstPatchDownloadThread)
	{
		pHandles[1] = g_pFirstPatchDownloadThread->GetThreadHandle();
	}
	
	DWORD dwExitCode;
	GetExitCodeThread(g_FirstPatchDlgHandle, &dwExitCode);
	TerminateThread(g_FirstPatchDlgHandle, dwExitCode);
	
	if( WAIT_FAILED != WaitForMultipleObjects(2, pHandles, TRUE, INFINITE) )
	{
		// Exit on failure
		return FALSE;
	}
#endif
	
	return FALSE;
}

BOOL CDnLauncherApp::CheckDirectXVersion()
{
	DWORD dwDirectXVersion = 0;
	TCHAR strDirectXVersion[10] = {0,};

	std::wstring wstrVersion;

	int nResult = GetDXVersion( &dwDirectXVersion, strDirectXVersion, 10);

	CString szStr;
	LogWnd::TraceLog( _T("DirectX Version (%u) (%s)"), dwDirectXVersion, strDirectXVersion );

	if( dwDirectXVersion < 0x00090000 )
	{
		wstrVersion = strDirectXVersion;
		if( wstrVersion != L"9.0c" )
		{
			CString szStr;
			szStr.Format ( _S( STR_DX_LOW_VER + DNPATCHINFO.GetLanguageOffset() ), wstrVersion.c_str() );
			ErrorMessageBoxLog( szStr );
			g_nInitErrorCode = INIT_ERROR_DX_VER;
			return FALSE;
		}
	}

	return TRUE;
}

void CDnLauncherApp::ParseCommandLine()
{
	if( g_szCmdLine.GetLength() == 0 )
		return;

	LPCTSTR szlpURL = L"http://";
#ifdef _USE_MULTILANGUAGE
	LPCTSTR szlpLanguage = L"language:";
#endif // _USE_MULTILANGUAGE

	std::wstring wszCmdLine;	 
	wszCmdLine = g_szCmdLine;
	std::vector<std::wstring> tokens;
	TokenizeW( wszCmdLine, tokens, std::wstring(L" ") );

	for( DWORD i=0; i<tokens.size(); i++ )
	{
		if( NULL != StrStr( tokens[i].c_str(), szlpURL ) ) // Command line URL argument found
		{
			g_szCommandLinePatchURL = tokens[i].c_str(); // Store custom patch URL
			g_szCmdLine.Replace( g_szCommandLinePatchURL, L"" ); // Remove URL from command line
#ifndef _USE_MULTILANGUAGE
			break;
#endif // _USE_MULTILANGUAGE
		}
#ifdef _USE_MULTILANGUAGE
		if( NULL != StrStr( tokens[i].c_str(), szlpLanguage ) ) // Command line language argument found
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			DNPATCHINFO.SetLanguageParam( tokens[i].c_str() );
		}
#endif // _USE_MULTILANGUAGE
	}

	tokens.clear();

	if( g_szCommandLinePatchURL.GetLength() > 0 && g_szCommandLinePatchURL.GetBuffer()[g_szCommandLinePatchURL.GetLength()-1] != '/' )
		g_szCommandLinePatchURL += '/';
}

void CDnLauncherApp::DeleteOldLogFile()
{
	TCHAR szCurFileName[MAX_PATH]= {0,};
	::GetModuleFileName( NULL, szCurFileName, MAX_PATH );
	TCHAR szDrive[MAX_PATH] = { 0, };
	TCHAR szDir[MAX_PATH] = { 0, };
	TCHAR szFileName[MAX_PATH] = { 0, };
	TCHAR szExt[MAX_PATH] = { 0, };
	_tsplitpath( szCurFileName, szDrive, szDir, szFileName, szExt );

	CString _szCurPath;
	_szCurPath.Format( _T("%s%s\\Log\\"), szDrive, szDir );

	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;
	CString szFindLogFile;
	szFindLogFile = _szCurPath;
	szFindLogFile += "DNLauncher_*_Log.txt";
	hFind = FindFirstFile( szFindLogFile.GetBuffer(), &FindFileData );

	std::vector<CString> vecStrLogFileName;
	while( hFind != INVALID_HANDLE_VALUE ) 
	{
		if( !( FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) )
		{
			CString szLogFile;
			szLogFile = _szCurPath;
			szLogFile += FindFileData.cFileName;

			vecStrLogFileName.push_back( szLogFile );
		}
		if( !FindNextFile( hFind, &FindFileData ) ) break;
	}
	FindClose( hFind );

	std::vector<CString> vecStrDeleteLogFileName;
	for( int i=0; i<static_cast<int>( vecStrLogFileName.size() ); i++ )
	{
		CString strTemp = vecStrLogFileName[i];
		strTemp.Delete( 0, strTemp.Find( L"_" ) + 1 );
		int nIndex = strTemp.Find( L"_" );
		strTemp.Delete( nIndex, strTemp.GetLength() - nIndex );
		int nLogDate = _wtoi( strTemp.GetBuffer() );

		struct tm now;
		time_t systemTime;

		time( &systemTime ); // Get current system time
		localtime_s( &now, &systemTime ); // Convert to local time

		TCHAR szCurDate[1024];
		_sntprintf_s( szCurDate, 1024, _T("%04d%02d%02d"), 1900+now.tm_year, now.tm_mon, now.tm_mday ); // Format current date string
		int nCurDate = _wtoi( szCurDate );

		if( nLogDate < nCurDate )
		{
			vecStrDeleteLogFileName.push_back( vecStrLogFileName[i] );
		}
	}

	for( int i=0; i<static_cast<int>( vecStrDeleteLogFileName.size() ); i++ )
	{
		ClientDeleteFile( vecStrDeleteLogFileName[i] );
	}

	vecStrLogFileName.clear();
	vecStrDeleteLogFileName.clear();
}

void CDnLauncherApp::UseLogFile()
{
	TCHAR szCurFileName[MAX_PATH]= {0,};
	::GetModuleFileName( NULL, szCurFileName, MAX_PATH );
	TCHAR szDrive[MAX_PATH] = { 0, };
	TCHAR szDir[MAX_PATH] = { 0, };
	TCHAR szFileName[MAX_PATH] = { 0, };
	TCHAR szExt[MAX_PATH] = { 0, };
	_tsplitpath( szCurFileName, szDrive, szDir, szFileName, szExt );

	CString _szCurPath;
	_szCurPath.Format( _T("%s%s\\Log"), szDrive, szDir );

	if( GetFileAttributes( _szCurPath.GetBuffer() ) != FILE_ATTRIBUTE_DIRECTORY )
		CreateDirectory( _szCurPath.GetBuffer(), NULL);

	LogWnd::CreateLog( true, LogWnd::LOG_TARGET_FILE );
}

void CDnLauncherApp::UseLogWindow()
{
	TCHAR szCurFileName[MAX_PATH]= {0,};
	::GetModuleFileName( NULL, szCurFileName, MAX_PATH );
	TCHAR szDrive[MAX_PATH] = { 0, };
	TCHAR szDir[MAX_PATH] = { 0, };
	TCHAR szFileName[MAX_PATH] = { 0, };
	TCHAR szExt[MAX_PATH] = { 0, };
	_tsplitpath( szCurFileName, szDrive, szDir, szFileName, szExt );

	CString _szCurPath;
	_szCurPath.Format( _T("%s%s\\Log"), szDrive, szDir );

	if( GetFileAttributes( _szCurPath.GetBuffer() ) != FILE_ATTRIBUTE_DIRECTORY )
		CreateDirectory( _szCurPath.GetBuffer(), NULL);

	LogWnd::CreateLog( true, LogWnd::LOG_TARGET_WINDOW );
}

BOOL CDnLauncherApp::RemoveUsedFile()
{
	BOOL bRtn = TRUE;
	LogWnd::TraceLog( L"RemoveUsedFile" );
	if( ClientDeleteFile( _T(DNLAUNCHER_NAME_TMP) ) == FALSE )
	{		
		KillProcess( _T(DNLAUNCHER_NAME) );	// Terminate existing dnlauncher.exe processes
		if( ClientDeleteFile( _T(DNLAUNCHER_NAME_TMP) ) == FALSE )
			bRtn = FALSE;
	}

	if( ClientDeleteFile( PATCHCONFIG_LIST ) == FALSE ) 
		bRtn = FALSE;

	if( !bRtn )
		g_nInitErrorCode = INIT_ERROR_REMOVE_FILE;

	return bRtn;
}

#ifdef _USE_MULTILANGUAGE
void CDnLauncherApp::SetLanguageParam()
{
	CString strLanguageParam = DNPATCHINFO.GetLanguageParam();
	if( strLanguageParam.GetLength() == 0 )
	{
		// Auto-detect language by keyboard layout
		int nLanguageID = PRIMARYLANGID( LOWORD( GetKeyboardLayout(0) ) );
		DNPATCHINFO.SetLanguageParamByLanguageID( nLanguageID );
	}
}
#endif // _USE_MULTILANGUAGE
