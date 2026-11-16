#include "stdafx.h"
#include "Launcher/DnFIrstPatchDlg.h"

#include "resource.h"
#include "Patcher/DnPatchInfo.h"

BEGIN_MESSAGE_MAP(CDnFIrstPatchDlg, CDialog)
    ON_WM_TIMER()
    ON_WM_DESTROY()
END_MESSAGE_MAP()

CDnFIrstPatchDlg::CDnFIrstPatchDlg(CWnd* pParent)
    : CDialog(CDnFIrstPatchDlg::IDD, pParent)
    , m_nStepPos(0)
{
}

CDnFIrstPatchDlg::~CDnFIrstPatchDlg()
{
    m_FontTitle.DeleteObject();
}

void CDnFIrstPatchDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_FIRST_PATCH_TEXT, m_StaticText);
}

BOOL CDnFIrstPatchDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    CString strTitle = CDnPatchInfo::GetInstance().GetString(1047);
    if (strTitle.IsEmpty())
    {
        strTitle = _T("DragonNest Launcher Initialize");
    }
    SetWindowText(strTitle);

    m_FontTitle.CreateFont(
        25, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
        CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Lucida Sans Unicode"));

    m_StaticText.SetFont(&m_FontTitle);
    m_StaticText.SetTextColor(RGB(40, 40, 40));
    m_StaticText.SetWindowText(_T("Dragon Nest First Patch"));

    if (m_LayoutMgr.LoadXml(IDR_XML_17000))
    {
        m_LayoutMgr.MoveControl(this, IDC_FIRST_PATCH_TEXT, 0);
        m_LayoutMgr.MoveControl(this, IDC_FIRST_PATCH_PROGRESS, 1);
    }

    CRect rcProgress = m_LayoutMgr.GetControlRect(1);
    if (CWnd* pAnchor = GetDlgItem(IDC_FIRST_PATCH_PROGRESS))
    {
        if (rcProgress.IsRectEmpty())
        {
            pAnchor->GetWindowRect(&rcProgress);
            ScreenToClient(&rcProgress);
        }
        pAnchor->ShowWindow(SW_HIDE);
    }

    if (!rcProgress.IsRectEmpty())
    {
        m_ProgressBar.Create(WS_CHILD | WS_VISIBLE | PBS_SMOOTH, rcProgress, this, 777);
        m_ProgressBar.SetRange(0, 100);
        m_ProgressBar.SetPos(0);
    }

    SetTimer(1, 40, NULL);
    return TRUE;
}

BOOL CDnFIrstPatchDlg::PreTranslateMessage(MSG* pMsg)
{
    if (pMsg->message == WM_KEYDOWN && (pMsg->wParam == VK_ESCAPE || pMsg->wParam == VK_RETURN))
    {
        return TRUE;
    }
    return CDialog::PreTranslateMessage(pMsg);
}

void CDnFIrstPatchDlg::SetStatusText(const CString& strText)
{
    if (::IsWindow(m_StaticText.GetSafeHwnd()))
    {
        m_StaticText.SetWindowTextRefresh(strText);
    }
}

void CDnFIrstPatchDlg::SetProgressPercent(int nPercent)
{
    m_nStepPos = max(0, min(100, nPercent));
    if (::IsWindow(m_ProgressBar.GetSafeHwnd()))
    {
        m_ProgressBar.SetPos(m_nStepPos);
    }
}

void CDnFIrstPatchDlg::OnTimer(UINT_PTR nIDEvent)
{
    if (nIDEvent == 1)
    {
        m_nStepPos = (m_nStepPos + 2) % 101;
        if (::IsWindow(m_ProgressBar.GetSafeHwnd()))
        {
            m_ProgressBar.SetPos(m_nStepPos);
        }
    }
    CDialog::OnTimer(nIDEvent);
}

void CDnFIrstPatchDlg::OnDestroy()
{
    KillTimer(1);
    CDialog::OnDestroy();
}
