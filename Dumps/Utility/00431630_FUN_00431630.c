// Address: 0x00431630
// Name: FUN_00431630
// Category: Utility


undefined4 * FUN_00431630(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004992e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_2;
  iVar1 = *(int *)(*(int *)(*param_2 + 4) + 0x28 + (int)param_2);
  if (iVar1 != 0) {
    FUN_00495807((undefined4 *)(iVar1 + 4));
  }
  local_4 = 0;
  uVar2 = FUN_004316c0();
  *(char *)(param_1 + 1) = (char)uVar2;
  ExceptionList = local_c;
  return param_1;
}

