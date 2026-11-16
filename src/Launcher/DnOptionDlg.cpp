#include "stdafx.h"
#include "Launcher/DnOptionDlg.h"

#include "resource.h"
#include "Launcher/DnOptionData.h"
#include "Patcher/DnPatchInfo.h"

namespace
{
CString LoadLocalizedOrFallback(UINT nStringId, const TCHAR* szFallback)
{
    CString str = CDnPatchInfo::GetInstance().GetString(nStringId);
    if (str.IsEmpty())
    {
        return CString(szFallback);
    }
    return str;
}
} // namespace

BEGIN_MESSAGE_MAP(CDnOptionDlg, CDialog)
    ON_WM_QUERYDRAGICON()
    ON_CBN_SELCHANGE(IDC_COMBO_WINDOW_MODE, &CDnOptionDlg::OnCbnSelchangeWindowMode)
    ON_BN_CLICKED(IDC_BTN_OPTION_OK, &CDnOptionDlg::OnBnClickedApply)
    ON_BN_CLICKED(IDC_BTN_OPTION_CANCEL, &CDnOptionDlg::OnBnClickedCancelBtn)
END_MESSAGE_MAP()

CDnOptionDlg::CDnOptionDlg(CWnd* pParent)
    : CDialog(CDnOptionDlg::IDD, pParent)
    , m_hIcon(NULL)
{
    m_hIcon = AfxGetApp() ? AfxGetApp()->LoadIcon(IDI_LAUNCHER_MAIN) : NULL;
}

CDnOptionDlg::~CDnOptionDlg()
{
}

void CDnOptionDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, 7010, m_ComboGraphicQuality);
    DDX_Control(pDX, 7011, m_ComboResolution);
    DDX_Control(pDX, 7021, m_ComboTextureQuality);
    DDX_Control(pDX, 7039, m_ComboWindowMode);
    DDX_Control(pDX, 7022, m_CheckVSync);
}

BOOL CDnOptionDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    if (m_hIcon != NULL)
    {
        SetIcon(m_hIcon, TRUE);
        SetIcon(m_hIcon, FALSE);
    }

    ApplyLocalizedLabels();
    PopulateComboBoxes();
    UpdateResolutionComboEnableState();

    return TRUE;
}

void CDnOptionDlg::ApplyLocalizedLabels()
{
    SetWindowText(LoadLocalizedOrFallback(1034, _T("Game Options")));

    struct SLabelMapping
    {
        int nCtrlId;
        UINT nStringId;
        const TCHAR* szFallback;
    };

    const SLabelMapping mappings[] = {
        { 7017, 1034, _T("Game Options") },
        { 7014, 1035, _T("Resolution") },
        { 7013, 1038, _T("Graphics Quality") },
        { 7020, 1045, _T("Texture Quality") },
        { 7012, 1033, _T("Window Mode") },
        { 7023, 1046, _T("V-Sync") },
        { 7015, 1036, _T("Apply") },
        { 7016, 1037, _T("Cancel") }
    };

    for (size_t i = 0; i < _countof(mappings); ++i)
    {
        if (GetDlgItem(mappings[i].nCtrlId) != NULL)
        {
            SetDlgItemText(mappings[i].nCtrlId,
                LoadLocalizedOrFallback(mappings[i].nStringId, mappings[i].szFallback));
        }
    }
}

void CDnOptionDlg::PopulateComboBoxes()
{
    CDnOptionData& data = CDnOptionData::GetInstance();
    data.EnumerateDisplayModes();

    m_ComboGraphicQuality.ResetContent();
    m_ComboGraphicQuality.AddString(LoadLocalizedOrFallback(1022, _T("Low")));
    m_ComboGraphicQuality.AddString(LoadLocalizedOrFallback(1023, _T("Average")));
    m_ComboGraphicQuality.AddString(LoadLocalizedOrFallback(1024, _T("High")));
    int gfxIdx = data.m_nGraphicQuality;
    if (gfxIdx < 0 || gfxIdx >= m_ComboGraphicQuality.GetCount())
    {
        gfxIdx = 0;
    }
    m_ComboGraphicQuality.SetCurSel(gfxIdx);

    m_ComboTextureQuality.ResetContent();
    m_ComboTextureQuality.AddString(LoadLocalizedOrFallback(1022, _T("Low")));
    m_ComboTextureQuality.AddString(LoadLocalizedOrFallback(1024, _T("High")));
    int texIdx = data.m_nTextureQuality;
    if (texIdx < 0 || texIdx >= m_ComboTextureQuality.GetCount())
    {
        texIdx = 0;
    }
    m_ComboTextureQuality.SetCurSel(texIdx);

    m_ComboWindowMode.ResetContent();
    m_ComboWindowMode.AddString(LoadLocalizedOrFallback(1061, _T("Fullscreen")));
    m_ComboWindowMode.AddString(LoadLocalizedOrFallback(1062, _T("Window")));
    m_ComboWindowMode.AddString(LoadLocalizedOrFallback(1063, _T("Borderless Window")));
    int winIdx = data.m_nWindowMode;
    if (winIdx < 0 || winIdx >= m_ComboWindowMode.GetCount())
    {
        winIdx = 0;
    }
    m_ComboWindowMode.SetCurSel(winIdx);

    m_ComboResolution.ResetContent();
    int selectedRes = 0;
    for (size_t i = 0; i < data.m_vecResolutionList.size(); ++i)
    {
        const SResolutionMode& mode = data.m_vecResolutionList[i];
        CString strRes;
        strRes.Format(_T("%d X %d"), mode.nWidth, mode.nHeight);
        m_ComboResolution.AddString(strRes);

        if (mode.nWidth == data.m_nWidth && mode.nHeight == data.m_nHeight)
        {
            selectedRes = static_cast<int>(i);
        }
    }
    if (m_ComboResolution.GetCount() > 0)
    {
        m_ComboResolution.SetCurSel(selectedRes);
    }

    m_CheckVSync.SetCheck(data.m_bVSync ? BST_CHECKED : BST_UNCHECKED);
}

void CDnOptionDlg::UpdateResolutionComboEnableState()
{
    const int winSel = m_ComboWindowMode.GetCurSel();
    m_ComboResolution.EnableWindow(winSel != 2);
}

void CDnOptionDlg::OnCbnSelchangeWindowMode()
{
    UpdateResolutionComboEnableState();
}

void CDnOptionDlg::OnBnClickedApply()
{
    OnOK();
}

void CDnOptionDlg::OnBnClickedCancelBtn()
{
    OnCancel();
}

void CDnOptionDlg::OnOK()
{
    CDnOptionData& data = CDnOptionData::GetInstance();

    const int gfxSel = m_ComboGraphicQuality.GetCurSel();
    if (gfxSel != CB_ERR)
    {
        data.m_nGraphicQuality = gfxSel;
    }

    const int texSel = m_ComboTextureQuality.GetCurSel();
    if (texSel != CB_ERR)
    {
        data.m_nTextureQuality = texSel;
    }

    const int winSel = m_ComboWindowMode.GetCurSel();
    if (winSel != CB_ERR)
    {
        data.m_nWindowMode = winSel;
    }

    const int resSel = m_ComboResolution.GetCurSel();
    if (resSel != CB_ERR && static_cast<size_t>(resSel) < data.m_vecResolutionList.size())
    {
        data.m_nWidth = data.m_vecResolutionList[resSel].nWidth;
        data.m_nHeight = data.m_vecResolutionList[resSel].nHeight;
    }

    data.m_bVSync = (m_CheckVSync.GetCheck() == BST_CHECKED) ? TRUE : FALSE;
    data.m_nLanguageID = (CDnPatchInfo::GetInstance().m_nLanguageOffset == 10000) ? 0x2A : 0x09;
    data.SaveConfig();

    CDialog::OnOK();
}

void CDnOptionDlg::OnCancel()
{
    CDialog::OnCancel();
}

HCURSOR CDnOptionDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}
