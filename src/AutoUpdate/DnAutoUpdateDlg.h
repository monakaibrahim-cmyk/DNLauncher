#pragma once

#include <afxwin.h>
#include <afxcmn.h>
#include <shellapi.h>
#include <vector>
#include "../../res/AutoUpdateResource.h"

/**
 * @brief Background next-patch pre-downloader dialog and system tray controller.
 *
 * Reconstructed from DnAutoUpdate.exe:
 *   - Class: CDnAutoUpdateDlg (vtable 0x0043F19C, global pointer at 0x0044C748)
 *   - Methods: 0x00403B00..0x00404B3C
 *   - Message Map: 0x0043F000 (entries at 0x0043EE98)
 */
class CDnAutoUpdateDlg : public CDialog
{
public:
    explicit CDnAutoUpdateDlg(CWnd* pParent = NULL);
    virtual ~CDnAutoUpdateDlg();

    enum { IDD = IDD_DNAUTOUPDATE_DIALOG };

    void UpdateProgressUI(float fRate, float fPercent);
    void OnDownloadComplete(int nResult);
    void SetVisible(BOOL bVisible) { m_bVisible = bVisible; }

    static UINT __cdecl DownloadThreadProc(LPVOID pParam);

protected:
    virtual void DoDataExchange(CDataExchange* pDX) override;
    virtual BOOL OnInitDialog() override;

    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnDestroy();
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnClose();
    afx_msg void OnWindowPosChanging(WINDOWPOS* lpwndpos);
    afx_msg LRESULT OnTrayNotification(WPARAM wParam, LPARAM lParam);
    afx_msg void OnBnClickedPause();
    afx_msg void OnBnClickedResume();
    afx_msg void OnBnClickedExit();

    DECLARE_MESSAGE_MAP()

public:
    BOOL            m_bVisible;           // +0x74
    BOOL            m_bTrayMouseMoved;    // +0x78
    CMenu           m_menuTray;           // +0x7C
    NOTIFYICONDATA  m_nid;                // +0x84
    CWinThread*     m_pDownloadThread;    // +0x43C
    CProgressCtrl   m_ctrlProgress;       // +0x440
    BOOL            m_bDownloadEnd;       // +0x494
    DWORD           m_dwDownloadEndTime;  // +0x498
    HICON           m_hIcon;              // +0x49C
};

extern CDnAutoUpdateDlg* g_pAutoUpdateDlg;
extern int               g_nCurrentPatchCount;
extern CString           g_strPatchUrl;
extern CString           g_strClientPath;
extern std::vector<int>  g_vecPatchList;
extern CString           g_strPatchFileName;
