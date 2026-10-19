// Address: 0x00460c81
// Name: CFrameWnd::NotifyFloatingWindows
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::NotifyFloatingWindows(unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::NotifyFloatingWindows(CFrameWnd *this,ulong param_1)

{
  ulong uVar1;
  CFrameWnd *this_00;
  int iVar2;
  HWND hWnd;
  UINT uCmd;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  this_00 = this;
  if ((uVar1 & 0x40000000) == 0) {
    this_00 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  if (this_00 != (CFrameWnd *)0x0) {
    if ((param_1 & 0xc) != 0) {
      iVar2 = CWnd::IsWindowEnabled((CWnd *)this_00);
      if ((((~(param_1 >> 3) & 1) == 0) || (iVar2 == 0)) || (this_00 == this)) {
        SendMessageW(*(HWND *)(this_00 + 0x20),0x86,0,0);
      }
      else {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x200;
        SendMessageW(*(HWND *)(this_00 + 0x20),0x86,1,0);
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xfffffdff;
      }
    }
    uCmd = 5;
    hWnd = GetDesktopWindow();
    while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
      iVar2 = AfxIsDescendant(*(HWND__ **)(this_00 + 0x20),hWnd);
      if (iVar2 != 0) {
        SendMessageW(hWnd,0x36d,param_1,0);
      }
      uCmd = 2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

