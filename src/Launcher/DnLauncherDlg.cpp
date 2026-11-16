#include "stdafx.h"
#include "Launcher/DnLauncherDlg.h"

#include "resource.h"
#include "Common/LogWnd.h"
#include "Launcher/DnHtmlView.h"
#include "Launcher/DnOptionData.h"
#include "Launcher/DnOptionDlg.h"
#include "Patcher/DnPatchInfo.h"
#include "Patcher/DnPatchThread.h"

namespace
{
const UINT_PTR kPatchProgressTimerId = 1;
const COLORREF kStaticTextColor = RGB(255, 255, 255);
const DWORDLONG kLowRamThresholdBytes = 800000000ULL;
} // namespace

BEGIN_MESSAGE_MAP(CDnLauncherDlg, CDialog)
    ON_WM_DESTROY()
    ON_WM_PAINT()
    ON_WM_ERASEBKGND()
    ON_MESSAGE(WM_PRINTCLIENT, &CDnLauncherDlg::OnPrintClient)
    ON_WM_CTLCOLOR()
    ON_WM_LBUTTONDOWN()
    ON_WM_LBUTTONUP()
    ON_WM_MOUSEMOVE()
    ON_WM_QUERYDRAGICON()
    ON_WM_TIMER()
    ON_MESSAGE(WM_PATCH_STATUS, &CDnLauncherDlg::OnPatchStatus)
    ON_BN_CLICKED(IDC_CHECK_DIRECT_START, &CDnLauncherDlg::OnBnClickedCheckDirectStart)
    ON_BN_CLICKED(IDC_BTN_QUIT, &CDnLauncherDlg::OnBnClickedQuit)
    ON_BN_CLICKED(IDC_BTN_START_GAME, &CDnLauncherDlg::OnBnClickedStartGame)
    ON_BN_CLICKED(IDC_BTN_OPTION, &CDnLauncherDlg::OnBnClickedOption)
    ON_BN_CLICKED(IDC_BTN_WIN_CLOSE, &CDnLauncherDlg::OnBnClickedWinClose)
    ON_BN_CLICKED(IDC_BTN_WIN_MINIMIZE, &CDnLauncherDlg::OnBnClickedWinMinimize)
    ON_BN_CLICKED(IDC_BTN_DX9, &CDnLauncherDlg::OnBnClickedDx9)
    ON_BN_CLICKED(IDC_BTN_DX11, &CDnLauncherDlg::OnBnClickedDx11)
END_MESSAGE_MAP()

CDnLauncherDlg::CDnLauncherDlg(CWnd* pParent)
    : CDialog(CDnLauncherDlg::IDD, pParent)
    , m_hIcon(NULL)
    , m_pHtmlView(NULL)
    , m_pPatchThread(NULL)
    , m_bPatching(false)
    , m_bPatchComplete(false)
    , m_bDirectStart(false)
    , m_nLastPatchState(PATCH_STATE_NONE)
{
    m_hIcon = AfxGetApp() ? AfxGetApp()->LoadIcon(IDI_LAUNCHER_MAIN) : NULL;
}

CDnLauncherDlg::~CDnLauncherDlg()
{
    StopPatchWorker();
    if (m_pHtmlView != NULL)
    {
        delete m_pHtmlView;
        m_pHtmlView = NULL;
    }
    m_FontUi.DeleteObject();
    m_FontVersion.DeleteObject();
    m_FontBold.DeleteObject();
    m_BmpDownloadBar.DeleteObject();
    m_BmpCountBar.DeleteObject();
}

void CDnLauncherDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_BTN_QUIT, m_BtnQuit);
    DDX_Control(pDX, IDC_BTN_START_GAME, m_BtnStartGame);
    DDX_Control(pDX, IDC_BTN_OPTION, m_BtnOption);
    DDX_Control(pDX, IDC_BTN_WIN_CLOSE, m_BtnWinClose);
    DDX_Control(pDX, IDC_BTN_WIN_MINIMIZE, m_BtnWinMinimize);
    DDX_Control(pDX, IDC_BTN_DX9, m_BtnDX9);
    DDX_Control(pDX, IDC_BTN_DX11, m_BtnDX11);
    DDX_Control(pDX, IDC_CHECK_DIRECT_START, m_CheckDirectStart);
    DDX_Control(pDX, IDC_STATIC_VERSION, m_StaticVersion);
    DDX_Control(pDX, IDC_STATIC_FILE_COUNT, m_StaticFileCount);
    DDX_Control(pDX, IDC_STATIC_FILE_NAME, m_StaticFileName);
    DDX_Control(pDX, IDC_STATIC_TIME_LEFT, m_StaticTimeLeft);
    DDX_Control(pDX, IDC_STATIC_FILE_SIZE, m_StaticFileSize);
    DDX_Control(pDX, IDC_STATIC_DOWNLOAD_PERCENTAGE, m_StaticDownloadPercentage);
    DDX_Control(pDX, IDC_STATIC_DOWNLOAD_STATE, m_StaticDownloadState);
    DDX_Control(pDX, IDC_STATIC_DIRECT_START, m_StaticDirectStart);
}

UINT CDnLauncherDlg::GetXmlResourceId() const
{
    return IDR_XML_17002;
}

bool CDnLauncherDlg::LoadBackgroundPng(UINT nBaseResId)
{
    const UINT nResId = nBaseResId + static_cast<UINT>(CDnPatchInfo::GetInstance().m_nLanguageOffset);
    HINSTANCE hInst = ::AfxFindResourceHandle(MAKEINTRESOURCE(nResId), _T("PNG"));
    if (hInst == NULL)
    {
        hInst = ::AfxGetResourceHandle();
    }

    HRSRC hRes = ::FindResource(hInst, MAKEINTRESOURCE(nResId), _T("PNG"));
    if (hRes == NULL)
    {
        return false;
    }

    m_BgImage.Destroy();
    return m_BgImage.LoadResource(hRes, CXIMAGE_FORMAT_PNG, hInst);
}

BOOL CDnLauncherDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    SetIcon(m_hIcon, TRUE);
    SetIcon(m_hIcon, FALSE);

    CString strTitle = CDnPatchInfo::GetInstance().GetString(1000);
    if (strTitle.IsEmpty())
    {
        strTitle = _T("DragonNest Launcher");
    }
    SetWindowText(strTitle);

    m_FontUi.CreateFont(
        15, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
        CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Lucida Sans Unicode"));
    m_FontVersion.CreateFont(
        14, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
        CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Lucida Sans Unicode"));
    m_FontBold.CreateFont(
        15, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
        CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Lucida Sans Unicode"));

    m_LayoutMgr.LoadXml(GetXmlResourceId());

    // Size the borderless launcher window to match the background PNG artwork cleanly
    LoadBackgroundPng(IDR_PNG_5000);
    if (m_BgImage.IsValid())
    {
        SetWindowPos(NULL, 0, 0, m_BgImage.GetWidth(), m_BgImage.GetHeight(),
            SWP_NOMOVE | SWP_NOZORDER);
    }
    CenterWindow();

    ModifyStyleEx(0, WS_EX_LAYERED);
    SetLayeredWindowAttributes(RGB(255, 0, 255), 0, LWA_COLORKEY);

    ApplyControlLayout();
    ApplyControlSkins();
    ApplyLocalizedText();

    // Embed IE/Edge web view in the XML-defined webPage slot (Enum 0)
    CRect rcWeb = m_LayoutMgr.GetControlRect(0);
    if (!rcWeb.IsRectEmpty())
    {
        m_pHtmlView = new CDnHtmlView();
        if (m_pHtmlView->CreateInDialog(this, rcWeb, 19000))
        {
            m_pHtmlView->NavigateUrl(CDnPatchInfo::GetInstance().m_strGuidepageUrl);
        }
    }

    // Initialize skinned 9-slice progress bars
    m_BmpDownloadBar.LoadBitmap(5018);
    m_BmpCountBar.LoadBitmap(5019);

    if (CWnd* pDlAnchor = GetDlgItem(IDC_PROGRESS_DOWNLOAD))
    {
        m_ProgressDownload.Create(pDlAnchor, &m_BmpDownloadBar, 0, NULL, FALSE);
        m_ProgressDownload.SetRange(0, 100, 1, TRUE);
        m_ProgressDownload.SetPos(0);
    }
    if (CWnd* pCntAnchor = GetDlgItem(IDC_PROGRESS_COUNT))
    {
        m_ProgressCount.Create(pCntAnchor, &m_BmpCountBar, 0, NULL, FALSE);
        m_ProgressCount.SetRange(0, 100, 1, TRUE);
        m_ProgressCount.SetPos(0);
    }

    // Initialize DX9/DX11 toggle state from Config.ini
    const BOOL bUseDx11 = CDnOptionData::GetInstance().m_bUseDX11;
    m_BtnDX9.SetSelect(!bUseDx11);
    m_BtnDX11.SetSelect(bUseDx11);

    UpdatePatchControlsState(false, false);
    StartPatchWorker();

    return TRUE;
}

void CDnLauncherDlg::ApplyControlLayout()
{
    struct SLayoutMapping
    {
        int nCtrlId;
        int nEnum;
    };

    const SLayoutMapping mappings[] = {
        { IDC_BTN_QUIT,                 1  },
        { IDC_BTN_START_GAME,           2  },
        { IDC_BTN_OPTION,               3  },
        { IDC_BTN_WIN_CLOSE,            4  },
        { IDC_BTN_WIN_MINIMIZE,         5  },
        { IDC_PROGRESS_DOWNLOAD,        6  },
        { IDC_PROGRESS_COUNT,           7  },
        { IDC_STATIC_VERSION,           8  },
        { IDC_STATIC_FILE_COUNT,        9  },
        { IDC_STATIC_FILE_NAME,         10 },
        { IDC_STATIC_TIME_LEFT,         11 },
        { IDC_STATIC_FILE_SIZE,         12 },
        { IDC_STATIC_DOWNLOAD_PERCENTAGE, 13 },
        { IDC_STATIC_DOWNLOAD_STATE,    14 },
        { IDC_STATIC_DIRECT_START,      15 },
        { IDC_CHECK_DIRECT_START,       16 }
    };

    for (size_t i = 0; i < _countof(mappings); ++i)
    {
        m_LayoutMgr.MoveControl(this, mappings[i].nCtrlId, mappings[i].nEnum, FALSE);
    }

    // Place 56x18 DX9/DX11 toggle buttons cleanly between Start button (y=476) and DirectStart (y=523)
    m_BtnDX9.MoveWindow(511, 480, 56, 18, FALSE);
    m_BtnDX11.MoveWindow(594, 480, 56, 18, FALSE);

    // 17002.xml Enum 13 is 30px wide (475..505), whereas bold "100%" measures 32px; widen to 34px (left of Start at 514)
    if (::IsWindow(m_StaticDownloadPercentage.GetSafeHwnd()))
    {
        CRect rcPct;
        m_StaticDownloadPercentage.GetWindowRect(&rcPct);
        ScreenToClient(&rcPct);
        if (rcPct.Width() < 34 && rcPct.left + 34 < 514)
        {
            rcPct.right = rcPct.left + 34;
            m_StaticDownloadPercentage.MoveWindow(&rcPct, FALSE);
        }
    }

    CColorStatic* labels[] = {
        &m_StaticVersion,
        &m_StaticFileCount,
        &m_StaticFileName,
        &m_StaticTimeLeft,
        &m_StaticFileSize,
        &m_StaticDownloadPercentage,
        &m_StaticDownloadState,
        &m_StaticDirectStart
    };
    for (size_t i = 0; i < _countof(labels); ++i)
    {
        labels[i]->SetTransparent(TRUE);
        labels[i]->SetTextColor(kStaticTextColor);
        labels[i]->SetFont(&m_FontVersion);
    }
}

void CDnLauncherDlg::ApplyControlSkins()
{
    const UINT off = static_cast<UINT>(CDnPatchInfo::GetInstance().m_nLanguageOffset);
    LoadBackgroundPng(IDR_PNG_5000);

    m_BtnQuit.SetSkin(5001 + off, 5002 + off, 5003 + off);
    m_BtnWinClose.SetSkin(5004 + off, 5005 + off, 5006 + off);
    m_BtnWinMinimize.SetSkin(5007 + off, 5008 + off, 5009 + off);
    m_BtnOption.SetSkin(5010 + off, 5011 + off, 5012 + off);
    m_BtnStartGame.SetSkin(5013 + off, 5014 + off, 5015 + off);

    m_BtnDX9.SetSkin(IDR_JPG_1067, IDR_JPG_1068, IDR_JPG_1067);
    m_BtnDX11.SetSkin(IDR_JPG_1069, IDR_JPG_1070, IDR_JPG_1069);

    CxSkinButton* imgButtons[] = {
        &m_BtnQuit, &m_BtnStartGame, &m_BtnOption,
        &m_BtnWinClose, &m_BtnWinMinimize, &m_BtnDX9, &m_BtnDX11
    };
    for (size_t i = 0; i < _countof(imgButtons); ++i)
    {
        imgButtons[i]->SetWindowText(_T(""));
    }
}

void CDnLauncherDlg::ApplyLocalizedText()
{
    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    CString strDirect = info.GetString(1039);
    if (strDirect.IsEmpty())
    {
        strDirect = _T("Start game after patching.");
    }
    m_StaticDirectStart.SetWindowTextRefresh(strDirect);

    CString strVer;
    if (info.m_nClientVersion > 0)
    {
        strVer.Format(_T("Ver.%d (%s)"),
            info.m_nClientVersion,
            CDnPatchInfo::Is64BitOS() ? _T("x64") : _T("x86"));
    }
    m_StaticVersion.SetWindowTextRefresh(strVer);
}

void CDnLauncherDlg::StartPatchWorker()
{
    StopPatchWorker();

    m_bPatchComplete = false;
    m_bPatching = true;
    m_nLastPatchState = PATCH_STATE_NONE;
    m_pPatchThread = new CDnPatchDownloadThread();
    m_pPatchThread->SetNotifyHwnd(GetSafeHwnd());
    m_pPatchThread->Start();

    SetTimer(kPatchProgressTimerId, 100, NULL);
}

void CDnLauncherDlg::StopPatchWorker()
{
    if (::IsWindow(GetSafeHwnd()))
    {
        KillTimer(kPatchProgressTimerId);
    }

    if (m_pPatchThread != NULL)
    {
        m_pPatchThread->RequestStop();
        m_pPatchThread->End(5000);
        delete m_pPatchThread;
        m_pPatchThread = NULL;
    }
    m_bPatching = false;
}

void CDnLauncherDlg::UpdatePatchControlsState(bool bPatching, bool bCanStartGame)
{
    m_BtnQuit.ShowWindow(bPatching ? SW_SHOW : SW_HIDE);
    m_BtnQuit.EnableWindow(bPatching ? TRUE : FALSE);

    m_BtnStartGame.ShowWindow(bPatching ? SW_HIDE : SW_SHOW);
    m_BtnStartGame.EnableWindow(bCanStartGame ? TRUE : FALSE);

    m_BtnOption.EnableWindow(bPatching ? FALSE : TRUE);
}

CString CDnLauncherDlg::FormatByteSize(LONGLONG nBytes)
{
    CString str;
    if (nBytes >= 1048576LL)
    {
        str.Format(_T("%.1f MB"), static_cast<double>(nBytes) / 1048576.0);
    }
    else if (nBytes >= 1024LL)
    {
        str.Format(_T("%.1f KB"), static_cast<double>(nBytes) / 1024.0);
    }
    else
    {
        str.Format(_T("%lld B"), nBytes);
    }
    return str;
}

CString CDnLauncherDlg::FormatTimeRemaining(int nSeconds)
{
    if (nSeconds < 0)
    {
        return _T("");
    }

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    const int hrs = nSeconds / 3600;
    const int mins = (nSeconds % 3600) / 60;
    const int secs = nSeconds % 60;

    CString str;
    if (hrs > 0)
    {
        CString fmt = info.GetString(1027);
        if (fmt.IsEmpty()) fmt = _T("%d hr %d min %d sec");
        str.Format(fmt, hrs, mins, secs);
    }
    else if (mins > 0)
    {
        CString fmt = info.GetString(1028);
        if (fmt.IsEmpty()) fmt = _T("%d min %d sec");
        str.Format(fmt, mins, secs);
    }
    else
    {
        CString fmt = info.GetString(1029);
        if (fmt.IsEmpty()) fmt = _T("%d sec");
        str.Format(fmt, secs);
    }
    return str;
}

CString CDnLauncherDlg::GetStateMessage(int nPatchState)
{
    static const int kStateStringIds[] = {
        -1,   // 0 NONE
        1005, // 1 CONNECTING
        1006, // 2 VERSION_FAILED
        1007, // 3 DOWNLOADING
        1008, // 4 VERIFYING
        1009, // 5 PREPARING
        1010, // 6 DELETING
        1011, // 7 APPLYING
        1012, // 8 APPLY_FAILED
        -1,   // 9 STEP_DONE
        1014, // 10 COMPLETE
        -1,   // 11 LAUNCHER_RESTARTING
        1015, // 12 FAILED
        1016  // 13 TERMINATED
    };

    if (nPatchState < 0 || nPatchState >= static_cast<int>(_countof(kStateStringIds)))
    {
        return _T("");
    }

    const int nStrId = kStateStringIds[nPatchState];
    if (nStrId < 0)
    {
        return _T("");
    }

    return CDnPatchInfo::GetInstance().GetString(static_cast<UINT>(nStrId));
}

CString CDnLauncherDlg::FormatStateWithStep(int nPatchState, int nCurrentPatchIndex, int nTotalPatchCount)
{
    CString strMsg = GetStateMessage(nPatchState);
    if (strMsg.IsEmpty())
    {
        return strMsg;
    }

    const bool bStepState =
        (nPatchState == PATCH_STATE_DOWNLOADING ||
         nPatchState == PATCH_STATE_PREPARING ||
         nPatchState == PATCH_STATE_DELETING ||
         nPatchState == PATCH_STATE_APPLYING);

    if (bStepState && nCurrentPatchIndex > 0 && nTotalPatchCount > 0)
    {
        CString strFull;
        strFull.Format(_T("%s (%d/%d)"), strMsg.GetString(), nCurrentPatchIndex, nTotalPatchCount);
        return strFull;
    }

    return strMsg;
}

void CDnLauncherDlg::RefreshProgressUi()
{
    if (m_pPatchThread == NULL)
    {
        return;
    }

    SPatchProgressInfo info;
    m_pPatchThread->GetProgress(info);

    int dlPercent = 0;
    if (m_bPatchComplete)
    {
        dlPercent = 100;
    }
    else if (info.nTotalBytes > 0)
    {
        dlPercent = static_cast<int>((info.nCurrentBytes * 100LL) / info.nTotalBytes);
        dlPercent = max(0, min(100, dlPercent));
    }

    if (::IsWindow(m_ProgressDownload.GetSafeHwnd()))
    {
        m_ProgressDownload.SetPos(dlPercent);
    }

    if (::IsWindow(m_ProgressCount.GetSafeHwnd()))
    {
        if (m_bPatchComplete)
        {
            m_ProgressCount.SetPos(100);
        }
        else if (info.nTotalPatchCount > 0)
        {
            const int prevDone = (info.nCurrentPatchIndex > 0) ? (info.nCurrentPatchIndex - 1) : 0;
            const int stepShare = (m_nLastPatchState == PATCH_STATE_DOWNLOADING)
                ? (dlPercent / 2)
                : (50 + dlPercent / 2);
            const int cntPct = max(0, min(100, (prevDone * 100 + stepShare) / info.nTotalPatchCount));
            m_ProgressCount.SetPos(cntPct);
        }
    }

    CString strPct;
    if (m_bPatchComplete)
    {
        strPct = _T("100%");
    }
    else if (info.nTotalPatchCount > 0)
    {
        strPct.Format(_T("%d%%"), dlPercent);
    }
    m_StaticDownloadPercentage.SetWindowTextRefresh(strPct);

    if (!m_bPatchComplete)
    {
        const CString strState = FormatStateWithStep(m_nLastPatchState, info.nCurrentPatchIndex, info.nTotalPatchCount);
        if (!strState.IsEmpty())
        {
            m_StaticDownloadState.SetWindowTextRefresh(strState);
        }
    }

    if (info.nCurrentVersion > 0)
    {
        CString strFile;
        strFile.Format(_T("Patch%08d.pak"), info.nCurrentVersion);
        m_StaticFileName.SetWindowTextRefresh(strFile);
    }

    if (info.nDownloadFileSizeBytes > 0)
    {
        m_StaticFileSize.SetWindowTextRefresh(FormatByteSize(info.nDownloadFileSizeBytes));
    }

    if (!m_bPatchComplete && m_nLastPatchState == PATCH_STATE_DOWNLOADING &&
        info.fDownloadSpeedBytesPerSec > 1.0f && info.nTotalBytes > info.nCurrentBytes)
    {
        const LONGLONG remBytes = info.nTotalBytes - info.nCurrentBytes;
        const int remSec = static_cast<int>(static_cast<double>(remBytes) / info.fDownloadSpeedBytesPerSec);
        m_StaticTimeLeft.SetWindowTextRefresh(FormatTimeRemaining(remSec));
    }
    else if (m_bPatchComplete || m_nLastPatchState != PATCH_STATE_DOWNLOADING)
    {
        m_StaticTimeLeft.SetWindowTextRefresh(_T(""));
    }
}

LRESULT CDnLauncherDlg::OnPatchStatus(WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    const int nState = static_cast<int>(wParam);
    m_nLastPatchState = nState;

    SPatchProgressInfo info;
    if (m_pPatchThread != NULL)
    {
        m_pPatchThread->GetProgress(info);
    }

    CString strMsg = FormatStateWithStep(nState, info.nCurrentPatchIndex, info.nTotalPatchCount);
    if (!strMsg.IsEmpty())
    {
        m_StaticDownloadState.SetWindowTextRefresh(strMsg);
    }

    switch (nState)
    {
    case PATCH_STATE_CONNECTING:
    case PATCH_STATE_DOWNLOADING:
    case PATCH_STATE_PREPARING:
    case PATCH_STATE_DELETING:
    case PATCH_STATE_APPLYING:
        m_bPatching = true;
        UpdatePatchControlsState(true, false);
        break;

    case PATCH_STATE_COMPLETE:
    {
        m_bPatching = false;
        m_bPatchComplete = true;
        KillTimer(kPatchProgressTimerId);

        if (::IsWindow(m_ProgressDownload.GetSafeHwnd())) m_ProgressDownload.SetPos(100);
        if (::IsWindow(m_ProgressCount.GetSafeHwnd())) m_ProgressCount.SetPos(100);

        RefreshProgressUi();
        ApplyLocalizedText();
        UpdatePatchControlsState(false, true);

        if (m_bDirectStart)
        {
            LaunchGameClient();
        }
        break;
    }

    case PATCH_STATE_LAUNCHER_RESTARTING:
        m_bPatching = false;
        KillTimer(kPatchProgressTimerId);
        EndDialog(IDOK);
        break;

    case PATCH_STATE_VERSION_FAILED:
    case PATCH_STATE_VERIFYING:
        if (nState == PATCH_STATE_VERSION_FAILED)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("ProcessFullVersionPatch"));
            CString strReinstall = CDnPatchInfo::GetInstance().GetString(1013);
            if (!strReinstall.IsEmpty())
            {
                m_StaticDownloadState.SetWindowTextRefresh(strReinstall);
            }
            m_bPatching = false;
            KillTimer(kPatchProgressTimerId);
            UpdatePatchControlsState(false, false);
        }
        break;

    case PATCH_STATE_APPLY_FAILED:
    case PATCH_STATE_FAILED:
    case PATCH_STATE_TERMINATED:
        m_bPatching = false;
        KillTimer(kPatchProgressTimerId);
        UpdatePatchControlsState(false, false);
        break;

    default:
        break;
    }

    return 0;
}

void CDnLauncherDlg::OnTimer(UINT_PTR nIDEvent)
{
    if (nIDEvent == kPatchProgressTimerId)
    {
        RefreshProgressUi();
    }
    CDialog::OnTimer(nIDEvent);
}

void CDnLauncherDlg::LaunchGameClient()
{
    MEMORYSTATUSEX memStatus = { 0 };
    memStatus.dwLength = sizeof(memStatus);
    if (::GlobalMemoryStatusEx(&memStatus) && memStatus.ullTotalPhys < kLowRamThresholdBytes)
    {
        CString strWarn = CDnPatchInfo::GetInstance().GetString(1044);
        if (!strWarn.IsEmpty())
        {
            AfxMessageBox(strWarn, MB_ICONWARNING | MB_OK);
        }
    }

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    CString baseDir = info.m_strClientPath;
    baseDir.TrimRight(_T("\\/"));

    CString strExeName = _T("DragonNest.exe");
    if (CDnPatchInfo::Is64BitOS())
    {
        CString strX64 = baseDir + _T("\\DragonNest_x64.exe");
        if (::GetFileAttributes(strX64) != INVALID_FILE_ATTRIBUTES)
        {
            strExeName = _T("DragonNest_x64.exe");
        }
    }

    CString strExePath = baseDir + _T("\\") + strExeName;
    const bool bUseDx11 = (CDnOptionData::GetInstance().m_bUseDX11 != FALSE);
    CString strParams = info.GetGameLaunchParameters(bUseDx11);

    LogWnd::TraceLog(_T("Launch Game: %s %s"), strExePath.GetString(), strParams.GetString());
    HINSTANCE hRes = ::ShellExecute(NULL, _T("open"), strExePath, strParams, baseDir, SW_SHOWNORMAL);
    if (reinterpret_cast<INT_PTR>(hRes) <= 32)
    {
        CString strErr;
        strErr.Format(_T("Failed to launch %s (Error %Id)."), strExeName.GetString(), reinterpret_cast<INT_PTR>(hRes));
        AfxMessageBox(strErr, MB_ICONERROR | MB_OK);
        return;
    }

    // Reconstructed from DNLauncher.exe 0x00420c87..0x00420ea0 (DnAutoUpdate.exe handoff)
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Check Next Version Ver:%d, Server Ver:%d"),
        info.m_nNextVersion, info.m_nServerVersion);
    if (info.m_nNextVersion > 0 && info.m_nNextVersion > info.m_nServerVersion)
    {
        CString strAutoUpdateParams = info.GetAutoUpdateParameters();
        LogWnd::Log(LogWnd::LogLevel::Info, _T("Execute AutoUpdate.exe %s"), strAutoUpdateParams.GetString());
        CString strAutoUpdateExe = baseDir + _T("\\DnAutoUpdate.exe");
        if (::GetFileAttributes(strAutoUpdateExe) != INVALID_FILE_ATTRIBUTES)
        {
            ::ShellExecute(GetSafeHwnd(), _T("open"), strAutoUpdateExe, strAutoUpdateParams, baseDir, SW_SHOWNORMAL);
        }
    }

    EndDialog(IDOK);
}

void CDnLauncherDlg::OnBnClickedCheckDirectStart()
{
    m_bDirectStart = (m_CheckDirectStart.GetCheck() == BST_CHECKED);
}

void CDnLauncherDlg::OnBnClickedQuit()
{
    if (m_bPatching)
    {
        CString strPrompt = CDnPatchInfo::GetInstance().GetString(1021);
        if (strPrompt.IsEmpty()) strPrompt = _T("Do you want to cancel the patch process?");
        if (AfxMessageBox(strPrompt, MB_YESNO | MB_ICONQUESTION) != IDYES)
        {
            return;
        }
        StopPatchWorker();
    }
    EndDialog(IDCANCEL);
}

void CDnLauncherDlg::OnBnClickedStartGame()
{
    if (m_bPatchComplete)
    {
        LaunchGameClient();
    }
}

void CDnLauncherDlg::OnBnClickedOption()
{
    CDnOptionDlg dlg(this);
    dlg.DoModal();
}

void CDnLauncherDlg::OnBnClickedWinClose()
{
    OnCancel();
}

void CDnLauncherDlg::OnBnClickedWinMinimize()
{
    ShowWindow(SW_MINIMIZE);
}

void CDnLauncherDlg::OnBnClickedDx9()
{
    CDnOptionData& opt = CDnOptionData::GetInstance();
    opt.m_bUseDX11 = FALSE;
    m_BtnDX9.SetSelect(TRUE);
    m_BtnDX11.SetSelect(FALSE);
    opt.SaveConfig();
}

void CDnLauncherDlg::OnBnClickedDx11()
{
    CDnOptionData& opt = CDnOptionData::GetInstance();
    opt.m_bUseDX11 = TRUE;
    m_BtnDX9.SetSelect(FALSE);
    m_BtnDX11.SetSelect(TRUE);
    opt.SaveConfig();
}

void CDnLauncherDlg::OnCancel()
{
    if (m_bPatching)
    {
        CString strPrompt = CDnPatchInfo::GetInstance().GetString(1043);
        if (strPrompt.IsEmpty()) strPrompt = _T("Exit the launcher?");
        if (AfxMessageBox(strPrompt, MB_YESNO | MB_ICONQUESTION) != IDYES)
        {
            return;
        }
        StopPatchWorker();
    }
    CDialog::OnCancel();
}

BOOL CDnLauncherDlg::PreTranslateMessage(MSG* pMsg)
{
    if (pMsg->message == WM_KEYDOWN && (pMsg->wParam == VK_ESCAPE || pMsg->wParam == VK_RETURN))
    {
        return TRUE;
    }
    return CDialog::PreTranslateMessage(pMsg);
}

void CDnLauncherDlg::OnDestroy()
{
    StopPatchWorker();
    if (m_pHtmlView != NULL)
    {
        if (::IsWindow(m_pHtmlView->GetSafeHwnd()))
        {
            m_pHtmlView->DestroyWindow();
        }
        delete m_pHtmlView;
        m_pHtmlView = NULL;
    }
    CDialog::OnDestroy();
}

void CDnLauncherDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this);
        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);
        const int cxIcon = ::GetSystemMetrics(SM_CXICON);
        const int cyIcon = ::GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        const int x = (rect.Width() - cxIcon + 1) / 2;
        const int y = (rect.Height() - cyIcon + 1) / 2;
        dc.DrawIcon(x, y, m_hIcon);
        return;
    }

    CPaintDC dc(this);
    if (m_BgImage.IsValid())
    {
        CRect rcClient;
        GetClientRect(&rcClient);
        m_BgImage.Draw(dc.GetSafeHdc(), rcClient, NULL, false);
    }
    else
    {
        CDialog::OnPaint();
    }
}

BOOL CDnLauncherDlg::OnEraseBkgnd(CDC* pDC)
{
    UNREFERENCED_PARAMETER(pDC);
    return TRUE;
}

LRESULT CDnLauncherDlg::OnPrintClient(WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    HDC hDC = reinterpret_cast<HDC>(wParam);
    if (hDC != NULL && m_BgImage.IsValid())
    {
        CRect rcClient;
        GetClientRect(&rcClient);
        m_BgImage.Draw(hDC, rcClient, NULL, false);
        return 1;
    }
    return Default();
}

HBRUSH CDnLauncherDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
    if (pWnd != NULL && pWnd->GetDlgCtrlID() == IDC_CHECK_DIRECT_START)
    {
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(kStaticTextColor);
        return static_cast<HBRUSH>(::GetStockObject(HOLLOW_BRUSH));
    }

    // Let reflected CColorStatic controls supply their own configured text color/brush first
    return CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
}

void CDnLauncherDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
    CDialog::OnLButtonDown(nFlags, point);
    PostMessage(WM_NCLBUTTONDOWN, HTCAPTION, MAKELPARAM(point.x, point.y));
}

void CDnLauncherDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
    CDialog::OnLButtonUp(nFlags, point);
}

void CDnLauncherDlg::OnMouseMove(UINT nFlags, CPoint point)
{
    CDialog::OnMouseMove(nFlags, point);
}

HCURSOR CDnLauncherDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}
