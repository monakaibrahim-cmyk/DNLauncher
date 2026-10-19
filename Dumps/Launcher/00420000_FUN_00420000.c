// Address: 0x00420000
// Name: FUN_00420000
// Category: Launcher


void __fastcall FUN_00420000(int param_1)

{
  int *piVar1;
  int iVar2;
  LPCWSTR lpString;
  WPARAM WVar3;
  undefined4 *puVar4;
  int local_2c;
  tagRECT local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00499f08;
  local_14 = ExceptionList;
  lpString = (LPCWSTR)(DAT_004c3750 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x41a8) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x4168),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4168),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4168),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4148),*(int *)(iVar2 + 0x80),*(int *)(iVar2 + 0x84),
                   *(int *)(iVar2 + 0x88) - *(int *)(iVar2 + 0x80),
                   *(int *)(iVar2 + 0x8c) - *(int *)(iVar2 + 0x84),1);
  *(undefined4 *)(param_1 + 0x420c) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x41cc),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x41cc),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x41cc),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x41ac),*(int *)(iVar2 + 0xa0),*(int *)(iVar2 + 0xa4),
                   *(int *)(iVar2 + 0xa8) - *(int *)(iVar2 + 0xa0),
                   *(int *)(iVar2 + 0xac) - *(int *)(iVar2 + 0xa4),1);
  *(undefined4 *)(param_1 + 0x4270) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x4230),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4230),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4230),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4210),*(int *)(iVar2 + 0xc0),*(int *)(iVar2 + 0xc4),
                   *(int *)(iVar2 + 200) - *(int *)(iVar2 + 0xc0),
                   *(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 0xc4),1);
  *(undefined4 *)(param_1 + 0x42d4) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x4294),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4294),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4294),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4274),*(int *)(iVar2 + 0xb0),*(int *)(iVar2 + 0xb4),
                   *(int *)(iVar2 + 0xb8) - *(int *)(iVar2 + 0xb0),
                   *(int *)(iVar2 + 0xbc) - *(int *)(iVar2 + 0xb4),1);
  *(undefined4 *)(param_1 + 0x4338) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x42f8),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x42f8),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x42f8),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x42d8),*(int *)(iVar2 + 0x90),*(int *)(iVar2 + 0x94),
                   *(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x90),
                   *(int *)(iVar2 + 0x9c) - *(int *)(iVar2 + 0x94),1);
  *(undefined4 *)(param_1 + 0x439c) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x435c),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x435c),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x435c),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x433c),*(int *)(iVar2 + 0xd0),*(int *)(iVar2 + 0xd4),
                   *(int *)(iVar2 + 0xd8) - *(int *)(iVar2 + 0xd0),
                   *(int *)(iVar2 + 0xdc) - *(int *)(iVar2 + 0xd4),1);
  *(undefined4 *)(param_1 + 0x4400) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x43c0),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x43c0),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0xac) {
    WVar3 = 0;
  }
  else {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x43c0),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x43a0),*(int *)(iVar2 + 0xe0),*(int *)(iVar2 + 0xe4),
                   *(int *)(iVar2 + 0xe8) - *(int *)(iVar2 + 0xe0),
                   *(int *)(iVar2 + 0xec) - *(int *)(iVar2 + 0xe4),1);
  *(undefined4 *)(param_1 + 0x4464) = *(undefined4 *)(param_1 + 0x44cc);
  GetWindowRect(*(HWND *)(param_1 + 0x4424),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4424),&local_28,(HRGN)0x0,0x105);
  WVar3 = 0;
  if (param_1 != -0xac) {
    WVar3 = *(WPARAM *)(param_1 + 0xb0);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4424),0x30,WVar3,1);
  iVar2 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4404),*(int *)(iVar2 + 0xf0),*(int *)(iVar2 + 0xf4),
                   *(int *)(iVar2 + 0xf8) - *(int *)(iVar2 + 0xf0),
                   *(int *)(iVar2 + 0xfc) - *(int *)(iVar2 + 0xf4),1);
  FUN_0040a2b0();
  puVar4 = FUN_00416590(&local_2c);
  local_c = 0;
  FID_conflict_SetWindowTextW((HWND)*puVar4,lpString);
  local_c = 0xffffffff;
  piVar1 = (int *)(local_2c + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  ExceptionList = local_14;
  return;
}

