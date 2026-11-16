#pragma once

#include "Launcher/DnLauncherDlg.h"

/**
 * @brief Southeast Asia regional launcher service hook implementing IServiceModule.
 */
class CDnServiceModuleSG : public IServiceModule
{
public:
    virtual BOOL OnServiceInit() override { return TRUE; }
    virtual BOOL OnServiceStartGame() override { return TRUE; }
    virtual void OnServiceDestroy() override {}
};

/**
 * @brief Southeast Asia (Cherry Credits / Eyedentity SEA) skinned launcher dialog.
 * Adds ENG/VNM dynamic language toggles, field labels, and clickable homepage link.
 */
class CDnLauncherDlgSG : public CDnLauncherDlg
{
public:
    CDnLauncherDlgSG(CWnd* pParent = NULL);
    virtual ~CDnLauncherDlgSG();

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual BOOL OnInitDialog();
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    virtual void ApplyControlLayout() override;
    virtual void ApplyControlSkins() override;
    virtual void ApplyLocalizedText() override;

    void SwitchLanguage(const CString& strLanguageCode);

    afx_msg void OnDestroy();
    afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
    afx_msg void OnBnClickedWinCloseSG();
    afx_msg void OnBnClickedLangEng();
    afx_msg void OnBnClickedLangVnm();
    afx_msg void OnStnClickedHomepageLink();

    DECLARE_MESSAGE_MAP()

protected:
    CDnServiceModuleSG m_ServiceModule;

    CColorStatic m_StaticLabelFileName;
    CColorStatic m_StaticLabelFileSize;
    CColorStatic m_StaticLabelTimeLeft;
    CColorStatic m_StaticLabelCurrentInfo;
    CColorStatic m_StaticHomepageLink;
    CColorStatic m_StaticLabelTotalFile;
    CColorStatic m_StaticLabelCurrentFile;
    CColorStatic m_StaticLabelSelectLanguage;

    CCustomSkinButton m_BtnLangEng;
    CCustomSkinButton m_BtnLangVnm;
};
