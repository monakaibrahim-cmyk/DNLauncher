#include "stdafx.h"
#include "Launcher/DnHtmlView.h"

IMPLEMENT_DYNCREATE(CDnHtmlView, CHtmlView)

BEGIN_MESSAGE_MAP(CDnHtmlView, CHtmlView)
    ON_WM_DESTROY()
    ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

CDnHtmlView::CDnHtmlView()
    : m_bDocumentReady(false)
{
}

CDnHtmlView::~CDnHtmlView()
{
}

void CDnHtmlView::DoDataExchange(CDataExchange* pDX)
{
    CHtmlView::DoDataExchange(pDX);
}

BOOL CDnHtmlView::CreateInDialog(CWnd* pParent, const CRect& rc, UINT nControlId)
{
    if (pParent == NULL)
    {
        return FALSE;
    }

    const DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS;
    if (!CHtmlView::Create(NULL, NULL, dwStyle, rc, pParent, nControlId, NULL))
    {
        return FALSE;
    }

    SetSilent(TRUE);
    OnInitialUpdate();
    return TRUE;
}

void CDnHtmlView::NavigateUrl(const CString& strUrl)
{
    if (strUrl.IsEmpty())
    {
        return;
    }

    m_strPendingUrl = strUrl;
    if (::IsWindow(GetSafeHwnd()) && m_pBrowserApp != NULL)
    {
        SetSilent(TRUE);
        Navigate2(strUrl, navNoHistory, NULL, NULL, NULL);
    }
}

void CDnHtmlView::OnInitialUpdate()
{
    CHtmlView::OnInitialUpdate();
    SetSilent(TRUE);
    if (!m_strPendingUrl.IsEmpty())
    {
        Navigate2(m_strPendingUrl, navNoHistory, NULL, NULL, NULL);
    }
}

void CDnHtmlView::OnNavigateComplete2(LPCTSTR strURL)
{
    CHtmlView::OnNavigateComplete2(strURL);
}

void CDnHtmlView::OnDocumentComplete(LPCTSTR lpszURL)
{
    m_bDocumentReady = true;
    CHtmlView::OnDocumentComplete(lpszURL);
}

void CDnHtmlView::OnNavigateError(LPCTSTR lpszURL, LPCTSTR lpszFrame, DWORD dwError, BOOL* pbCancel)
{
    UNREFERENCED_PARAMETER(lpszURL);
    UNREFERENCED_PARAMETER(lpszFrame);
    UNREFERENCED_PARAMETER(dwError);
    if (pbCancel != NULL)
    {
        *pbCancel = FALSE;
    }
}

void CDnHtmlView::PostNcDestroy()
{
    // Managed by parent launcher dialog rather than frame self-deletion.
}

void CDnHtmlView::OnDestroy()
{
    m_pBrowserApp.Release();
    CHtmlView::OnDestroy();
}

BOOL CDnHtmlView::OnEraseBkgnd(CDC* pDC)
{
    UNREFERENCED_PARAMETER(pDC);
    return TRUE;
}
