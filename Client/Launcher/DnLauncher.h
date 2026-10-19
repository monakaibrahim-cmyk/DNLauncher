// DnLauncher.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
class CDnLauncherDlg;

// CDnLauncherApp:
// See DnLauncher.cpp for the implementation of this class
//
class CDnLauncherApp : public CWinApp
{
public:
	CDnLauncherApp();
	~CDnLauncherApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

public:
	BOOL InitLauncher();			// Initialize launcher
	BOOL InitFail();				// Handle initialization failure and show error message
	BOOL CheckDirectXVersion();		// Check DirectX version
	void DeleteOldLogFile();		// Delete outdated log files
	void UseLogFile();				// Initialize file logging
	void UseLogWindow();			// Initialize window logging
	BOOL RemoveUsedFile();			// Clean up temporary update files from previous run
	void ParseCommandLine();		// Parse command line arguments
	
#ifdef _FIRST_PATCH
	BOOL InitFirstPatchThread();	// Initialize FirstPatch thread
	void TerminateFirstPatchThread();	// Terminate FirstPatch thread
#endif

#ifdef _USE_MULTILANGUAGE
	void SetLanguageParam();
#endif // _USE_MULTILANGUAGE
};

extern CDnLauncherApp theApp;

enum emInitErrorCode
{
	INIT_ERROR_CLIENT_ALEADY_RUN = 1,
	INIT_ERROR_DX_VER,
	INIT_ERROR_SERVICE_MODULE,
	INIT_ERROR_REMOVE_FILE,
	INIT_ERROR_PATCHCONFIGLIST_DOWNLOAD,
	INIT_ERROR_PATCHCONFIGLIST_PARSING,
	INIT_ERROR_INTERFACE,
	INIT_ERROR_WEBPAGE,
	INIT_ERROR_SET_PATCHINFO,
	INIT_ERROR_SET_PARAMETER,
	INIT_ERROR_COMMAND_LINE,
	INIT_ERROR_FIRSTPATCH_THREAD_CREATE_FAILED
};