// Address: 0x004100b0
// Name: FUN_004100b0
// Category: Launcher


void FUN_004100b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0049926a;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 6;
  FUN_00410440();
  if (param_1[9] != 0) {
    FUN_0040ff60();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4._0_1_ = 4;
  puVar4 = (undefined4 *)(param_1[5] + -0x10);
  piVar1 = (int *)(param_1[5] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  local_4._0_1_ = 3;
  puVar4 = (undefined4 *)(param_1[4] + -0x10);
  piVar1 = (int *)(param_1[4] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)(param_1[3] + -0x10);
  piVar1 = (int *)(param_1[3] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 1;
  puVar4 = (undefined4 *)(param_1[2] + -0x10);
  piVar1 = (int *)(param_1[2] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  puVar4 = (undefined4 *)(param_1[1] + -0x10);
  piVar1 = (int *)(param_1[1] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)(*param_1 + -0x10);
  piVar1 = (int *)(*param_1 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  ExceptionList = local_c;
  return;
}

