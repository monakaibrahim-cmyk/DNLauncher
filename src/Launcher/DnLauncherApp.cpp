#include "stdafx.h"
#include "Launcher/DnLauncherApp.h"

#include <tlhelp32.h>
#include "resource.h"
#include "Common/LogWnd.h"
#include "Launcher/DnFIrstPatchDlg.h"
#include "Launcher/DnLauncherDlgSG.h"
#include "Launcher/DnRegionConfig.h"
#include "Launcher/DnOptionData.h"
#include "Patcher/DnPatchInfo.h"

#if defined(__has_include) && __has_include(<dxdiag.h>)
#define HAVE_DXDIAG_HEADER 1
#include <dxdiag.h>
#else
#define HAVE_DXDIAG_HEADER 0
#endif

namespace
{
const TCHAR* const kLauncherMutexName = _T("_DragonNest Launcher");
const DWORD kMinDirectXVersion = 0x00090003; // 9.0c

CString LoadAppString(UINT nBaseId, const TCHAR* szFallback)
{
    CString str = CDnPatchInfo::GetInstance().GetString(nBaseId);
    if (str.IsEmpty())
    {
        return CString(szFallback);
    }
    return str;
}
} // namespace

BEGIN_MESSAGE_MAP(CDnLauncherApp, CWinApp)
    ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CDnLauncherApp theApp;

CDnLauncherApp::CDnLauncherApp()
    : m_hInstanceMutex(NULL)
{
}

CDnLauncherApp::~CDnLauncherApp()
{
}

bool CDnLauncherApp::IsProcessRunning(const TCHAR* szExeName)
{
    if (szExeName == NULL || szExeName[0] == _T('\0'))
    {
        return false;
    }

    HANDLE hSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnap == INVALID_HANDLE_VALUE)
    {
        return false;
    }

    PROCESSENTRY32 pe = { 0 };
    pe.dwSize = sizeof(pe);
    bool bFound = false;

    if (::Process32First(hSnap, &pe))
    {
        do
        {
            if (_tcsicmp(pe.szExeFile, szExeName) == 0)
            {
                bFound = true;
                break;
            }
        } while (::Process32Next(hSnap, &pe));
    }

    ::CloseHandle(hSnap);
    return bFound;
}

bool CDnLauncherApp::CheckDirectXVersion(CString& strOutVersion)
{
    strOutVersion = _T("9.0c");

#if HAVE_DXDIAG_HEADER
    IDxDiagProvider* pDxDiagProvider = NULL;
    HRESULT hr = ::CoCreateInstance(
        CLSID_DxDiagProvider, NULL, CLSCTX_INPROC_SERVER,
        IID_IDxDiagProvider, reinterpret_cast<void**>(&pDxDiagProvider));
    if (SUCCEEDED(hr) && pDxDiagProvider != NULL)
    {
        DXDIAG_INIT_PARAMS initParams = { 0 };
        initParams.dwSize = sizeof(initParams);
        initParams.dwDxDiagHeaderVersion = DXDIAG_DX9_SDK_VERSION;
        initParams.bAllowWHQLChecks = FALSE;

        if (SUCCEEDED(pDxDiagProvider->Initialize(&initParams)))
        {
            IDxDiagContainer* pRoot = NULL;
            IDxDiagContainer* pSysInfo = NULL;
            if (SUCCEEDED(pDxDiagProvider->GetRootContainer(&pRoot)) && pRoot != NULL)
            {
                if (SUCCEEDED(pRoot->GetChildContainer(L"DxDiag_SystemInfo", &pSysInfo)) && pSysInfo != NULL)
                {
                    DWORD dwMajor = 0;
                    DWORD dwMinor = 0;
                    TCHAR cLetter = _T(' ');
                    VARIANT var;
                    ::VariantInit(&var);

                    if (SUCCEEDED(pSysInfo->GetProp(L"dwDirectXVersionMajor", &var)) && var.vt == VT_UI4)
                    {
                        dwMajor = var.ulVal;
                    }
                    ::VariantClear(&var);

                    if (SUCCEEDED(pSysInfo->GetProp(L"dwDirectXVersionMinor", &var)) && var.vt == VT_UI4)
                    {
                        dwMinor = var.ulVal;
                    }
                    ::VariantClear(&var);

                    if (SUCCEEDED(pSysInfo->GetProp(L"szDirectXVersionLetter", &var)) &&
                        var.vt == VT_BSTR && var.bstrVal != NULL && var.bstrVal[0] != L'\0')
                    {
                        cLetter = static_cast<TCHAR>(var.bstrVal[0]);
                    }
                    ::VariantClear(&var);

                    const DWORD dwLetterVal = (cLetter >= _T('a') && cLetter <= _T('z'))
                        ? static_cast<DWORD>(cLetter - _T('a') + 1)
                        : 0;
                    const DWORD dwPacked = (dwMajor << 16) | (dwMinor << 8) | dwLetterVal;
                    if (dwMajor > 0)
                    {
                        if (cLetter != _T(' '))
                        {
                            strOutVersion.Format(_T("%u.%u%c"), dwMajor, dwMinor, cLetter);
                        }
                        else
                        {
                            strOutVersion.Format(_T("%u.%u"), dwMajor, dwMinor);
                        }
                    }

                    pSysInfo->Release();
                    pRoot->Release();
                    pDxDiagProvider->Release();

                    LogWnd::TraceLog(_T("DirectX Version (%u) (%s)"), dwPacked, strOutVersion.GetString());
                    return dwPacked >= kMinDirectXVersion;
                }
                pRoot->Release();
            }
        }
        pDxDiagProvider->Release();
    }
#endif

    // Fallback: verify d3d9.dll is present on Windows 10/11 when DxDiag COM is slow/disabled
    HMODULE hD3d9 = ::LoadLibrary(_T("d3d9.dll"));
    if (hD3d9 != NULL)
    {
        ::FreeLibrary(hD3d9);
        return true;
    }

    return false;
}

void CDnLauncherApp::RemoveUsedFile()
{
    CString baseDir = CDnPatchInfo::GetInstance().m_strClientPath;
    baseDir.TrimRight(_T("\\/"));
    CString strTmp = baseDir + _T("\\dnlauncher.tmp");
    if (::GetFileAttributes(strTmp) != INVALID_FILE_ATTRIBUTES)
    {
        for (int attempt = 0; attempt < 5; ++attempt)
        {
            if (::DeleteFile(strTmp))
            {
                break;
            }
            ::Sleep(200);
        }
    }
}

BOOL CDnLauncherApp::InitInstance()
{
    if (!AfxOleInit())
    {
        AfxMessageBox(_T("OLE initialization failed."));
        return FALSE;
    }

    INITCOMMONCONTROLSEX InitCtrls = { 0 };
    InitCtrls.dwSize = sizeof(InitCtrls);
    InitCtrls.dwICC = ICC_WIN95_CLASSES;
    ::InitCommonControlsEx(&InitCtrls);

    CWinApp::InitInstance();
    AfxEnableControlContainer();

    m_hInstanceMutex = ::CreateMutex(NULL, TRUE, kLauncherMutexName);
    if (m_hInstanceMutex != NULL && ::GetLastError() == ERROR_ALREADY_EXISTS)
    {
        CString strAlready = LoadAppString(1042, _T("The program is already running."));
        AfxMessageBox(strAlready, MB_ICONINFORMATION | MB_OK);
        return FALSE;
    }

    if (IsProcessRunning(_T("DragonNest.exe")) || IsProcessRunning(_T("DragonNest_x64.exe")))
    {
        CString strClientRunning = LoadAppString(1002, _T("Client is already running."));
        AfxMessageBox(strClientRunning, MB_ICONWARNING | MB_OK);
        return FALSE;
    }

    LogWnd::CreateLog();
    LogWnd::TraceLog(_T("InitLauncher Start!"));

    CString strDxVersion;
    if (!CheckDirectXVersion(strDxVersion))
    {
        CString strFmt = LoadAppString(1003,
            _T("Your current version of DirectX(%s) is outdated.\n\nPlease install the latest version of DirectX for stable game play."));
        CString strMsg;
        strMsg.Format(strFmt, strDxVersion.GetString());
        AfxMessageBox(strMsg, MB_ICONERROR | MB_OK);
        return FALSE;
    }

    CDnPatchInfo& patchInfo = CDnPatchInfo::GetInstance();
    if (!patchInfo.Init(m_lpCmdLine))
    {
        CString strFmt = LoadAppString(1001, _T("Launcher initialization failed.(E:%d)"));
        CString strMsg;
        strMsg.Format(strFmt, patchInfo.m_nErrorCode);
        AfxMessageBox(strMsg, MB_ICONERROR | MB_OK);
        return FALSE;
    }

    CDnOptionData::GetInstance().LoadConfig();
    if (!patchInfo.m_strLanguageParam.IsEmpty())
    {
        patchInfo.SetLanguageByName(patchInfo.m_strLanguageParam);
    }

    RemoveUsedFile();
    LogWnd::TraceLog(_T("InitLauncher Success!"));

    DnActiveLauncherDlg dlg;
    m_pMainWnd = &dlg;
    dlg.DoModal();

    return FALSE;
}

int CDnLauncherApp::ExitInstance()
{
    LogWnd::DestroyLog();
    if (m_hInstanceMutex != NULL)
    {
        ::ReleaseMutex(m_hInstanceMutex);
        ::CloseHandle(m_hInstanceMutex);
        m_hInstanceMutex = NULL;
    }
    return CWinApp::ExitInstance();
}
