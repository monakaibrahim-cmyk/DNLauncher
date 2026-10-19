// DnAutoUpdate.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "DnAutoUpdate.h"
#include "DnAutoUpdateDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

extern CString			g_strHttpPath;
extern CString			g_strLocalPath;
extern vector<int>		g_vecUpdateVersion;

// CDnAutoUpdateApp

BEGIN_MESSAGE_MAP(CDnAutoUpdateApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

int __cdecl DefautAllocHook( int, void *, size_t, int, long, const unsigned char *, int )
{
	return 1;
}

int __cdecl MyAllocHook(
						int nAllocType,
						void * pvData,
						size_t nSize,
						int nBlockUse,
						long lRequest,
						const unsigned char * szFileName,
						int nLine
						)
{
	if( nAllocType == _HOOK_ALLOC && nSize == 196 )
	{
		int a = 0;
	}
	return 1;
}

// CDnAutoUpdateApp construction

CDnAutoUpdateApp::CDnAutoUpdateApp()
{
	// Place any significant initialization in InitInstance
}

// The one and only CDnAutoUpdateApp object

CDnAutoUpdateApp theApp;

// CDnAutoUpdateApp initialization

BOOL CDnAutoUpdateApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	SetRegistryKey(_T("DragonNest AutoUpdate"));

	CString strCmdLine = m_lpCmdLine;

	int nIndex = strCmdLine.Find( '|' );
	g_strHttpPath = strCmdLine.Left( nIndex );
	strCmdLine.Delete( 0, nIndex + 1 );

	nIndex = strCmdLine.Find( '|' );
	g_strLocalPath = strCmdLine.Left( nIndex );
	strCmdLine.Delete( 0, nIndex + 1 );

	nIndex = strCmdLine.Find( '-' );
	char szTemp[256] = { 0, };
	WideCharToMultiByte( CP_ACP, 0, strCmdLine.Left( nIndex ).GetBuffer(), -1, szTemp, sizeof(szTemp), NULL, NULL );
	int nStartVersion = atoi( szTemp );
	strCmdLine.Delete( 0, nIndex + 1 );
	WideCharToMultiByte( CP_ACP, 0, strCmdLine.GetBuffer(), -1, szTemp, sizeof(szTemp), NULL, NULL );
	int nTargetVersion = atoi( szTemp );

	if( g_strHttpPath.GetLength() == 0 || g_strLocalPath.GetLength() == 0 )
		return FALSE;
	if( nStartVersion == 0 || nTargetVersion == 0 || nStartVersion > nTargetVersion )
		return FALSE;

	for( int i=nStartVersion; i<=nTargetVersion; i++ )
		g_vecUpdateVersion.push_back( i );

	CDnAutoUpdateDlg dlg;
	m_pMainWnd = &dlg;

	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	// application, rather than start the application's message pump.
	return FALSE;
}
