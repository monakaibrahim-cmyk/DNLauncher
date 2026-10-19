// Address: 0x0045e94e
// Name: CScrollView::CScrollView
// Category: Utility


/* Library Function - Single Match
    protected: __thiscall CScrollView::CScrollView(void)
   
   Library: Visual Studio 2005 Release */

CScrollView * __thiscall CScrollView::CScrollView(CScrollView *this)

{
  CView::CView((CView *)this);
  *(undefined ***)this = vftable;
  _memset(this + 0x58,0,0x30);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return this;
}

