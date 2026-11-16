#pragma once

#include <afxcmn.h>

/**
 * @brief Skinned 9-slice horizontal progress bar control matching DNLauncher's CSkinProgress.
 */
class CSkinProgress : public CStatic
{
public:
    CSkinProgress();
    CSkinProgress(CWnd* pWnd, CBitmap* pBmp = NULL, int nType = 0, CEdit* pEdit = NULL, BOOL bReverse = FALSE);
    virtual ~CSkinProgress();

    /** @brief Creates the skinned progress window replacing or overlaying pWnd's rect. */
    BOOL Create(CWnd* pWnd, CBitmap* pBmp = NULL, int nType = 0, CEdit* pEdit = NULL, BOOL bReverse = FALSE);

    /** @brief Sets the lower and upper bounds and default step increment. */
    void SetRange(int nLower, int nUpper, int nStep = 1, BOOL bRescale = TRUE);

    /** @brief Sets the current progress position and invalidates if changed. */
    int SetPos(int nPos);

    /** @brief Advances the current progress position by nOffset. */
    int OffsetPos(int nOffset);

    /** @brief Sets the step size used by StepIt(). */
    int SetStep(int nStep);

    /** @brief Advances the progress bar by the current step size. */
    int StepIt();

    /** @brief Splits a 9-slice horizontal bitmap into m_ilSplitImage. */
    BOOL SetBitmap(CBitmap* pBmp = NULL, BOOL bDeleteOnExit = TRUE);

    /** @brief Formats and updates optional text/percentage state. */
    void SetProgress(int nProgress);

    int GetPos() const { return m_nPos; }
    int GetLower() const { return m_nLower; }
    int GetUpper() const { return m_nUpper; }

public:
    CImageList m_ilSplitImage;

protected:
    enum
    {
        kSliceCount = 9
    };

    void InitDefaults();
    void DrawProgressBar(CDC* pDC, const CRect& rcClient);

    CWnd* m_pAnchorWnd;
    CEdit* m_pEdit;
    CBitmap* m_pOwnedBmp;
    BOOL m_bDeleteOnExit;
    BOOL m_bReverse;
    int m_nType;
    int m_nLower;
    int m_nUpper;
    int m_nPos;
    int m_nStep;
    int m_nSliceWidth;
    int m_nSliceHeight;
    int m_nMarqueeOffset;
    UINT_PTR m_nTimerId;

protected:
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnPaint();
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    DECLARE_MESSAGE_MAP()
};
