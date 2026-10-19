// Address: 0x0040a050
// Name: FUN_0040a050
// Category: Launcher


void __fastcall FUN_0040a050(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049995a;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *param_1 = CDnPatchInfo::vftable;
  local_4 = 0xd;
  FUN_0040da30();
  FUN_0040da70();
  FUN_00410440();
  local_4._0_1_ = 0xc;
  puVar4 = (undefined4 *)(param_1[0x1e] + -0x10);
  piVar1 = (int *)(param_1[0x1e] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  local_4._0_1_ = 0xb;
  puVar4 = (undefined4 *)(param_1[0x1d] + -0x10);
  piVar1 = (int *)(param_1[0x1d] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 10;
  puVar4 = (undefined4 *)(param_1[0x1c] + -0x10);
  piVar1 = (int *)(param_1[0x1c] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 9;
  puVar4 = (undefined4 *)(param_1[0x1b] + -0x10);
  piVar1 = (int *)(param_1[0x1b] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 8;
  puVar4 = (undefined4 *)(param_1[0x1a] + -0x10);
  piVar1 = (int *)(param_1[0x1a] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 7;
  puVar4 = (undefined4 *)(param_1[0x19] + -0x10);
  piVar1 = (int *)(param_1[0x19] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  if (param_1[0x10] != 0) {
    FUN_0040ff60();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4._0_1_ = 5;
  puVar4 = (undefined4 *)(param_1[0xe] + -0x10);
  piVar1 = (int *)(param_1[0xe] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 4;
  puVar4 = (undefined4 *)(param_1[0xd] + -0x10);
  piVar1 = (int *)(param_1[0xd] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 3;
  puVar4 = (undefined4 *)(param_1[0xc] + -0x10);
  piVar1 = (int *)(param_1[0xc] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)(param_1[0xb] + -0x10);
  piVar1 = (int *)(param_1[0xb] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = (undefined4 *)(param_1[10] + -0x10);
  piVar1 = (int *)(param_1[10] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  if ((void *)param_1[7] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[7]);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 0xffffffff;
  FUN_0040de40();
  ExceptionList = local_c;
  return;
}

