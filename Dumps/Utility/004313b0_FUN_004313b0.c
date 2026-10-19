// Address: 0x004313b0
// Name: FUN_004313b0
// Category: Utility


void FUN_004313b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uStack_38;
  undefined4 local_28;
  char local_24;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00499348;
  local_10 = ExceptionList;
  uStack_38 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_1c = 0;
  param_1[1] = 0;
  FUN_00431630(&local_28,param_1);
  local_8 = 0;
  if (local_24 == '\0') {
    FUN_00431496();
    return;
  }
  local_8 = 1;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  if ((*(int *)piVar1[8] == 0) || (piVar2 = (int *)piVar1[0xc], *piVar2 < 1)) {
    uVar4 = (**(code **)(*piVar1 + 0x14))();
  }
  else {
    *piVar2 = *piVar2 + -1;
    pbVar3 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
  }
  if (uVar4 == 0xffffffff) {
    local_8 = 0;
    FUN_00431496();
    return;
  }
  param_1[1] = param_1[1] + 1;
  local_8 = 0;
  FUN_00431496();
  return;
}

