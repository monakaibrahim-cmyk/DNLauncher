#pragma once

#include "Launcher/DnXml.h"
#include "UI/ColorStatic.h"
#include "UI/SkinButton.h"
#include "UI/SkinProgress.h"
#include "ximage.h"

class CDnHtmlView;
class CDnPatchDownloadThread;

/**
 * @brief Regional service extension interface matching DNLauncher's IServiceModule.
 */
class IServiceModule
{
public:
    virtual ~IServiceModule() {}
    virtual BOOL OnServiceInit() = 0;
    virtual BOOL OnServiceStartGame() = 0;
    virtual void OnServiceDestroy() = 0;
};

/**
 * @brief Core skinned main Dragon Nest launcher dialog (DIALOGEX ID 100).
 */
class CDnLauncherDlg : public CDialog
{
public:
    CDnLauncherDlg(CWnd* pParent = NULL);
    virtual ~CDnLauncherDlg();

    enum
    {
        IDD = 100
    };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual BOOL OnInitDialog();
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    virtual void OnCancel();

    virtual UINT GetXmlResourceId() const;
    virtual void ApplyControlLayout();
    virtual void ApplyControlSkins();
    virtual void ApplyLocalizedText();
    virtual void LaunchGameClient();

    bool LoadBackgroundPng(UINT nBaseResId);
    void StartPatchWorker();
    void StopPatchWorker();
    void UpdatePatchControlsState(bool bPatching, bool bCanStartGame);
    void RefreshProgressUi();

    static CString FormatByteSize(LONGLONG nBytes);
    static CString FormatTimeRemaining(int nSeconds);
    static CString GetStateMessage(int nPatchState);
    static CString FormatStateWithStep(int nPatchState, int nCurrentPatchIndex, int nTotalPatchCount);

    afx_msg void OnDestroy();
    afx_msg void OnPaint();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg LRESULT OnPrintClient(WPARAM wParam, LPARAM lParam);
    afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg LRESULT OnPatchStatus(WPARAM wParam, LPARAM lParam);

    afx_msg void OnBnClickedCheckDirectStart();
    afx_msg void OnBnClickedQuit();
    afx_msg void OnBnClickedStartGame();
    afx_msg void OnBnClickedOption();
    afx_msg void OnBnClickedWinClose();
    afx_msg void OnBnClickedWinMinimize();
    afx_msg void OnBnClickedDx9();
    afx_msg void OnBnClickedDx11();

    DECLARE_MESSAGE_MAP()

protected:
    HICON                  m_hIcon;
    CFont                  m_FontUi;
    CFont                  m_FontVersion;
    CFont                  m_FontBold;
    CxImage                m_BgImage;
    ControlPositionManager m_LayoutMgr;
    CDnHtmlView*           m_pHtmlView;
    CDnPatchDownloadThread* m_pPatchThread;

    CxSkinButton      m_BtnQuit;
    CxSkinButton      m_BtnStartGame;
    CxSkinButton      m_BtnOption;
    CxSkinButton      m_BtnWinClose;
    CxSkinButton      m_BtnWinMinimize;
    CCustomSkinButton m_BtnDX9;
    CCustomSkinButton m_BtnDX11;
    CButton           m_CheckDirectStart;

    CSkinProgress m_ProgressDownload;
    CSkinProgress m_ProgressCount;
    CBitmap       m_BmpDownloadBar;
    CBitmap       m_BmpCountBar;

    CColorStatic m_StaticVersion;
    CColorStatic m_StaticFileCount;
    CColorStatic m_StaticFileName;
    CColorStatic m_StaticTimeLeft;
    CColorStatic m_StaticFileSize;
    CColorStatic m_StaticDownloadPercentage;
    CColorStatic m_StaticDownloadState;
    CColorStatic m_StaticDirectStart;

    bool m_bPatching;
    bool m_bPatchComplete;
    bool m_bDirectStart;
    int  m_nLastPatchState;
};
