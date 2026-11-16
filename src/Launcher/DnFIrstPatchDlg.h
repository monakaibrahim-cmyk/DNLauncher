#pragma once

#include "Launcher/DnXml.h"
#include "UI/ColorStatic.h"

/**
 * @brief Lightweight progress modal shown during initial launcher/self-patch check (DIALOGEX 17010).
 */
class CDnFIrstPatchDlg : public CDialog
{
public:
    CDnFIrstPatchDlg(CWnd* pParent = NULL);
    virtual ~CDnFIrstPatchDlg();

    enum
    {
        IDD = 17010
    };

    /** @brief Updates displayed status message and progress percentage (0..100). */
    void SetStatusText(const CString& strText);
    void SetProgressPercent(int nPercent);

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual BOOL OnInitDialog();
    virtual BOOL PreTranslateMessage(MSG* pMsg);

    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnDestroy();
    DECLARE_MESSAGE_MAP()

protected:
    ControlPositionManager m_LayoutMgr;
    CColorStatic           m_StaticText;
    CProgressCtrl          m_ProgressBar;
    CFont                  m_FontTitle;
    int                    m_nStepPos;
};
