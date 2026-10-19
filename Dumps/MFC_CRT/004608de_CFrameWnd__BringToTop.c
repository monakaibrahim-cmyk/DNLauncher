// Address: 0x004608de
// Name: CFrameWnd::BringToTop
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::BringToTop(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::BringToTop(CFrameWnd *this,int param_1)

{
  HWND hWnd;
  
  if ((((param_1 != 0) && (param_1 != 6)) && (param_1 != 7)) && ((param_1 != 8 && (param_1 != 4))))
  {
    hWnd = GetLastActivePopup(*(HWND *)(this + 0x20));
    BringWindowToTop(hWnd);
  }
  return;
}

