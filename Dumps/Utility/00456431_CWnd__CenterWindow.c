// Address: 0x00456431
// Name: CWnd::CenterWindow
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::CenterWindow(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  HWND pHVar5;
  uint *puVar6;
  uint local_64 [5];
  RECT local_50;
  tagRECT local_3c;
  tagRECT local_2c;
  tagRECT local_1c;
  CWnd *local_c;
  ulong local_8;
  
  local_c = this;
  local_8 = GetExStyle(this);
  if (param_1 == (CWnd *)0x0) {
    if ((local_8 & 0x40000000) == 0) {
      pHVar5 = GetWindow(*(HWND *)(this + 0x20),4);
    }
    else {
      pHVar5 = GetParent(*(HWND *)(this + 0x20));
    }
    if ((pHVar5 != (HWND)0x0) &&
       (pHVar3 = (HWND)SendMessageW(pHVar5,0x36b,0,0), pHVar3 != (HWND)0x0)) {
      pHVar5 = pHVar3;
    }
  }
  else {
    pHVar5 = *(HWND *)(param_1 + 0x20);
  }
  GetWindowRect(*(HWND *)(this + 0x20),&local_3c);
  if ((local_8 & 0x40000000) == 0) {
    if ((pHVar5 != (HWND)0x0) &&
       ((uVar1 = GetWindowLongW(pHVar5,-0x10), (uVar1 & 0x10000000) == 0 ||
        ((uVar1 & 0x20000000) != 0)))) {
      pHVar5 = (HWND)0x0;
    }
    local_64[0] = 0x28;
    if (pHVar5 == (HWND)0x0) {
      iVar2 = FUN_0041c6c0();
      pHVar5 = (HWND)0x0;
      if (iVar2 != 0) {
        pHVar5 = *(HWND *)(iVar2 + 0x20);
      }
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,1);
      xGetMonitorInfo(iVar2,puVar6);
      CopyRect(&local_2c,&local_50);
      CopyRect(&local_1c,&local_50);
    }
    else {
      GetWindowRect(pHVar5,&local_2c);
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,2);
      xGetMonitorInfo(iVar2,puVar6);
      CopyRect(&local_1c,&local_50);
    }
  }
  else {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    GetClientRect(pHVar3,&local_1c);
    GetClientRect(pHVar5,&local_2c);
    MapWindowPoints(pHVar5,pHVar3,(LPPOINT)&local_2c,2);
  }
  iVar2 = (local_2c.left + local_2c.right) / 2 - (local_3c.right - local_3c.left) / 2;
  iVar4 = (local_2c.top + local_2c.bottom) / 2 - (local_3c.bottom - local_3c.top) / 2;
  if ((local_1c.left <= iVar2) &&
     (local_1c.left = iVar2, local_1c.right < (local_3c.right - local_3c.left) + iVar2)) {
    local_1c.left = (local_3c.left - local_3c.right) + local_1c.right;
  }
  if ((local_1c.top <= iVar4) &&
     (local_1c.top = iVar4, local_1c.bottom < (local_3c.bottom - local_3c.top) + iVar4)) {
    local_1c.top = (local_3c.top - local_3c.bottom) + local_1c.bottom;
  }
  SetWindowPos(local_c,(CWnd *)0x0,local_1c.left,local_1c.top,-1,-1,0x15);
  return;
}

