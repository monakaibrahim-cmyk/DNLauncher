#pragma once

/**
 * @brief CStatic subclass supporting customizable text color, background brush, and transparency.
 */
class CColorStatic : public CStatic
{
public:
    CColorStatic();
    virtual ~CColorStatic();

    /** @brief Sets the static control text color and invalidates the control if created. */
    void SetTextColor(COLORREF crTextColor);

    /** @brief Sets an opaque solid background color and recreates the background brush. */
    void SetBkColor(COLORREF crBkColor);

    /** @brief Enables or disables transparent background painting over skinned parents. */
    void SetTransparent(BOOL bTransparent = TRUE);

    /** @brief Updates window text only when changed and repaints cleanly without ghosting. */
    void SetWindowTextRefresh(const CString& strText);

public:
    COLORREF m_crBkColor;
    COLORREF m_crTextColor;
    CBrush m_brBkgnd;

protected:
    BOOL m_bTransparent;

protected:
    void DrawContent(CDC* pDC);

    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnPaint();
    afx_msg LRESULT OnPrintClient(WPARAM wParam, LPARAM lParam);
    afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
    DECLARE_MESSAGE_MAP()
};
