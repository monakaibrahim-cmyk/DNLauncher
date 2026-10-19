// Address: 0x0045f6ea
// Name: CView::CView
// Category: Utility


/* Library Function - Single Match
    protected: __thiscall CView::CView(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

CView * __thiscall CView::CView(CView *this)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined4 *)(this + 0x54) = 0;
  return this;
}

