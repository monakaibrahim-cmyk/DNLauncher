// Address: 0x00410380
// Name: FUN_00410380
// Category: Launcher


void FUN_00410380(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00499863;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 1;
  FUN_0040fc10();
  local_4 = local_4 & 0xffffff00;
  FUN_0040fd40();
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)(*param_1 + -0x10);
  piVar1 = (int *)(*param_1 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  ExceptionList = local_c;
  return;
}

