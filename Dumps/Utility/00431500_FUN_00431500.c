// Address: 0x00431500
// Name: FUN_00431500
// Category: Utility


void FUN_00431500(int *param_1)

{
  int *piVar1;
  uint uStack_38;
  undefined4 local_28;
  char local_24;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00499318;
  local_10 = ExceptionList;
  uStack_38 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_1c = 0;
  param_1[1] = 0;
  FUN_00431630(&local_28,param_1);
  local_8 = 0;
  if (local_24 != '\0') {
    local_8 = 1;
    piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
    if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
      (**(code **)(*piVar1 + 0x10))();
    }
    local_8 = 0;
    FUN_004315ca();
    return;
  }
  FUN_004315ca();
  return;
}

