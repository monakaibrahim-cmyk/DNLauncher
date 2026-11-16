#pragma once

#include <afxcmn.h>
#include "ximage.h"

#ifndef WM_CXSHADE_RADIO
#define WM_CXSHADE_RADIO (WM_USER + 0x100)
#endif

/**
 * @brief Owner-drawn image-skinned button using CxImage resource decoding (JPG/PNG/BMP).
 */
class CxSkinButton : public CButton
{
public:
    CxSkinButton();
    virtual ~CxSkinButton();

    /**
     * @brief Loads normal, pressed, hover, and optional disabled skins from resources.
     * Supports JPG/PNG custom resources as well as standard RT_BITMAP resources.
     */
    void SetSkin(
        UINT normal,
        UINT down,
        UINT over = 0,
        UINT disabled = 0,
        UINT focus = 0,
        UINT mask = 0,
        short drawmode = 0,
        short border = 0,
        short margin = 0);

    /** @brief Sets the button caption text color. */
    COLORREF SetTextColor(COLORREF new_color);

    /** @brief Attaches or updates a tooltip string for this button. */
    void SetToolTipText(CString s);

    /** @brief Sets logical check state for check/toggle skins and repaints. */
    void SetCheck(bool bCheck);

    /** @brief Returns logical check state. */
    bool GetCheck() const { return m_Checked; }

    virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);

protected:
    virtual void PreSubclassWindow();
    bool LoadSkinResource(CxImage& img, UINT nResID);
    int GetBitmapWidth() const;
    int GetBitmapHeight() const;
    HRGN CreateRgnFromBitmap(HBITMAP hBmp, COLORREF color);
    void FillWithBitmap(CDC* dc, HBITMAP hbmp, RECT r);
    void RelayEvent(UINT message, WPARAM wParam, LPARAM lParam);

    CxImage m_bNormal;
    CxImage m_bDown;
    CxImage m_bOver;
    CxImage m_bDisabled;
    CxImage m_bFocus;
    CxImage m_bMask;

    int m_nImageMode;
    int m_FocusRectMargin;
    COLORREF m_TextColor;
    BOOL m_border;
    int m_drawmode;
    HRGN m_hClipRgn;

    CToolTipCtrl m_tooltip;
    BOOL m_tracking;
    BOOL m_button_down;
    bool m_Checked;
    DWORD m_Style;

protected:
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
    afx_msg void OnKillFocus(CWnd* pNewWnd);
    afx_msg BOOL OnClicked();
    afx_msg LRESULT OnMouseLeave(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnRadioInfo(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnBMSetCheck(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnBMGetCheck(WPARAM wParam, LPARAM lParam);
    DECLARE_MESSAGE_MAP()
};

/**
 * @brief Persistent selection skin button variant used for DX9/DX11 and ENG/VNM toggles.
 */
class CCustomSkinButton : public CxSkinButton
{
public:
    CCustomSkinButton();
    virtual ~CCustomSkinButton();

    /** @brief Sets persistent selection state and synchronizes button visual state. */
    void SetSelect(BOOL bSelect);

    /** @brief Returns whether the toggle button is currently selected. */
    BOOL GetSelect() const { return m_bSelect; }

protected:
    BOOL m_bSelect;

    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    DECLARE_MESSAGE_MAP()
};
