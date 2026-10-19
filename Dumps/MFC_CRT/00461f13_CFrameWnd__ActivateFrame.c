// Address: 0x00461f13
// Name: CFrameWnd::ActivateFrame
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::ActivateFrame(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::ActivateFrame(CFrameWnd *this,int param_1)

{
  BOOL BVar1;
  
  if (param_1 == -1) {
    BVar1 = IsWindowVisible(*(HWND *)(this + 0x20));
    if (BVar1 == 0) {
      param_1 = 1;
    }
    else {
      BVar1 = IsIconic(*(HWND *)(this + 0x20));
      if (BVar1 != 0) {
        param_1 = 9;
      }
    }
  }
  BringToTop(this,param_1);
  if (param_1 != -1) {
    CWnd::ShowWindow((CWnd *)this,param_1);
    BringToTop(this,param_1);
  }
  return;
}

