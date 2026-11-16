#include "stdafx.h"
#include "UI/SkinProgress.h"

BEGIN_MESSAGE_MAP(CSkinProgress, CStatic)
    ON_WM_ERASEBKGND()
    ON_WM_PAINT()
    ON_WM_TIMER()
END_MESSAGE_MAP()

CSkinProgress::CSkinProgress()
{
    InitDefaults();
}

CSkinProgress::CSkinProgress(CWnd* pWnd, CBitmap* pBmp, int nType, CEdit* pEdit, BOOL bReverse)
{
    InitDefaults();
    Create(pWnd, pBmp, nType, pEdit, bReverse);
}

CSkinProgress::~CSkinProgress()
{
    if (m_ilSplitImage.GetSafeHandle() != NULL)
    {
        m_ilSplitImage.DeleteImageList();
    }
    if (m_bDeleteOnExit && m_pOwnedBmp != NULL)
    {
        delete m_pOwnedBmp;
        m_pOwnedBmp = NULL;
    }
}

void CSkinProgress::InitDefaults()
{
    m_pAnchorWnd = NULL;
    m_pEdit = NULL;
    m_pOwnedBmp = NULL;
    m_bDeleteOnExit = FALSE;
    m_bReverse = FALSE;
    m_nType = 0;
    m_nLower = 0;
    m_nUpper = 100;
    m_nPos = 0;
    m_nStep = 1;
    m_nSliceWidth = 0;
    m_nSliceHeight = 0;
    m_nMarqueeOffset = 0;
    m_nTimerId = 0;
}

BOOL CSkinProgress::Create(CWnd* pWnd, CBitmap* pBmp, int nType, CEdit* pEdit, BOOL bReverse)
{
    m_pAnchorWnd = pWnd;
    m_nType = nType;
    m_pEdit = pEdit;
    m_bReverse = bReverse;

    if (pWnd == NULL || !::IsWindow(pWnd->GetSafeHwnd()))
    {
        return FALSE;
    }

    CWnd* pParent = pWnd->GetParent();
    if (pParent == NULL)
    {
        return FALSE;
    }

    CRect rect;
    pWnd->GetWindowRect(&rect);
    pParent->ScreenToClient(&rect);
    pWnd->ShowWindow(SW_HIDE);

    if (!CStatic::Create(_T(""), WS_CHILD | WS_VISIBLE | SS_NOTIFY, rect, pParent))
    {
        return FALSE;
    }

    if (pBmp != NULL)
    {
        SetBitmap(pBmp, FALSE);
    }

    return TRUE;
}

void CSkinProgress::SetRange(int nLower, int nUpper, int nStep, BOOL bRescale)
{
    if (nUpper <= nLower)
    {
        nUpper = nLower + 1;
    }

    int nOldSpan = m_nUpper - m_nLower;
    if (bRescale && nOldSpan > 0)
    {
        double ratio = static_cast<double>(m_nPos - m_nLower) / static_cast<double>(nOldSpan);
        m_nPos = nLower + static_cast<int>(ratio * static_cast<double>(nUpper - nLower) + 0.5);
    }
    else
    {
        m_nPos = nLower;
    }

    m_nLower = nLower;
    m_nUpper = nUpper;
    m_nStep = (nStep != 0) ? nStep : 1;

    if (m_nPos < m_nLower) m_nPos = m_nLower;
    if (m_nPos > m_nUpper) m_nPos = m_nUpper;

    if (::IsWindow(m_hWnd))
    {
        Invalidate(FALSE);
    }
}

int CSkinProgress::SetPos(int nPos)
{
    int nPrev = m_nPos;
    if (nPos < m_nLower) nPos = m_nLower;
    if (nPos > m_nUpper) nPos = m_nUpper;

    m_nPos = nPos;
    if (m_nPos != nPrev && ::IsWindow(m_hWnd))
    {
        Invalidate(FALSE);
        UpdateWindow();
    }
    return nPrev;
}

int CSkinProgress::OffsetPos(int nOffset)
{
    return SetPos(m_nPos + nOffset);
}

int CSkinProgress::SetStep(int nStep)
{
    int nPrev = m_nStep;
    m_nStep = nStep;
    return nPrev;
}

int CSkinProgress::StepIt()
{
    int nNext = m_nPos + m_nStep;
    if (nNext > m_nUpper)
    {
        nNext = m_nLower;
    }
    return SetPos(nNext);
}

BOOL CSkinProgress::SetBitmap(CBitmap* pBmp, BOOL bDeleteOnExit)
{
    if (m_ilSplitImage.GetSafeHandle() != NULL)
    {
        m_ilSplitImage.DeleteImageList();
    }
    if (m_bDeleteOnExit && m_pOwnedBmp != NULL && m_pOwnedBmp != pBmp)
    {
        delete m_pOwnedBmp;
        m_pOwnedBmp = NULL;
    }

    if (pBmp == NULL || pBmp->GetSafeHandle() == NULL)
    {
        return FALSE;
    }

    m_bDeleteOnExit = bDeleteOnExit;
    m_pOwnedBmp = bDeleteOnExit ? pBmp : NULL;

    BITMAP bm = {};
    if (pBmp->GetBitmap(&bm) == 0 || bm.bmWidth < kSliceCount || bm.bmHeight <= 0)
    {
        return FALSE;
    }

    m_nSliceWidth = bm.bmWidth / kSliceCount;
    m_nSliceHeight = bm.bmHeight;

    // Extract 9 equal-width horizontal slices into m_ilSplitImage
    if (!m_ilSplitImage.Create(m_nSliceWidth, m_nSliceHeight, ILC_COLOR24, kSliceCount, 0))
    {
        return FALSE;
    }

    CWindowDC screenDC(NULL);
    CDC srcDC;
    CDC tileDC;
    srcDC.CreateCompatibleDC(&screenDC);
    tileDC.CreateCompatibleDC(&screenDC);

    CBitmap* pOldSrc = srcDC.SelectObject(pBmp);
    for (int i = 0; i < kSliceCount; ++i)
    {
        CBitmap tileBmp;
        tileBmp.CreateCompatibleBitmap(&screenDC, m_nSliceWidth, m_nSliceHeight);
        CBitmap* pOldTile = tileDC.SelectObject(&tileBmp);
        tileDC.BitBlt(0, 0, m_nSliceWidth, m_nSliceHeight, &srcDC, i * m_nSliceWidth, 0, SRCCOPY);
        tileDC.SelectObject(pOldTile);
        m_ilSplitImage.Add(&tileBmp, static_cast<CBitmap*>(NULL));
    }
    srcDC.SelectObject(pOldSrc);

    if (::IsWindow(m_hWnd))
    {
        Invalidate(FALSE);
    }
    return TRUE;
}

void CSkinProgress::SetProgress(int nProgress)
{
    if (m_pEdit != NULL && ::IsWindow(m_pEdit->GetSafeHwnd()))
    {
        CString strText;
        strText.Format(_T("%d%%"), nProgress);
        m_pEdit->SetWindowText(strText);
    }
}

BOOL CSkinProgress::OnEraseBkgnd(CDC* /*pDC*/)
{
    return TRUE;
}

void CSkinProgress::DrawProgressBar(CDC* pDC, const CRect& rcClient)
{
    const int w = rcClient.Width();
    const int h = rcClient.Height();
    if (w <= 0 || h <= 0)
    {
        return;
    }

    if (m_ilSplitImage.GetSafeHandle() == NULL || m_nSliceWidth <= 0 || m_nSliceHeight <= 0)
    {
        pDC->FillSolidRect(&rcClient, RGB(19, 21, 25));
        return;
    }

    // Compose the bar at natural slice height, then stretch vertically only if needed
    CDC memDC;
    memDC.CreateCompatibleDC(pDC);
    CBitmap canvas;
    canvas.CreateCompatibleBitmap(pDC, w, m_nSliceHeight);
    CBitmap* pOldCanvas = memDC.SelectObject(&canvas);

    // Paint background track using dark slices (0 = left, 1 = middle, 8 = right)
    m_ilSplitImage.Draw(&memDC, 0, CPoint(0, 0), ILD_NORMAL);
    for (int x = m_nSliceWidth; x < w - m_nSliceWidth; x += m_nSliceWidth)
    {
        m_ilSplitImage.Draw(&memDC, 1, CPoint(x, 0), ILD_NORMAL);
    }
    if (w > m_nSliceWidth)
    {
        m_ilSplitImage.Draw(&memDC, 8, CPoint(w - m_nSliceWidth, 0), ILD_NORMAL);
    }

    // Paint active fill using slices 2 (left), 3 (body), 4 (right)
    const int span = m_nUpper - m_nLower;
    int fillWidth = 0;
    if (span > 0 && m_nPos > m_nLower)
    {
        const double ratio = static_cast<double>(m_nPos - m_nLower) / static_cast<double>(span);
        fillWidth = static_cast<int>(ratio * static_cast<double>(w) + 0.5);
        if (fillWidth > w) fillWidth = w;
    }

    if (fillWidth > 0)
    {
        if (!m_bReverse)
        {
            for (int x = 0; x < fillWidth; x += m_nSliceWidth)
            {
                const int slice = (x == 0) ? 2 : 3;
                const int drawW = min(m_nSliceWidth, fillWidth - x);
                if (drawW == m_nSliceWidth)
                {
                    m_ilSplitImage.Draw(&memDC, slice, CPoint(x, 0), ILD_NORMAL);
                }
                else
                {
                    CDC tmpDC;
                    tmpDC.CreateCompatibleDC(&memDC);
                    CBitmap tmpBmp;
                    tmpBmp.CreateCompatibleBitmap(pDC, m_nSliceWidth, m_nSliceHeight);
                    CBitmap* pOldTmp = tmpDC.SelectObject(&tmpBmp);
                    m_ilSplitImage.Draw(&tmpDC, slice, CPoint(0, 0), ILD_NORMAL);
                    memDC.BitBlt(x, 0, drawW, m_nSliceHeight, &tmpDC, 0, 0, SRCCOPY);
                    tmpDC.SelectObject(pOldTmp);
                }
            }
        }
        else
        {
            const int startX = w - fillWidth;
            for (int x = startX; x < w; x += m_nSliceWidth)
            {
                const int slice = 3;
                const int drawW = min(m_nSliceWidth, w - x);
                if (drawW == m_nSliceWidth)
                {
                    m_ilSplitImage.Draw(&memDC, slice, CPoint(x, 0), ILD_NORMAL);
                }
                else
                {
                    CDC tmpDC;
                    tmpDC.CreateCompatibleDC(&memDC);
                    CBitmap tmpBmp;
                    tmpBmp.CreateCompatibleBitmap(pDC, m_nSliceWidth, m_nSliceHeight);
                    CBitmap* pOldTmp = tmpDC.SelectObject(&tmpBmp);
                    m_ilSplitImage.Draw(&tmpDC, slice, CPoint(0, 0), ILD_NORMAL);
                    memDC.BitBlt(x, 0, drawW, m_nSliceHeight, &tmpDC, 0, 0, SRCCOPY);
                    tmpDC.SelectObject(pOldTmp);
                }
            }
        }
    }

    if (h == m_nSliceHeight)
    {
        pDC->BitBlt(0, 0, w, h, &memDC, 0, 0, SRCCOPY);
    }
    else
    {
        pDC->SetStretchBltMode(COLORONCOLOR);
        pDC->StretchBlt(0, 0, w, h, &memDC, 0, 0, w, m_nSliceHeight, SRCCOPY);
    }

    memDC.SelectObject(pOldCanvas);
}

void CSkinProgress::OnPaint()
{
    CPaintDC dc(this);
    CRect rcClient;
    GetClientRect(&rcClient);
    DrawProgressBar(&dc, rcClient);
}

void CSkinProgress::OnTimer(UINT_PTR nIDEvent)
{
    if (nIDEvent == m_nTimerId)
    {
        ++m_nMarqueeOffset;
        Invalidate(FALSE);
    }
    CStatic::OnTimer(nIDEvent);
}
