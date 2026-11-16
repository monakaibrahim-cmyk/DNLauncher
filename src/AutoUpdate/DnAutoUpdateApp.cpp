#include "stdafx.h"
#include "DnAutoUpdateApp.h"
#include "DnAutoUpdateDlg.h"

BEGIN_MESSAGE_MAP(CDnAutoUpdateApp, CWinApp)
    ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CDnAutoUpdateApp::CDnAutoUpdateApp()
{
}

CDnAutoUpdateApp::~CDnAutoUpdateApp()
{
}

#ifndef DNAUTOUPDATE_LIBRARY_ONLY
CDnAutoUpdateApp theApp;
#endif

// ---------------------------------------------------------------------------
// 0x0040283F..0x00402AB5: Command-line parser for "%s|%s|%d-%d"
// Example: "http://patchsea.dragonnest.com/Game/DragonNest/Patch/|C:\DragonNest\|16-17"
// ---------------------------------------------------------------------------
bool CDnAutoUpdateApp::ParseCommandLineArgs(
    LPCTSTR           szCmdLine,
    CString&          strOutPatchUrl,
    CString&          strOutClientPath,
    std::vector<int>& vecOutPatchList)
{
    strOutPatchUrl.Empty();
    strOutClientPath.Empty();
    vecOutPatchList.clear();

    if (szCmdLine == NULL || szCmdLine[0] == _T('\0')) {
        return false;
    }

    CString strCmd(szCmdLine);

    // 1. Extract Patch URL before first '|' (0x00402863)
    int nFirstPipe = strCmd.Find(_T('|'));
    strOutPatchUrl = (nFirstPipe >= 0) ? strCmd.Left(nFirstPipe) : CString();
    strCmd.Delete(0, nFirstPipe + 1);

    // 2. Extract Client Path before second '|' (0x004028E3)
    int nSecondPipe  = strCmd.Find(_T('|'));
    strOutClientPath = (nSecondPipe >= 0) ? strCmd.Left(nSecondPipe) : CString();
    strCmd.Delete(0, nSecondPipe + 1);

    // 3. Extract StartVersion-EndVersion separated by '-' (0x00402964)
    int nDash = strCmd.Find(_T('-'));
    CString strStartVer = (nDash >= 0) ? strCmd.Left(nDash) : CString();
    strCmd.Delete(0, nDash + 1);
    CString strEndVer = strCmd;

    char szStartAnsi[256] = { 0 };
    char szEndAnsi[256]   = { 0 };
#ifdef _UNICODE
    ::WideCharToMultiByte(CP_ACP, 0, strStartVer, -1, szStartAnsi, sizeof(szStartAnsi) - 1, NULL, NULL);
    ::WideCharToMultiByte(CP_ACP, 0, strEndVer, -1, szEndAnsi, sizeof(szEndAnsi) - 1, NULL, NULL);
#else
    strncpy_s(szStartAnsi, strStartVer, _TRUNCATE);
    strncpy_s(szEndAnsi, strEndVer, _TRUNCATE);
#endif

    int nStartVer = atoi(szStartAnsi);
    int nEndVer   = atoi(szEndAnsi);

    if (strOutPatchUrl.IsEmpty() || strOutClientPath.IsEmpty() ||
        nStartVer == 0 || nEndVer == 0 || nStartVer > nEndVer) {
        return false;
    }

    for (int v = nStartVer; v <= nEndVer; ++v) {
        vecOutPatchList.push_back(v);
    }

    return true;
}

// ---------------------------------------------------------------------------
// 0x004027C0: CDnAutoUpdateApp::InitInstance
// ---------------------------------------------------------------------------
BOOL CDnAutoUpdateApp::InitInstance()
{
    INITCOMMONCONTROLSEX InitCtrls;
    InitCtrls.dwSize = sizeof(InitCtrls);
    InitCtrls.dwICC  = ICC_WIN95_CLASSES;
    ::InitCommonControlsEx(&InitCtrls);

    CWinApp::InitInstance();
    AfxEnableControlContainer();

    SetRegistryKey(_T("로컬 응용 프로그램 마법사로 생성된 응용 프로그램"));

    if (ParseCommandLineArgs(m_lpCmdLine, g_strPatchUrl, g_strClientPath, g_vecPatchList)) {
        CDnAutoUpdateDlg dlg;
        m_pMainWnd = &dlg;
        dlg.DoModal();
    }

    return FALSE;
}
