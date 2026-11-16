#include "stdafx.h"
#include "DnAutoUpdateDlg.h"
#include "HttpDownload.h"
#include <mmsystem.h>

#ifndef NIIF_USER
#define NIIF_USER 0x00000004
#endif

CDnAutoUpdateDlg* g_pAutoUpdateDlg     = NULL; // 0x0044C748
int               g_nCurrentPatchCount = 0;    // 0x0044C74C
CString           g_strPatchUrl;               // 0x0044C7FC
CString           g_strClientPath;             // 0x0044C800
std::vector<int>  g_vecPatchList;              // 0x0044C804
CString           g_strPatchFileName;          // 0x0044C814

BEGIN_MESSAGE_MAP(CDnAutoUpdateDlg, CDialog)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_WM_SYSCOMMAND()
    ON_WM_DESTROY()
    ON_WM_TIMER()
    ON_WM_CLOSE()
    ON_WM_WINDOWPOSCHANGING()
    ON_MESSAGE(WM_TRAYICON_NOTIFY, &CDnAutoUpdateDlg::OnTrayNotification)
    ON_COMMAND(ID_MENU_EXIT, &CDnAutoUpdateDlg::OnBnClickedExit)
    ON_COMMAND(ID_MENU_PAUSE, &CDnAutoUpdateDlg::OnBnClickedPause)
    ON_COMMAND(ID_MENU_RESUME, &CDnAutoUpdateDlg::OnBnClickedResume)
    ON_BN_CLICKED(IDC_BUTTON_PAUSE, &CDnAutoUpdateDlg::OnBnClickedPause)
    ON_BN_CLICKED(IDC_BUTTON_RESUME, &CDnAutoUpdateDlg::OnBnClickedResume)
    ON_BN_CLICKED(IDC_BUTTON_EXIT, &CDnAutoUpdateDlg::OnBnClickedExit)
END_MESSAGE_MAP()

// ---------------------------------------------------------------------------
// 0x00404070: CDnAutoUpdateDlg::CDnAutoUpdateDlg
// ---------------------------------------------------------------------------
CDnAutoUpdateDlg::CDnAutoUpdateDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CDnAutoUpdateDlg::IDD, pParent)
    , m_bVisible(FALSE)
    , m_bTrayMouseMoved(FALSE)
    , m_pDownloadThread(NULL)
    , m_bDownloadEnd(FALSE)
    , m_dwDownloadEndTime(0)
    , m_hIcon(NULL)
{
    ::ZeroMemory(&m_nid, sizeof(m_nid));
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
    g_pAutoUpdateDlg = this;
}

// ---------------------------------------------------------------------------
// 0x00402B40: CDnAutoUpdateDlg::~CDnAutoUpdateDlg
// ---------------------------------------------------------------------------
CDnAutoUpdateDlg::~CDnAutoUpdateDlg()
{
    if (g_pAutoUpdateDlg == this) {
        g_pAutoUpdateDlg = NULL;
    }
}

// ---------------------------------------------------------------------------
// 0x00404150: CDnAutoUpdateDlg::DoDataExchange
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_PROGRESS_DOWNLOAD, m_ctrlProgress);
}

// ---------------------------------------------------------------------------
// 0x00403B00: CDnAutoUpdateDlg::DownloadThreadProc
// ---------------------------------------------------------------------------
UINT __cdecl CDnAutoUpdateDlg::DownloadThreadProc(LPVOID /*pParam*/)
{
    HINTERNET hSession = ::InternetOpen(NULL, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    if (hSession == NULL) {
        return 0;
    }

    int nResult   = CHttpDownload::DOWNLOAD_ERROR;
    int nListSize = static_cast<int>(g_vecPatchList.size());

    for (int i = 0; i < nListSize; ++i) {
        g_HttpDownload.Reset();

        int nPatchVer = g_vecPatchList[i];
        CString strSubDir;
        strSubDir.Format(_T("%08d"), nPatchVer);

        CString strBaseUrl = g_strPatchUrl;
        if (!strBaseUrl.IsEmpty() && strBaseUrl[strBaseUrl.GetLength() - 1] != _T('/')) {
            strBaseUrl += _T('/');
        }
        strBaseUrl += strSubDir + _T("/");

        CString strFullUrl;
        strFullUrl.Format(_T("%sPatch%08d.pak"), static_cast<LPCTSTR>(strBaseUrl), nPatchVer);

        CString strSavePath;
        strSavePath.Format(_T("%sPatch%08d.pak"), static_cast<LPCTSTR>(g_strClientPath), nPatchVer);

        g_nCurrentPatchCount = i + 1;
        g_strPatchFileName   = strSavePath;

        int nTry = 0;
        do {
            nResult = g_HttpDownload.DownloadFile(hSession, strFullUrl, strSavePath);
            if (nResult == CHttpDownload::DOWNLOAD_SUCCESS ||
                nResult == CHttpDownload::DOWNLOAD_ALREADY_EXISTS ||
                nResult == CHttpDownload::DOWNLOAD_STOPPED) {
                break;
            }
            ++nTry;
        } while (nTry < 3);

        if (nResult == CHttpDownload::DOWNLOAD_ERROR ||
            nResult == CHttpDownload::DOWNLOAD_STOPPED) {
            break;
        }
    }

    ::InternetCloseHandle(hSession);

    if (g_pAutoUpdateDlg != NULL) {
        g_pAutoUpdateDlg->OnDownloadComplete(nResult);
    }

    return 0;
}

// ---------------------------------------------------------------------------
// 0x004041E0: CDnAutoUpdateDlg::OnInitDialog
// ---------------------------------------------------------------------------
BOOL CDnAutoUpdateDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    SetIcon(m_hIcon, TRUE);
    SetIcon(m_hIcon, FALSE);

    ::ZeroMemory(&m_nid, sizeof(m_nid));
    m_nid.cbSize           = sizeof(NOTIFYICONDATA);
    m_nid.hWnd             = m_hWnd;
    m_nid.uID              = IDR_MAINFRAME;
    m_nid.uFlags           = NIF_ICON | NIF_MESSAGE | NIF_TIP | NIF_INFO;
    m_nid.uCallbackMessage = WM_TRAYICON_NOTIFY;
    m_nid.hIcon            = ::LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_MAINFRAME));
    m_nid.uTimeout         = 4000;
    m_nid.dwInfoFlags      = NIIF_USER;

    lstrcpyn(m_nid.szInfoTitle, _T("DragonNest"), _countof(m_nid.szInfoTitle));
    lstrcpyn(m_nid.szInfo, _T("Start Download Next Patch"), _countof(m_nid.szInfo));

    ::Shell_NotifyIcon(NIM_ADD, &m_nid);

    m_menuTray.LoadMenu(IDR_MENU_TRAY);

    m_pDownloadThread = AfxBeginThread(DownloadThreadProc, this, 0, 0, 0, NULL);
    SetTimer(1, 500, NULL);

    return TRUE;
}

// ---------------------------------------------------------------------------
// 0x004043B0: CDnAutoUpdateDlg::OnPaint
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnPaint()
{
    if (IsIconic()) {
        CPaintDC dc(this);
        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        dc.DrawIcon(x, y, m_hIcon);
    } else {
        CDialog::OnPaint();
    }
}

// ---------------------------------------------------------------------------
// 0x00404490: CDnAutoUpdateDlg::OnQueryDragIcon
// ---------------------------------------------------------------------------
HCURSOR CDnAutoUpdateDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

// ---------------------------------------------------------------------------
// 0x00404590: CDnAutoUpdateDlg::OnSysCommand
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
    if ((nID & 0xFFF0) == SC_MINIMIZE) {
        m_bVisible = FALSE;
        ShowWindow(SW_HIDE);
        return;
    }
    CDialog::OnSysCommand(nID, lParam);
}

// ---------------------------------------------------------------------------
// 0x004041C0: CDnAutoUpdateDlg::OnClose
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnClose()
{
    m_bVisible = FALSE;
    ShowWindow(SW_HIDE);
}

// ---------------------------------------------------------------------------
// 0x00404560: CDnAutoUpdateDlg::OnWindowPosChanging
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnWindowPosChanging(WINDOWPOS* lpwndpos)
{
    CDialog::OnWindowPosChanging(lpwndpos);
    if (m_bVisible) {
        lpwndpos->flags |= SWP_SHOWWINDOW;
    } else {
        lpwndpos->flags &= ~SWP_SHOWWINDOW;
    }
}

// ---------------------------------------------------------------------------
// 0x00404180: CDnAutoUpdateDlg::OnDestroy
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnDestroy()
{
    if (m_pDownloadThread != NULL) {
        g_HttpDownload.m_bStop = TRUE;
        ::WaitForSingleObject(m_pDownloadThread->m_hThread, INFINITE);
    }
    ::Shell_NotifyIcon(NIM_DELETE, &m_nid);
    CDialog::OnDestroy();
}

// ---------------------------------------------------------------------------
// 0x004044A0: CDnAutoUpdateDlg::OnTrayNotification (WM_USER + 1)
// ---------------------------------------------------------------------------
LRESULT CDnAutoUpdateDlg::OnTrayNotification(WPARAM /*wParam*/, LPARAM lParam)
{
    if (lParam == WM_MOUSEMOVE) {
        if (!m_bTrayMouseMoved) {
            ::Shell_NotifyIcon(NIM_DELETE, &m_nid);
            m_nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
            ::Shell_NotifyIcon(NIM_ADD, &m_nid);
            m_bTrayMouseMoved = TRUE;
        }
    } else if (lParam == WM_LBUTTONDBLCLK) {
        m_bVisible = TRUE;
        ShowWindow(SW_SHOW);
    } else if (lParam == WM_RBUTTONUP) {
        CPoint pt;
        ::GetCursorPos(&pt);
        CMenu* pSubMenu = m_menuTray.GetSubMenu(0);
        if (pSubMenu != NULL) {
            pSubMenu->TrackPopupMenu(TPM_RIGHTALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, this, NULL);
        }
    }
    return 1;
}

// ---------------------------------------------------------------------------
// 0x004045C0: CDnAutoUpdateDlg::OnBnClickedPause
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnBnClickedPause()
{
    if (m_pDownloadThread != NULL) {
        ::SuspendThread(m_pDownloadThread->m_hThread);
    }
}

// ---------------------------------------------------------------------------
// 0x004045E0: CDnAutoUpdateDlg::OnBnClickedResume
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnBnClickedResume()
{
    if (m_pDownloadThread != NULL) {
        ::ResumeThread(m_pDownloadThread->m_hThread);
    }
}

// ---------------------------------------------------------------------------
// 0x00404600: CDnAutoUpdateDlg::OnBnClickedExit
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnBnClickedExit()
{
    CDialog::OnCancel();
}

// ---------------------------------------------------------------------------
// 0x00404610: CDnAutoUpdateDlg::OnTimer
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnTimer(UINT_PTR nIDEvent)
{
    CDialog::OnTimer(nIDEvent);

    if (m_ctrlProgress.GetSafeHwnd() != NULL) {
        ::SendMessage(m_ctrlProgress.GetSafeHwnd(), PBM_SETRANGE32, 0, g_HttpDownload.m_dwTotalFileSize);
        ::SendMessage(m_ctrlProgress.GetSafeHwnd(), PBM_SETPOS, g_HttpDownload.m_dwReadSize, 0);
    }

    UpdateProgressUI(g_HttpDownload.m_fDownloadRate, g_HttpDownload.m_fPercent);

    if (m_bDownloadEnd) {
        if (::timeGetTime() - m_dwDownloadEndTime > 5000) {
            CDialog::OnCancel();
        }
    }
}

// ---------------------------------------------------------------------------
// 0x004046A0: CDnAutoUpdateDlg::UpdateProgressUI
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::UpdateProgressUI(float fRate, float fPercent)
{
    CString strSpeed;
    if (fPercent < 10.0f) {
        strSpeed.Format(_T("Download Patch :   %1.0f%% [%4.2f KB/s]"),
                        static_cast<double>(fPercent), static_cast<double>(fRate));
    } else if (static_cast<double>(fPercent) < 100.0) {
        strSpeed.Format(_T("Download Patch :  %1.0f%% [%4.2f KB/s]"),
                        static_cast<double>(fPercent), static_cast<double>(fRate));
    } else {
        strSpeed.Format(_T("Download Patch : %1.0f%% [%4.2f KB/s]"),
                        static_cast<double>(fPercent), static_cast<double>(fRate));
    }

    CWnd* pSpeedWnd = GetDlgItem(IDC_STATIC_SPEED);
    if (pSpeedWnd != NULL) {
        pSpeedWnd->SetWindowText(strSpeed);
    }

    CWnd* pFileWnd = GetDlgItem(IDC_STATIC_FILENAME);
    if (pFileWnd != NULL) {
        pFileWnd->SetWindowText(g_strPatchFileName);
    }

    CString strCount;
    strCount.Format(_T("%d / %d"), g_nCurrentPatchCount, static_cast<int>(g_vecPatchList.size()));

    CWnd* pCountWnd = GetDlgItem(IDC_STATIC_COUNT);
    if (pCountWnd != NULL) {
        pCountWnd->SetWindowText(strCount);
    }

    if (m_bTrayMouseMoved) {
        m_nid.dwInfoFlags = 0;
        m_nid.uFlags      = NIF_ICON | NIF_MESSAGE | NIF_TIP;
        m_nid.uTimeout    = 0;
        lstrcpyn(m_nid.szTip, strCount, _countof(m_nid.szTip));
        ::Shell_NotifyIcon(NIM_MODIFY, &m_nid);
    }
}

// ---------------------------------------------------------------------------
// 0x00404860: CDnAutoUpdateDlg::OnDownloadComplete
// ---------------------------------------------------------------------------
void CDnAutoUpdateDlg::OnDownloadComplete(int nResult)
{
    ::Shell_NotifyIcon(NIM_DELETE, &m_nid);

    m_nid.dwInfoFlags = NIIF_USER;
    m_nid.uFlags      = NIF_ICON | NIF_MESSAGE | NIF_TIP | NIF_INFO;
    m_nid.hIcon       = ::LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_MAINFRAME));
    m_nid.uTimeout    = 4000;

    lstrcpyn(m_nid.szInfoTitle, _T("DragonNest"), _countof(m_nid.szInfoTitle));
    if (nResult == CHttpDownload::DOWNLOAD_SUCCESS ||
        nResult == CHttpDownload::DOWNLOAD_ALREADY_EXISTS) {
        lstrcpyn(m_nid.szInfo, _T("Download Patch End"), _countof(m_nid.szInfo));
    } else {
        lstrcpyn(m_nid.szInfo, _T("Download Failed"), _countof(m_nid.szInfo));
    }

    ::Shell_NotifyIcon(NIM_ADD, &m_nid);

    m_bTrayMouseMoved   = FALSE;
    m_bDownloadEnd      = TRUE;
    m_dwDownloadEndTime = ::timeGetTime();
}
