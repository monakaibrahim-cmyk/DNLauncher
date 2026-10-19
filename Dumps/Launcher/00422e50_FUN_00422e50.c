// Address: 0x00422e50
// Name: FUN_00422e50
// Category: Launcher


void __fastcall FUN_00422e50(int param_1)

{
  HWND pHVar1;
  LPCWSTR lpString;
  WPARAM WVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  HWND pHStack_30;
  int iStack_2c;
  tagRECT local_28;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_0049a810;
  local_14 = ExceptionList;
  lpString = (LPCWSTR)(DAT_004c3750 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_14;
  FUN_00420000(param_1);
  *(undefined4 *)(param_1 + 0x41a8) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x4168),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4168),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0x44d8) {
    WVar2 = 0;
  }
  else {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4168),0x30,WVar2,1);
  *(undefined4 *)(param_1 + 0x420c) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x41cc),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x41cc),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0x44d8) {
    WVar2 = 0;
  }
  else {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x41cc),0x30,WVar2,1);
  *(undefined4 *)(param_1 + 0x4464) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x4424),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4424),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0x44d8) {
    WVar2 = 0;
  }
  else {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4424),0x30,WVar2,1);
  *(undefined4 *)(param_1 + 0x439c) = *(undefined4 *)(param_1 + 0x44ec);
  GetWindowRect(*(HWND *)(param_1 + 0x435c),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x435c),&local_28,(HRGN)0x0,0x105);
  if (param_1 == -0x44e0) {
    WVar2 = 0;
  }
  else {
    WVar2 = *(WPARAM *)(param_1 + 0x44e4);
  }
  SendMessageW(*(HWND *)(param_1 + 0x435c),0x30,WVar2,1);
  WVar2 = 0;
  if (param_1 != -0x44e0) {
    WVar2 = *(WPARAM *)(param_1 + 0x44e4);
  }
  SendMessageW(*(HWND *)(param_1 + 0x43c0),0x30,WVar2,1);
  piVar3 = (int *)FUN_00453ed1();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  pHStack_30 = (HWND)(iVar4 + 0x10);
  iStack_c = 0;
  *(undefined4 *)(param_1 + 0x4550) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x4510),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4510),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4510),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x44f0),*(int *)(iVar4 + 0x180),*(int *)(iVar4 + 0x184),
                   *(int *)(iVar4 + 0x188) - *(int *)(iVar4 + 0x180),
                   *(int *)(iVar4 + 0x18c) - *(int *)(iVar4 + 0x184),1);
  FUN_0040a2b0();
  FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 1;
  FUN_00403f30(&pHStack_30,L"%s :");
  iStack_c._0_1_ = 0;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  FID_conflict_SetWindowTextW(pHStack_30,lpString);
  *(undefined4 *)(param_1 + 0x45b4) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x4574),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4574),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4574),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4554),*(int *)(iVar4 + 400),*(int *)(iVar4 + 0x194),
                   *(int *)(iVar4 + 0x198) - *(int *)(iVar4 + 400),
                   *(int *)(iVar4 + 0x19c) - *(int *)(iVar4 + 0x194),1);
  FUN_0040a2b0();
  FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 2;
  FUN_00403f30(&pHStack_30,L"%s :");
  iStack_c._0_1_ = 0;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  FID_conflict_SetWindowTextW(pHStack_30,lpString);
  *(undefined4 *)(param_1 + 0x4618) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x45d8),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x45d8),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x45d8),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x45b8),*(int *)(iVar4 + 0x1a0),*(int *)(iVar4 + 0x1a4),
                   *(int *)(iVar4 + 0x1a8) - *(int *)(iVar4 + 0x1a0),
                   *(int *)(iVar4 + 0x1ac) - *(int *)(iVar4 + 0x1a4),1);
  FUN_0040a2b0();
  FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 3;
  FUN_00403f30(&pHStack_30,L"%s :");
  iStack_c._0_1_ = 0;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  FID_conflict_SetWindowTextW(pHStack_30,lpString);
  *(undefined4 *)(param_1 + 0x467c) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x463c),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x463c),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x463c),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x461c),*(int *)(iVar4 + 0x1b0),*(int *)(iVar4 + 0x1b4),
                   *(int *)(iVar4 + 0x1b8) - *(int *)(iVar4 + 0x1b0),
                   *(int *)(iVar4 + 0x1bc) - *(int *)(iVar4 + 0x1b4),1);
  FUN_0040a2b0();
  FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 4;
  FUN_00403f30(&pHStack_30,L"%s :");
  iStack_c._0_1_ = 0;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  FID_conflict_SetWindowTextW(pHStack_30,lpString);
  *(undefined4 *)(param_1 + 0x46e0) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x46a0),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x46a0),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x46a0),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4680),*(int *)(iVar4 + 0x1c0),*(int *)(iVar4 + 0x1c4),
                   *(int *)(iVar4 + 0x1c8) - *(int *)(iVar4 + 0x1c0),
                   *(int *)(iVar4 + 0x1cc) - *(int *)(iVar4 + 0x1c4),1);
  FUN_0040a2b0();
  puVar5 = FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 5;
  FID_conflict_SetWindowTextW((HWND)*puVar5,lpString);
  iStack_c._0_1_ = 0;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  *(undefined4 *)(param_1 + 0x4744) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x4704),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4704),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4704),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x46e4),*(int *)(iVar4 + 0x1d0),*(int *)(iVar4 + 0x1d4),
                   *(int *)(iVar4 + 0x1d8) - *(int *)(iVar4 + 0x1d0),
                   *(int *)(iVar4 + 0x1dc) - *(int *)(iVar4 + 0x1d4),1);
  FUN_0040a2b0();
  puVar5 = FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 6;
  FID_conflict_SetWindowTextW((HWND)*puVar5,lpString);
  iStack_c._0_1_ = 0;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  *(undefined4 *)(param_1 + 0x47a8) = *(undefined4 *)(param_1 + 0x44e8);
  GetWindowRect(*(HWND *)(param_1 + 0x4768),&local_28);
  RedrawWindow(*(HWND *)(param_1 + 0x4768),&local_28,(HRGN)0x0,0x105);
  WVar2 = 0;
  if (param_1 != -0x44d8) {
    WVar2 = *(WPARAM *)(param_1 + 0x44dc);
  }
  SendMessageW(*(HWND *)(param_1 + 0x4768),0x30,WVar2,1);
  iVar4 = *(int *)(param_1 + 0x88);
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4748),*(int *)(iVar4 + 0x1e0),*(int *)(iVar4 + 0x1e4),
                   *(int *)(iVar4 + 0x1e8) - *(int *)(iVar4 + 0x1e0),
                   *(int *)(iVar4 + 0x1ec) - *(int *)(iVar4 + 0x1e4),1);
  FUN_0040a2b0();
  puVar5 = FUN_00416590(&iStack_2c);
  iStack_c._0_1_ = 7;
  FID_conflict_SetWindowTextW((HWND)*puVar5,lpString);
  iStack_c = (uint)iStack_c._1_3_ << 8;
  piVar3 = (int *)(iStack_2c + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  CWnd::ShowWindow((CWnd *)(param_1 + 0x47ac),0);
  iStack_c = 0xffffffff;
  pHVar1 = pHStack_30 + -1;
  LOCK();
  iVar4 = pHVar1->unused;
  pHVar1->unused = pHVar1->unused + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(*(int *)pHStack_30[-4].unused + 4))(pHStack_30 + -4);
  }
  ExceptionList = local_14;
  return;
}

