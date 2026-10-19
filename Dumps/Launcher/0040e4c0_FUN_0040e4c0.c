// Address: 0x0040e4c0
// Name: FUN_0040e4c0
// Category: Launcher


void FUN_0040e4c0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  uint uVar7;
  uint uStack_48;
  int local_34 [5];
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00499a8a;
  local_10 = ExceptionList;
  uStack_48 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  FUN_0040e980(local_34);
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar7 = 0;
    iVar2 = 0;
  }
  else {
    uVar7 = (*(int *)(param_1 + 0xc) - iVar3) / 0x14;
    iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
  }
  if (iVar2 == 0xccccccc) {
    FUN_0040e7a0();
    iVar3 = extraout_ECX;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
  }
  if (uVar7 < iVar2 + 1U) {
    if (0xccccccc - (uVar7 >> 1) < uVar7) {
      local_18 = 0;
    }
    else {
      local_18 = uVar7 + (uVar7 >> 1);
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x14;
    }
    if (local_18 < iVar3 + 1U) {
      iVar3 = FUN_0040d970(param_1);
      local_18 = iVar3 + 1;
    }
    puVar4 = (undefined4 *)FUN_0040e820(local_18);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_20 = local_20 & 0xffffff00;
    local_1c = puVar4;
    puVar5 = FUN_0040fb10(*(void **)(param_1 + 4),param_3,puVar4);
    local_20 = local_20 & 0xffffff00;
    FUN_0040f1d0(local_34,1,puVar5);
    local_20 = local_20 & 0xffffff00;
    FUN_0040fb10(param_3,*(int **)(param_1 + 8),puVar5 + 5);
    local_8 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0040e4a0();
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    *(undefined4 **)(param_1 + 0xc) = puVar4 + local_18 * 5;
    *(undefined4 **)(param_1 + 8) = puVar4 + 5;
    *(undefined4 **)(param_1 + 4) = puVar4;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
    iVar3 = ((int)piVar1 - (int)param_3) / 0x14;
    if (iVar3 == 0) {
      FUN_0040eed0(0,param_3 + 5,param_3,piVar1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_0040de90(local_34);
      local_8 = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x14;
    }
    else {
      uVar6 = FUN_0040eed0(iVar3,piVar1,piVar1 + -5,piVar1);
      *(undefined4 *)(param_1 + 8) = uVar6;
      FUN_0040ef30();
    }
    FUN_0040ef00(local_34);
  }
  local_8 = 0xffffffff;
  FUN_00410380(local_34);
  ExceptionList = local_10;
  return;
}

