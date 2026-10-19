// Address: 0x004565f3
// Name: CWnd::RunModalLoop
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::RunModalLoop(unsigned long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  HWND hWnd;
  LPMSG lpMsg;
  LRESULT LVar4;
  int iVar5;
  BOOL BVar6;
  int local_10;
  
  bVar1 = true;
  bVar2 = true;
  local_10 = 0;
  if (((param_1 & 4) == 0) || (uVar3 = GetExStyle(this), (uVar3 & 0x10000000) != 0)) {
    bVar1 = false;
  }
  hWnd = GetParent(*(HWND *)(this + 0x20));
  *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x18;
  lpMsg = (LPMSG)FUN_004641a3();
LAB_004566b2:
  while ((!bVar2 || (BVar6 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0), BVar6 != 0))) {
    do {
      iVar5 = AfxPumpMessage();
      if (iVar5 == 0) {
        AfxPostQuitMessage(0);
        return -1;
      }
      if ((bVar1) && ((lpMsg->message == 0x118 || (lpMsg->message == 0x104)))) {
        ShowWindow(this,1);
        UpdateWindow(*(HWND *)(this + 0x20));
        bVar1 = false;
      }
      iVar5 = (**(code **)(*(int *)this + 0x80))();
      if (iVar5 == 0) {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffffe7;
        return *(int *)(this + 0x44);
      }
      iVar5 = AfxIsIdleMessage(lpMsg);
      if (iVar5 != 0) {
        bVar2 = true;
        local_10 = 0;
      }
      BVar6 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0);
    } while (BVar6 != 0);
  }
  if (bVar1) {
    ShowWindow(this,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    bVar1 = false;
  }
  if ((((param_1 & 1) == 0) && (hWnd != (HWND)0x0)) && (local_10 == 0)) {
    SendMessageW(hWnd,0x121,0,*(LPARAM *)(this + 0x20));
  }
  if ((param_1 & 2) == 0) goto code_r0x00456693;
  goto LAB_004566ae;
code_r0x00456693:
  LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x36a,0,local_10);
  local_10 = local_10 + 1;
  if (LVar4 == 0) {
LAB_004566ae:
    bVar2 = false;
  }
  goto LAB_004566b2;
}

