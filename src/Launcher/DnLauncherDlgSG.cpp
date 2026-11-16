#include "stdafx.h"
#include "Launcher/DnLauncherDlgSG.h"

#include "resource.h"
#include "Launcher/DnOptionData.h"
#include "Patcher/DnPatchInfo.h"

namespace
{
const COLORREF kSgLabelColor   = RGB(170, 180, 188);
const COLORREF kSgPercentColor = RGB(179, 255, 0);

/**
 * @brief Prevents wide transparent caption boxes in 17002.xml from erasing adjacent value labels,
 * and ensures longer localized captions (e.g. Vietnamese) never wrap or overlap the value control.
 */
void TrimStaticOverlap(CWnd* pParent, CWnd& labelCtrl, CWnd& valueCtrl)
{
    if (pParent == NULL || !::IsWindow(labelCtrl.GetSafeHwnd()) || !::IsWindow(valueCtrl.GetSafeHwnd()))
    {
        return;
    }

    CRect rcLabel;
    CRect rcValue;
    labelCtrl.GetWindowRect(&rcLabel);
    valueCtrl.GetWindowRect(&rcValue);
    pParent->ScreenToClient(&rcLabel);
    pParent->ScreenToClient(&rcValue);

    CString strLabel;
    labelCtrl.GetWindowText(strLabel);
    int neededWidth = 0;
    if (!strLabel.IsEmpty())
    {
        CClientDC dc(&labelCtrl);
        CFont* pFont = labelCtrl.GetFont();
        CFont* pOldFont = (pFont != NULL) ? dc.SelectObject(pFont) : NULL;
        CSize sz = dc.GetTextExtent(strLabel);
        if (pOldFont != NULL)
        {
            dc.SelectObject(pOldFont);
        }
        neededWidth = sz.cx + 4;
    }

    if (neededWidth > 0 && rcLabel.left + neededWidth > rcValue.left)
    {
        rcLabel.right = rcLabel.left + neededWidth;
        labelCtrl.MoveWindow(&rcLabel, FALSE);
        const int newLeft = rcLabel.right + 4;
        if (newLeft < rcValue.right)
        {
            rcValue.left = newLeft;
            if (valueCtrl.GetDlgCtrlID() == IDC_STATIC_DOWNLOAD_STATE && rcValue.right < 302)
            {
                rcValue.right = 302;
            }
            valueCtrl.MoveWindow(&rcValue, FALSE);
        }
    }
    else if (rcLabel.left < rcValue.left && rcLabel.right >= rcValue.left)
    {
        rcLabel.right = rcValue.left - 1;
        labelCtrl.MoveWindow(&rcLabel, FALSE);
    }
}
} // namespace

BEGIN_MESSAGE_MAP(CDnLauncherDlgSG, CDnLauncherDlg)
    ON_WM_DESTROY()
    ON_WM_SETCURSOR()
    ON_BN_CLICKED(IDC_BTN_WIN_CLOSE, &CDnLauncherDlgSG::OnBnClickedWinCloseSG)
    ON_BN_CLICKED(IDC_BTN_LANG_ENG, &CDnLauncherDlgSG::OnBnClickedLangEng)
    ON_BN_CLICKED(IDC_BTN_LANG_VNM, &CDnLauncherDlgSG::OnBnClickedLangVnm)
    ON_STN_CLICKED(IDC_LABEL_HOMEPAGE_LINK, &CDnLauncherDlgSG::OnStnClickedHomepageLink)
END_MESSAGE_MAP()

CDnLauncherDlgSG::CDnLauncherDlgSG(CWnd* pParent)
    : CDnLauncherDlg(pParent)
{
}

CDnLauncherDlgSG::~CDnLauncherDlgSG()
{
}

void CDnLauncherDlgSG::DoDataExchange(CDataExchange* pDX)
{
    CDnLauncherDlg::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_LABEL_FILE_NAME, m_StaticLabelFileName);
    DDX_Control(pDX, IDC_LABEL_FILE_SIZE, m_StaticLabelFileSize);
    DDX_Control(pDX, IDC_LABEL_TIME_LEFT, m_StaticLabelTimeLeft);
    DDX_Control(pDX, IDC_LABEL_CURRENT_INFO, m_StaticLabelCurrentInfo);
    DDX_Control(pDX, IDC_LABEL_HOMEPAGE_LINK, m_StaticHomepageLink);
    DDX_Control(pDX, IDC_LABEL_TOTAL_FILE, m_StaticLabelTotalFile);
    DDX_Control(pDX, IDC_LABEL_CURRENT_FILE, m_StaticLabelCurrentFile);
    DDX_Control(pDX, IDC_LABEL_SELECT_LANGUAGE, m_StaticLabelSelectLanguage);
    DDX_Control(pDX, IDC_BTN_LANG_ENG, m_BtnLangEng);
    DDX_Control(pDX, IDC_BTN_LANG_VNM, m_BtnLangVnm);
}

BOOL CDnLauncherDlgSG::OnInitDialog()
{
    m_ServiceModule.OnServiceInit();
    if (!CDnLauncherDlg::OnInitDialog())
    {
        return FALSE;
    }

    const bool bIsVnm = (CDnPatchInfo::GetInstance().m_nLanguageOffset == 10000);
    m_BtnLangEng.SetSelect(!bIsVnm);
    m_BtnLangVnm.SetSelect(bIsVnm);

    // Release_SG forces ENG and hides language toggle controls (0x00422db0 / 0x0042361c)
    m_BtnLangEng.ShowWindow(SW_HIDE);
    m_BtnLangEng.EnableWindow(FALSE);
    m_BtnLangVnm.ShowWindow(SW_HIDE);
    m_BtnLangVnm.EnableWindow(FALSE);
    m_StaticLabelSelectLanguage.ShowWindow(SW_HIDE);

    return TRUE;
}

void CDnLauncherDlgSG::ApplyControlLayout()
{
    CDnLauncherDlg::ApplyControlLayout();

    struct SLayoutMapping
    {
        int nCtrlId;
        int nEnum;
    };

    const SLayoutMapping sgMappings[] = {
        { IDC_LABEL_CURRENT_INFO,    22 },
        { IDC_LABEL_FILE_NAME,       23 },
        { IDC_LABEL_FILE_SIZE,       24 },
        { IDC_LABEL_TIME_LEFT,       25 },
        { IDC_LABEL_HOMEPAGE_LINK,   26 },
        { IDC_LABEL_TOTAL_FILE,      27 },
        { IDC_LABEL_CURRENT_FILE,    28 },
        { IDC_BTN_LANG_ENG,          29 },
        { IDC_BTN_LANG_VNM,          30 },
        { IDC_LABEL_SELECT_LANGUAGE, 31 }
    };

    for (size_t i = 0; i < _countof(sgMappings); ++i)
    {
        m_LayoutMgr.MoveControl(this, sgMappings[i].nCtrlId, sgMappings[i].nEnum, FALSE);
    }

    CColorStatic* sgMutedLabels[] = {
        &m_StaticVersion,
        &m_StaticFileName,
        &m_StaticDirectStart,
        &m_StaticLabelFileName,
        &m_StaticLabelFileSize,
        &m_StaticLabelTimeLeft,
        &m_StaticLabelCurrentInfo,
        &m_StaticHomepageLink,
        &m_StaticLabelTotalFile,
        &m_StaticLabelCurrentFile,
        &m_StaticLabelSelectLanguage
    };
    for (size_t i = 0; i < _countof(sgMutedLabels); ++i)
    {
        sgMutedLabels[i]->SetTransparent(TRUE);
        sgMutedLabels[i]->SetTextColor(kSgLabelColor);
        sgMutedLabels[i]->SetFont(&m_FontUi);
    }

    m_StaticDownloadPercentage.SetTextColor(kSgPercentColor);
    m_StaticDownloadPercentage.SetFont(&m_FontBold);
    m_StaticDownloadState.SetFont(&m_FontBold);

    // Eliminate 17002.xml sibling overlaps (e.g. Status/FileSize captions overlapping value fields)
    TrimStaticOverlap(this, m_StaticLabelCurrentInfo, m_StaticDownloadState);
    TrimStaticOverlap(this, m_StaticLabelFileName,    m_StaticFileName);
    TrimStaticOverlap(this, m_StaticLabelFileSize,    m_StaticFileSize);
    TrimStaticOverlap(this, m_StaticLabelTimeLeft,    m_StaticTimeLeft);

    m_StaticHomepageLink.ModifyStyle(0, SS_NOTIFY);
}

void CDnLauncherDlgSG::ApplyControlSkins()
{
    CDnLauncherDlg::ApplyControlSkins();

    m_BtnLangEng.SetSkin(IDR_JPG_5026, IDR_JPG_5027, IDR_JPG_5028);
    m_BtnLangVnm.SetSkin(IDR_JPG_5029, IDR_JPG_5030, IDR_JPG_5031);
    m_BtnLangEng.SetWindowText(_T(""));
    m_BtnLangVnm.SetWindowText(_T(""));
}

void CDnLauncherDlgSG::ApplyLocalizedText()
{
    CDnLauncherDlg::ApplyLocalizedText();

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    struct STextMapping
    {
        CColorStatic* pCtrl;
        UINT          nStringId;
        const TCHAR*  szFallback;
    };

    const STextMapping mappings[] = {
        { &m_StaticLabelFileName,       1026, _T("File Name") },
        { &m_StaticLabelTimeLeft,       1030, _T("Time remaining") },
        { &m_StaticLabelFileSize,       1031, _T("File Size") },
        { &m_StaticLabelCurrentInfo,    1054, _T("Status") },
        { &m_StaticHomepageLink,        1055, _T("Official Website") },
        { &m_StaticLabelTotalFile,      1058, _T("Total") },
        { &m_StaticLabelCurrentFile,    1059, _T("Current") },
        { &m_StaticLabelSelectLanguage, 1060, _T("Choose your language:") }
    };

    for (size_t i = 0; i < _countof(mappings); ++i)
    {
        CString strText = info.GetString(mappings[i].nStringId);
        if (strText.IsEmpty())
        {
            strText = mappings[i].szFallback;
        }
        if (mappings[i].nStringId == 1026 || mappings[i].nStringId == 1030 ||
            mappings[i].nStringId == 1031 || mappings[i].nStringId == 1054 ||
            mappings[i].nStringId == 1058 || mappings[i].nStringId == 1059)
        {
            strText += _T(" :");
        }
        mappings[i].pCtrl->SetWindowTextRefresh(strText);
    }

    // Reset the 4 caption/value pairs to their XML base rects before measuring localized caption widths
    m_LayoutMgr.MoveControl(this, IDC_LABEL_CURRENT_INFO,      22, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_STATIC_DOWNLOAD_STATE,   14, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_LABEL_FILE_NAME,         23, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_STATIC_FILE_NAME,        10, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_LABEL_FILE_SIZE,         24, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_STATIC_FILE_SIZE,        12, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_LABEL_TIME_LEFT,         25, FALSE);
    m_LayoutMgr.MoveControl(this, IDC_STATIC_TIME_LEFT,        11, FALSE);

    TrimStaticOverlap(this, m_StaticLabelCurrentInfo, m_StaticDownloadState);
    TrimStaticOverlap(this, m_StaticLabelFileName,    m_StaticFileName);
    TrimStaticOverlap(this, m_StaticLabelFileSize,    m_StaticFileSize);
    TrimStaticOverlap(this, m_StaticLabelTimeLeft,    m_StaticTimeLeft);
}

void CDnLauncherDlgSG::SwitchLanguage(const CString& strLanguageCode)
{
    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    info.SetLanguageByName(strLanguageCode);

    CDnOptionData& opt = CDnOptionData::GetInstance();
    opt.m_nLanguageID = (info.m_nLanguageOffset == 10000) ? 0x2A : 0x09;
    opt.SaveConfig();

    const bool bIsVnm = (info.m_nLanguageOffset == 10000);
    m_BtnLangEng.SetSelect(!bIsVnm);
    m_BtnLangVnm.SetSelect(bIsVnm);

    ApplyControlSkins();
    ApplyLocalizedText();
    RedrawWindow(NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW | RDW_ALLCHILDREN);
}

void CDnLauncherDlgSG::OnBnClickedLangEng()
{
    SwitchLanguage(_T("ENG"));
}

void CDnLauncherDlgSG::OnBnClickedLangVnm()
{
    SwitchLanguage(_T("VNM"));
}

void CDnLauncherDlgSG::OnBnClickedWinCloseSG()
{
    OnCancel();
}

void CDnLauncherDlgSG::OnStnClickedHomepageLink()
{
    CString strUrl = CDnPatchInfo::GetInstance().m_strHomepageUrl;
    if (strUrl.IsEmpty())
    {
        strUrl = _T("https://sea.dragonnest.com/");
    }
    ::ShellExecute(NULL, _T("open"), strUrl, NULL, NULL, SW_SHOWNORMAL);
}

BOOL CDnLauncherDlgSG::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message)
{
    if (pWnd != NULL && pWnd->GetSafeHwnd() == m_StaticHomepageLink.GetSafeHwnd())
    {
        ::SetCursor(::LoadCursor(NULL, IDC_HAND));
        return TRUE;
    }
    return CDnLauncherDlg::OnSetCursor(pWnd, nHitTest, message);
}

BOOL CDnLauncherDlgSG::PreTranslateMessage(MSG* pMsg)
{
    return CDnLauncherDlg::PreTranslateMessage(pMsg);
}

void CDnLauncherDlgSG::OnDestroy()
{
    m_ServiceModule.OnServiceDestroy();
    CDnLauncherDlg::OnDestroy();
}
