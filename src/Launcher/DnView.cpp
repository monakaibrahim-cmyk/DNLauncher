#include "stdafx.h"
#include "Launcher/DnView.h"

IMPLEMENT_DYNCREATE(CDnView, CView)

BEGIN_MESSAGE_MAP(CDnView, CView)
END_MESSAGE_MAP()

CDnView::CDnView()
{
}

CDnView::~CDnView()
{
}

void CDnView::OnDraw(CDC* pDC)
{
    UNREFERENCED_PARAMETER(pDC);
}

void CDnView::PostNcDestroy()
{
    // Owned by dialog host.
}
