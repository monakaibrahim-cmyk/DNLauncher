// Address: 0x004199d0
// Name: FUN_004199d0
// Category: Launcher


void __fastcall FUN_004199d0(CWnd *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00497b47;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = CSkinProgress::vftable;
  local_4 = 4;
  FUN_00419b10();
  BVar4 = IsWindow(*(HWND *)(param_1 + 0x20));
  if (BVar4 != 0) {
    KillTimer(*(HWND *)(param_1 + 0x20),(UINT_PTR)param_1);
  }
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 4))(1,uVar3);
  }
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 4))(1);
  }
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd8) + 4))(1);
  }
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe4) + 4))(1);
  }
  local_4._0_1_ = 3;
  FUN_0045d076((CImageList *)(param_1 + 0xdc));
  local_4._0_1_ = 2;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x68) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x68) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  local_4._0_1_ = 1;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 100) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 100) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x60) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x60) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  local_4 = 0xffffffff;
  FID_conflict__CHotKeyCtrl(param_1);
  ExceptionList = local_c;
  return;
}

