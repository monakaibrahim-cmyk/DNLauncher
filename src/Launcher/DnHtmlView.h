#pragma once

#include <afxhtml.h>

/**
 * @brief Embedded CHtmlView control rendering the launcher web notice pane.
 */
class CDnHtmlView : public CHtmlView
{
    DECLARE_DYNCREATE(CDnHtmlView)

public:
    CDnHtmlView();
    virtual ~CDnHtmlView();

    /** @brief Creates the HTML view as a child window inside pParent at rc. */
    BOOL CreateInDialog(CWnd* pParent, const CRect& rc, UINT nControlId);

    /** @brief Navigates to strUrl while suppressing script error popups. */
    void NavigateUrl(const CString& strUrl);

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual void OnInitialUpdate();
    virtual void PostNcDestroy();
    virtual void OnDocumentComplete(LPCTSTR lpszURL);
    virtual void OnNavigateComplete2(LPCTSTR strURL);
    virtual void OnNavigateError(LPCTSTR lpszURL, LPCTSTR lpszFrame, DWORD dwError, BOOL* pbCancel);

    afx_msg void OnDestroy();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    DECLARE_MESSAGE_MAP()

private:
    CString m_strPendingUrl;
    bool    m_bDocumentReady;
};
