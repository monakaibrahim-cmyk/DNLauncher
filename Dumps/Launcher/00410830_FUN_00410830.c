// Address: 0x00410830
// Name: FUN_00410830
// Category: Launcher


void __fastcall FUN_00410830(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00497fcd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CDnPatchDownloadThread::vftable;
  param_1[1] = CDnPatchDownloadThread::vftable;
  local_4 = 9;
  param_1[4] = 0;
  FUN_0040da70();
  FUN_00404410();
  FUN_00404410();
  FUN_00404410();
  FUN_00415500();
  TerminateThread((HANDLE)param_1[2],0);
  CloseHandle((HANDLE)param_1[2]);
  if ((HANDLE)param_1[2] != (HANDLE)0xffffffff) {
    WaitForSingleObject((HANDLE)param_1[2],1000);
  }
  DAT_004cbcdc = 0;
  if ((void *)param_1[0x24] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (param_1[0x20] != 0) {
    FUN_00404570();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (param_1[0x1c] != 0) {
    FUN_00404570();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (param_1[0x18] != 0) {
    FUN_00404570();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if ((void *)param_1[0x14] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_4._0_1_ = 3;
  puVar3 = (undefined4 *)(param_1[0xd] + -0x10);
  piVar1 = (int *)(param_1[0xd] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)(param_1[0xc] + -0x10);
  piVar1 = (int *)(param_1[0xc] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 1;
  puVar3 = (undefined4 *)(param_1[0xb] + -0x10);
  piVar1 = (int *)(param_1[0xb] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  puVar3 = (undefined4 *)(param_1[10] + -0x10);
  piVar1 = (int *)(param_1[10] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  param_1[1] = CThread::vftable;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

