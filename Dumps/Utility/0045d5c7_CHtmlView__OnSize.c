// Address: 0x0045d5c7
// Name: CHtmlView::OnSize
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CHtmlView::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHtmlView::OnSize(CHtmlView *this,uint param_1,int param_2,int param_3)

{
  BOOL BVar1;
  ulong dwStyle;
  DWORD dwExStyle;
  tagRECT local_14;
  
  CScrollView::OnSize((CScrollView *)this,param_1,param_2,param_3);
  BVar1 = IsWindow(*(HWND *)(this + 0xb8));
  if (BVar1 != 0) {
    GetClientRect(*(HWND *)(this + 0x20),&local_14);
    dwExStyle = 0x200;
    BVar1 = 0;
    dwStyle = CWnd::GetExStyle((CWnd *)(this + 0x98));
    AdjustWindowRectEx(&local_14,dwStyle,BVar1,dwExStyle);
    CWnd::SetWindowPos((CWnd *)(this + 0x98),(CWnd *)0x0,local_14.left,local_14.top,
                       local_14.right - local_14.left,local_14.bottom - local_14.top,0x14);
  }
  return;
}

