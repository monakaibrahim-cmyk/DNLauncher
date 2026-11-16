#pragma once

/**
 * @brief Lightweight CView base wrapper used in Dragon Nest launcher view hosting.
 */
class CDnView : public CView
{
    DECLARE_DYNCREATE(CDnView)

public:
    CDnView();
    virtual ~CDnView();

protected:
    virtual void OnDraw(CDC* pDC);
    virtual void PostNcDestroy();

    DECLARE_MESSAGE_MAP()
};
