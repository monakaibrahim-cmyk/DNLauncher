// Address: 0x00461e51
// Name: CFrameWnd::OnRegisteredMouseWheel
// Category: MFC_CRT


/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnRegisteredMouseWheel(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CFrameWnd::OnRegisteredMouseWheel(CFrameWnd *this,uint param_1,long param_2)

{
  SHORT SVar1;
  uint uVar2;
  uint uVar3;
  HWND hWnd;
  HWND pHVar4;
  LRESULT LVar5;
  
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  hWnd = GetFocus();
  pHVar4 = GetDesktopWindow();
  if (hWnd == (HWND)0x0) {
    LVar5 = SendMessageW(*(HWND *)(this + 0x20),0x20a,param_1 << 0x10 | uVar2 | uVar3,param_2);
  }
  else {
    do {
      LVar5 = SendMessageW(hWnd,0x20a,param_1 << 0x10 | uVar2 | uVar3,param_2);
      hWnd = GetParent(hWnd);
      if (LVar5 != 0) {
        return LVar5;
      }
      if (hWnd == (HWND)0x0) {
        return 0;
      }
      LVar5 = 0;
    } while (hWnd != pHVar4);
  }
  return LVar5;
}

