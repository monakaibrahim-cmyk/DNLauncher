#include "stdafx.h"
#include "UI/ColorStatic.h"

BEGIN_MESSAGE_MAP(CColorStatic, CStatic)
    ON_WM_ERASEBKGND()
    ON_WM_PAINT()
    ON_MESSAGE(WM_PRINTCLIENT, &CColorStatic::OnPrintClient)
    ON_WM_CTLCOLOR_REFLECT()
END_MESSAGE_MAP()

CColorStatic::CColorStatic()
    : m_crBkColor(::GetSysColor(COLOR_3DFACE))
    , m_crTextColor(RGB(0, 0, 0))
    , m_bTransparent(FALSE)
{
    m_brBkgnd.Attach(::CreateSolidBrush(m_crBkColor));
}

CColorStatic::~CColorStatic()
{
    if (m_brBkgnd.GetSafeHandle() != NULL)
    {
        m_brBkgnd.DeleteObject();
    }
}

void CColorStatic::SetTextColor(COLORREF crTextColor)
{
    m_crTextColor = crTextColor;
    if (::IsWindow(m_hWnd))
    {
        RedrawWindow(NULL, NULL, RDW_INVALIDATE | RDW_ERASE);
    }
}

void CColorStatic::SetBkColor(COLORREF crBkColor)
{
    m_crBkColor = crBkColor;
    m_bTransparent = FALSE;
    if (m_brBkgnd.GetSafeHandle() != NULL)
    {
        m_brBkgnd.DeleteObject();
    }
    m_brBkgnd.Attach(::CreateSolidBrush(m_crBkColor));
    if (::IsWindow(m_hWnd))
    {
        Invalidate();
    }
}

void CColorStatic::SetTransparent(BOOL bTransparent)
{
    m_bTransparent = bTransparent;
    if (::IsWindow(m_hWnd))
    {
        if (bTransparent)
        {
            // DrawContent repaints parent background directly; strip WS_EX_TRANSPARENT so PrintWindow & Z-order paint reliably
            ModifyStyleEx(WS_EX_TRANSPARENT, 0);
        }
        RedrawWindow(NULL, NULL, RDW_INVALIDATE | RDW_ERASE);
    }
}

void CColorStatic::SetWindowTextRefresh(const CString& strText)
{
    if (!::IsWindow(m_hWnd))
    {
        return;
    }

    CString strCurrent;
    GetWindowText(strCurrent);
    if (strCurrent == strText)
    {
        return;
    }

    SetWindowText(strText);
    if (m_bTransparent)
    {
        RedrawWindow(NULL, NULL, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW);
    }
    else
    {
        Invalidate();
    }
}

void CColorStatic::DrawContent(CDC* pDC)
{
    CRect rcClient;
    GetClientRect(&rcClient);
    if (rcClient.IsRectEmpty() || pDC == NULL)
    {
        return;
    }

    const int saved = pDC->SaveDC();
    pDC->IntersectClipRect(&rcClient);

    if (m_bTransparent)
    {
        if (CWnd* pParent = GetParent())
        {
            CPoint pt(0, 0);
            MapWindowPoints(pParent, &pt, 1);
            const CPoint prevOrg = pDC->OffsetWindowOrg(pt.x, pt.y);
            pParent->SendMessage(
                WM_PRINTCLIENT,
                reinterpret_cast<WPARAM>(pDC->GetSafeHdc()),
                static_cast<LPARAM>(PRF_CLIENT | PRF_ERASEBKGND));
            pDC->SetWindowOrg(prevOrg);
        }
    }
    else
    {
        pDC->FillSolidRect(&rcClient, m_crBkColor);
    }

    CString strText;
    GetWindowText(strText);
    if (!strText.IsEmpty())
    {
        CFont* pFont = GetFont();
        if (pFont != NULL)
        {
            pDC->SelectObject(pFont);
        }
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(m_crTextColor);

        const DWORD style = GetStyle();
        UINT dtFlags = DT_WORDBREAK | DT_EXPANDTABS;
        const DWORD align = style & SS_TYPEMASK;
        if (align == SS_RIGHT)
        {
            dtFlags |= DT_RIGHT;
        }
        else if (align == SS_CENTER)
        {
            dtFlags |= DT_CENTER;
        }
        else
        {
            dtFlags |= DT_LEFT;
        }
        if ((style & SS_CENTERIMAGE) != 0)
        {
            dtFlags = (dtFlags & ~DT_WORDBREAK) | DT_SINGLELINE | DT_VCENTER;
        }
        if ((style & SS_NOPREFIX) != 0)
        {
            dtFlags |= DT_NOPREFIX;
        }

        pDC->DrawText(strText, &rcClient, dtFlags);
    }

    pDC->RestoreDC(saved);
}

BOOL CColorStatic::OnEraseBkgnd(CDC* pDC)
{
    if (m_bTransparent)
    {
        return TRUE;
    }

    return CStatic::OnEraseBkgnd(pDC);
}

void CColorStatic::OnPaint()
{
    if (!m_bTransparent)
    {
        Default();
        return;
    }

    CPaintDC dc(this);
    DrawContent(&dc);
}

LRESULT CColorStatic::OnPrintClient(WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    if (!m_bTransparent)
    {
        return Default();
    }

    if (wParam != 0)
    {
        CDC* pDC = CDC::FromHandle(reinterpret_cast<HDC>(wParam));
        DrawContent(pDC);
        return 1;
    }
    return 0;
}

HBRUSH CColorStatic::CtlColor(CDC* pDC, UINT /*nCtlColor*/)
{
    pDC->SetTextColor(m_crTextColor);
    if (m_bTransparent)
    {
        pDC->SetBkMode(TRANSPARENT);
        return static_cast<HBRUSH>(::GetStockObject(HOLLOW_BRUSH));
    }

    pDC->SetBkColor(m_crBkColor);
    return static_cast<HBRUSH>(m_brBkgnd.GetSafeHandle());
}
