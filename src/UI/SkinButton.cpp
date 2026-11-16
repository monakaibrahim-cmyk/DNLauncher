#include "stdafx.h"
#include "UI/SkinButton.h"

BEGIN_MESSAGE_MAP(CxSkinButton, CButton)
    ON_WM_ERASEBKGND()
    ON_WM_LBUTTONDOWN()
    ON_WM_LBUTTONUP()
    ON_WM_MOUSEMOVE()
    ON_WM_LBUTTONDBLCLK()
    ON_WM_KILLFOCUS()
    ON_CONTROL_REFLECT_EX(BN_CLICKED, OnClicked)
    ON_MESSAGE(WM_MOUSELEAVE, OnMouseLeave)
    ON_MESSAGE(WM_CXSHADE_RADIO, OnRadioInfo)
    ON_MESSAGE(BM_SETCHECK, OnBMSetCheck)
    ON_MESSAGE(BM_GETCHECK, OnBMGetCheck)
END_MESSAGE_MAP()

CxSkinButton::CxSkinButton()
    : m_nImageMode(1)
    , m_FocusRectMargin(0)
    , m_TextColor(::GetSysColor(COLOR_BTNTEXT))
    , m_border(FALSE)
    , m_drawmode(0)
    , m_hClipRgn(NULL)
    , m_tracking(FALSE)
    , m_button_down(FALSE)
    , m_Checked(false)
    , m_Style(BS_PUSHBUTTON)
{
}

CxSkinButton::~CxSkinButton()
{
    if (m_hClipRgn != NULL)
    {
        ::DeleteObject(m_hClipRgn);
        m_hClipRgn = NULL;
    }
}

void CxSkinButton::PreSubclassWindow()
{
    m_Style = GetButtonStyle();
    if ((m_Style & BS_AUTOCHECKBOX) == BS_AUTOCHECKBOX)
    {
        m_Style = BS_CHECKBOX;
    }
    else if ((m_Style & BS_AUTORADIOBUTTON) == BS_AUTORADIOBUTTON)
    {
        m_Style = BS_RADIOBUTTON;
    }
    else
    {
        m_Style = BS_PUSHBUTTON;
    }

    ModifyStyle(0, BS_OWNERDRAW);
    CButton::PreSubclassWindow();
}

bool CxSkinButton::LoadSkinResource(CxImage& img, UINT nResID)
{
    img.Destroy();
    if (nResID == 0)
    {
        return false;
    }

    HINSTANCE hInst = ::AfxFindResourceHandle(MAKEINTRESOURCE(nResID), _T("JPG"));
    if (hInst == NULL)
    {
        hInst = ::AfxGetResourceHandle();
    }

    HRSRC hRes = ::FindResource(hInst, MAKEINTRESOURCE(nResID), _T("JPG"));
    if (hRes != NULL)
    {
        return img.LoadResource(hRes, CXIMAGE_FORMAT_JPG, hInst);
    }

    hRes = ::FindResource(hInst, MAKEINTRESOURCE(nResID), _T("PNG"));
    if (hRes != NULL)
    {
        return img.LoadResource(hRes, CXIMAGE_FORMAT_PNG, hInst);
    }

    HBITMAP hBmp = ::LoadBitmap(hInst, MAKEINTRESOURCE(nResID));
    if (hBmp != NULL)
    {
        bool ok = img.CreateFromHBITMAP(hBmp);
        ::DeleteObject(hBmp);
        return ok;
    }

    return false;
}

void CxSkinButton::SetSkin(
    UINT normal,
    UINT down,
    UINT over,
    UINT disabled,
    UINT focus,
    UINT mask,
    short drawmode,
    short border,
    short margin)
{
    LoadSkinResource(m_bNormal, normal);
    if (!LoadSkinResource(m_bDown, down) && normal != 0)
    {
        m_bDown.Copy(m_bNormal);
    }
    if (!LoadSkinResource(m_bOver, over) && normal != 0)
    {
        m_bOver.Copy(m_bNormal);
    }
    if (!LoadSkinResource(m_bDisabled, disabled) && normal != 0)
    {
        m_bDisabled.Copy(m_bNormal);
    }
    LoadSkinResource(m_bFocus, focus);
    LoadSkinResource(m_bMask, mask);

    m_drawmode = drawmode;
    m_border = border ? TRUE : FALSE;
    m_FocusRectMargin = margin;
    m_nImageMode = 1;

    if (m_hClipRgn != NULL)
    {
        ::DeleteObject(m_hClipRgn);
        m_hClipRgn = NULL;
    }

    if (::IsWindow(m_hWnd))
    {
        Invalidate(FALSE);
    }
}

COLORREF CxSkinButton::SetTextColor(COLORREF new_color)
{
    COLORREF prev = m_TextColor;
    m_TextColor = new_color;
    if (::IsWindow(m_hWnd))
    {
        Invalidate(FALSE);
    }
    return prev;
}

void CxSkinButton::SetToolTipText(CString s)
{
    if (!::IsWindow(m_hWnd))
    {
        return;
    }

    if (m_tooltip.GetSafeHwnd() == NULL)
    {
        m_tooltip.Create(this);
        m_tooltip.Activate(TRUE);
    }

    if (m_tooltip.GetToolCount() == 0)
    {
        CRect rectBtn;
        GetClientRect(&rectBtn);
        m_tooltip.AddTool(this, s, &rectBtn, 1);
    }
    else
    {
        m_tooltip.UpdateTipText(s, this, 1);
    }
}

void CxSkinButton::SetCheck(bool bCheck)
{
    m_Checked = bCheck;
    if (::IsWindow(m_hWnd))
    {
        Invalidate(FALSE);
    }
}

int CxSkinButton::GetBitmapWidth() const
{
    return m_bNormal.IsValid() ? static_cast<int>(m_bNormal.GetWidth()) : 0;
}

int CxSkinButton::GetBitmapHeight() const
{
    return m_bNormal.IsValid() ? static_cast<int>(m_bNormal.GetHeight()) : 0;
}

void CxSkinButton::RelayEvent(UINT message, WPARAM wParam, LPARAM lParam)
{
    if (m_tooltip.GetSafeHwnd() != NULL)
    {
        MSG msg = {};
        msg.hwnd = m_hWnd;
        msg.message = message;
        msg.wParam = wParam;
        msg.lParam = lParam;
        msg.time = ::GetMessageTime();
        ::GetCursorPos(&msg.pt);
        m_tooltip.RelayEvent(&msg);
    }
}

void CxSkinButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
    if (lpDrawItemStruct == NULL)
    {
        return;
    }

    CDC* pDC = CDC::FromHandle(lpDrawItemStruct->hDC);
    if (pDC == NULL)
    {
        return;
    }

    CRect rect(lpDrawItemStruct->rcItem);
    const UINT state = lpDrawItemStruct->itemState;
    const bool isDisabled = (state & ODS_DISABLED) != 0;
    const bool isDown = ((state & ODS_SELECTED) != 0) || m_Checked || m_button_down;

    CxImage* pImg = &m_bNormal;
    if (isDisabled)
    {
        pImg = m_bDisabled.IsValid() ? &m_bDisabled : &m_bNormal;
    }
    else if (isDown)
    {
        pImg = m_bDown.IsValid() ? &m_bDown : &m_bNormal;
    }
    else if (m_tracking)
    {
        pImg = m_bOver.IsValid() ? &m_bOver : &m_bNormal;
    }
    else if ((state & ODS_FOCUS) != 0 && m_bFocus.IsValid())
    {
        pImg = &m_bFocus;
    }

    if (pImg->IsValid())
    {
        pImg->Draw(pDC->GetSafeHdc(), rect);
    }
    else
    {
        pDC->FillSolidRect(&rect, ::GetSysColor(COLOR_BTNFACE));
    }

    if (m_border)
    {
        pDC->DrawEdge(&rect, isDown ? EDGE_SUNKEN : EDGE_RAISED, BF_RECT);
    }

    CString strCaption;
    GetWindowText(strCaption);
    if (!strCaption.IsEmpty())
    {
        CRect textRect(rect);
        if (isDown)
        {
            textRect.OffsetRect(1, 1);
        }
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(isDisabled ? ::GetSysColor(COLOR_GRAYTEXT) : m_TextColor);
        CFont* pFont = GetFont();
        CFont* pOldFont = pFont ? pDC->SelectObject(pFont) : NULL;
        pDC->DrawText(strCaption, &textRect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        if (pOldFont != NULL)
        {
            pDC->SelectObject(pOldFont);
        }
    }
}

BOOL CxSkinButton::OnEraseBkgnd(CDC* /*pDC*/)
{
    return TRUE;
}

void CxSkinButton::OnLButtonDown(UINT nFlags, CPoint point)
{
    RelayEvent(WM_LBUTTONDOWN, static_cast<WPARAM>(nFlags), MAKELPARAM(point.x, point.y));
    if (m_tracking)
    {
        TRACKMOUSEEVENT tme = {};
        tme.cbSize = sizeof(tme);
        tme.dwFlags = TME_CANCEL | TME_LEAVE;
        tme.hwndTrack = m_hWnd;
        ::_TrackMouseEvent(&tme);
        m_tracking = FALSE;
    }
    m_button_down = TRUE;
    CButton::OnLButtonDown(nFlags, point);
}

void CxSkinButton::OnLButtonUp(UINT nFlags, CPoint point)
{
    RelayEvent(WM_LBUTTONUP, static_cast<WPARAM>(nFlags), MAKELPARAM(point.x, point.y));
    m_button_down = FALSE;
    CButton::OnLButtonUp(nFlags, point);
}

void CxSkinButton::OnMouseMove(UINT nFlags, CPoint point)
{
    RelayEvent(WM_MOUSEMOVE, static_cast<WPARAM>(nFlags), MAKELPARAM(point.x, point.y));

    if (m_button_down && ::GetCapture() == m_hWnd)
    {
        POINT ptCursor = {};
        ::GetCursorPos(&ptCursor);
        ScreenToClient(&ptCursor);
        CRect rc;
        GetClientRect(&rc);
        if (!rc.PtInRect(ptCursor))
        {
            ReleaseCapture();
            m_button_down = FALSE;
            Invalidate(FALSE);
        }
    }
    else if (!m_tracking)
    {
        TRACKMOUSEEVENT tme = {};
        tme.cbSize = sizeof(tme);
        tme.dwFlags = TME_LEAVE;
        tme.hwndTrack = m_hWnd;
        tme.dwHoverTime = HOVER_DEFAULT;
        m_tracking = ::_TrackMouseEvent(&tme);
        Invalidate(FALSE);
    }

    CButton::OnMouseMove(nFlags, point);
}

void CxSkinButton::OnLButtonDblClk(UINT nFlags, CPoint point)
{
    RelayEvent(WM_LBUTTONDBLCLK, static_cast<WPARAM>(nFlags), MAKELPARAM(point.x, point.y));
    m_button_down = TRUE;
    CButton::OnLButtonDblClk(nFlags, point);
}

void CxSkinButton::OnKillFocus(CWnd* pNewWnd)
{
    if (::GetCapture() == m_hWnd)
    {
        ReleaseCapture();
        m_button_down = FALSE;
    }
    if (m_tracking)
    {
        m_tracking = FALSE;
        Invalidate(FALSE);
    }
    CButton::OnKillFocus(pNewWnd);
}

BOOL CxSkinButton::OnClicked()
{
    if (::GetCapture() == m_hWnd)
    {
        ReleaseCapture();
    }
    m_button_down = FALSE;

    if (m_Style == BS_CHECKBOX)
    {
        SetCheck(!m_Checked);
    }
    else if (m_Style == BS_RADIOBUTTON)
    {
        SetCheck(true);
    }
    return FALSE;
}

LRESULT CxSkinButton::OnMouseLeave(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
    m_tracking = FALSE;
    m_button_down = FALSE;
    Invalidate(FALSE);
    return 0;
}

LRESULT CxSkinButton::OnRadioInfo(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
    if (m_Checked)
    {
        m_Checked = false;
        Invalidate(FALSE);
    }
    return 0;
}

LRESULT CxSkinButton::OnBMSetCheck(WPARAM wParam, LPARAM /*lParam*/)
{
    m_Checked = (wParam != BST_UNCHECKED);
    switch (m_Style)
    {
    case BS_RADIOBUTTON:
        if (m_Checked)
        {
            HWND hParent = ::GetParent(m_hWnd);
            if (hParent != NULL)
            {
                HWND hChild = ::GetWindow(hParent, GW_CHILD);
                while (hChild != NULL)
                {
                    if (hChild != m_hWnd)
                    {
                        ::SendMessage(hChild, WM_CXSHADE_RADIO, 0, 0);
                    }
                    hChild = ::GetWindow(hChild, GW_HWNDNEXT);
                }
            }
        }
        break;
    case BS_PUSHBUTTON:
        m_Checked = false;
        break;
    default:
        break;
    }

    Invalidate(FALSE);
    return 0;
}

LRESULT CxSkinButton::OnBMGetCheck(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
    return m_Checked ? BST_CHECKED : BST_UNCHECKED;
}

// ============================================================================
// CCustomSkinButton
// ============================================================================

BEGIN_MESSAGE_MAP(CCustomSkinButton, CxSkinButton)
    ON_WM_LBUTTONUP()
    ON_WM_MOUSEMOVE()
    ON_WM_KEYDOWN()
END_MESSAGE_MAP()

CCustomSkinButton::CCustomSkinButton()
    : m_bSelect(FALSE)
{
}

CCustomSkinButton::~CCustomSkinButton()
{
}

void CCustomSkinButton::SetSelect(BOOL bSelect)
{
    m_bSelect = bSelect;
    m_Checked = (bSelect != FALSE);
    if (::IsWindow(m_hWnd))
    {
        SendMessage(BM_SETSTATE, m_bSelect ? TRUE : FALSE, 0);
        Invalidate(FALSE);
    }
}

void CCustomSkinButton::OnLButtonUp(UINT nFlags, CPoint point)
{
    CxSkinButton::OnLButtonUp(nFlags, point);
    if (::IsWindow(m_hWnd))
    {
        SendMessage(BM_SETSTATE, m_bSelect ? TRUE : FALSE, 0);
    }
}

void CCustomSkinButton::OnMouseMove(UINT nFlags, CPoint point)
{
    CxSkinButton::OnMouseMove(nFlags, point);

    CRect rc;
    GetClientRect(&rc);
    if (!rc.PtInRect(point))
    {
        SendMessage(BM_SETSTATE, m_bSelect ? TRUE : FALSE, 0);
    }
}

void CCustomSkinButton::OnKeyDown(UINT /*nChar*/, UINT /*nRepCnt*/, UINT /*nFlags*/)
{
    // Intentionally suppressed so keyboard Space/Enter cannot toggle state visually out of sync.
}
