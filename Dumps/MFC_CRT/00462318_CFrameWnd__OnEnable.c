// Address: 0x00462318
// Name: CFrameWnd::OnEnable
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEnable(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnEnable(CFrameWnd *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  DWORD DVar4;
  
  iVar1 = param_1;
  if ((param_1 == 0) || (((byte)this[0x3c] & 4) == 0)) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (pCVar3 != (CWnd *)0x0) {
      param_1 = 0;
      GetWindowThreadProcessId(*(HWND *)(pCVar3 + 0x20),(LPDWORD)&param_1);
      DVar4 = GetCurrentProcessId();
      if (DVar4 == param_1) {
        return;
      }
    }
    if (iVar1 == 0) {
      if (*(int *)(this + 0xb8) == 0) {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x80;
        (**(code **)(*(int *)this + 0xf8))();
      }
    }
    else {
      if ((char)*(uint *)(this + 0x3c) < '\0') {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffff7f;
        (**(code **)(*(int *)this + 0xfc))();
        param_1 = *(int *)(this + 0x20);
        pHVar2 = GetActiveWindow();
        if (pHVar2 == (HWND)param_1) {
          SendMessageW((HWND)param_1,6,1,0);
        }
      }
      if (((byte)this[0x3c] & 0x20) != 0) {
        SendMessageW(*(HWND *)(this + 0x20),0x86,1,0);
      }
    }
    NotifyFloatingWindows(this,(-(uint)(iVar1 != 0) & 0xfffffff0) + 0x20);
  }
  else {
    CWnd::EnableWindow((CWnd *)this,0);
    SetFocus((HWND)0x0);
  }
  return;
}

