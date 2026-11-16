#pragma once

/**
 * @brief Game Options configuration dialog (DIALOGEX ID 200).
 */
class CDnOptionDlg : public CDialog
{
public:
    CDnOptionDlg(CWnd* pParent = NULL);
    virtual ~CDnOptionDlg();

    enum
    {
        IDD = 200
    };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual BOOL OnInitDialog();
    virtual void OnOK();
    virtual void OnCancel();

    void ApplyLocalizedLabels();
    void PopulateComboBoxes();
    void UpdateResolutionComboEnableState();

    afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnCbnSelchangeWindowMode();
    afx_msg void OnBnClickedApply();
    afx_msg void OnBnClickedCancelBtn();
    DECLARE_MESSAGE_MAP()

protected:
    HICON     m_hIcon;
    CComboBox m_ComboGraphicQuality;
    CComboBox m_ComboResolution;
    CComboBox m_ComboTextureQuality;
    CComboBox m_ComboWindowMode;
    CButton   m_CheckVSync;
};
