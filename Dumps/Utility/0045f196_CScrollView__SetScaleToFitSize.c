// Address: 0x0045f196
// Name: CScrollView::SetScaleToFitSize
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CScrollView::SetScaleToFitSize(struct tagSIZE)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollView::SetScaleToFitSize(CScrollView *this,tagSIZE param_1)

{
  ulong uVar1;
  tagRECT local_14;
  
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  *(LONG *)(this + 0x60) = param_1.cx;
  *(LONG *)(this + 100) = param_1.cy;
  if (*(int *)(this + 0x20) != 0) {
    uVar1 = CWnd::GetExStyle((CWnd *)this);
    if ((uVar1 & 0x300000) != 0) {
      CWnd::SetScrollPos((CWnd *)this,0,0,1);
      CWnd::SetScrollPos((CWnd *)this,1,0,1);
      CWnd::EnableScrollBarCtrl((CWnd *)this,3,0);
    }
  }
  GetClientRect(*(HWND *)(this + 0x20),&local_14);
  *(LONG *)(this + 0x68) = local_14.right - local_14.left;
  *(LONG *)(this + 0x6c) = local_14.bottom - local_14.top;
  if (*(int *)(this + 0x20) != 0) {
    UpdateBars(this);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
  }
  return;
}

