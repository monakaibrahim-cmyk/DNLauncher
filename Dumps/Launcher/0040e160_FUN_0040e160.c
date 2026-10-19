// Address: 0x0040e160
// Name: FUN_0040e160
// Category: Launcher


void FUN_0040e160(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  void *pvVar7;
  uint uStack_68;
  int local_54 [12];
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049969a;
  local_10 = ExceptionList;
  uStack_68 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  ExceptionList = &local_10;
  FUN_0040e880(local_54);
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
    iVar1 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xc) - iVar2) / 0x30;
    iVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x30;
  }
  if (iVar1 == 0x5555555) {
    FUN_004065a0();
    iVar2 = extraout_ECX;
  }
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x30;
  }
  if (uVar6 < iVar1 + 1U) {
    if (0x5555555 - (uVar6 >> 1) < uVar6) {
      local_1c = 0;
    }
    else {
      local_1c = uVar6 + (uVar6 >> 1);
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar2) / 0x30;
    }
    if (local_1c < iVar2 + 1U) {
      iVar2 = FUN_0040d8a0(param_1);
      local_1c = iVar2 + 1;
    }
    puVar3 = (undefined4 *)FUN_0040e440(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_24 = local_24 & 0xffffff00;
    local_20 = puVar3;
    puVar4 = FUN_0040fa70(*(void **)(param_1 + 4),(int)param_3,puVar3);
    local_24 = local_24 & 0xffffff00;
    FUN_0040f0d0(local_54,1,puVar4);
    local_24 = local_24 & 0xffffff00;
    FUN_0040fa70(param_3,*(int *)(param_1 + 8),puVar4 + 0xc);
    local_8 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0040ff40();
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    *(undefined4 **)(param_1 + 0xc) = puVar3 + local_1c * 0xc;
    *(undefined4 **)(param_1 + 8) = puVar3 + 0xc;
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 8);
    iVar2 = (int)puVar3 - (int)param_3;
    if (iVar2 / 0x30 + (iVar2 >> 0x1f) == iVar2 >> 0x1f) {
      FUN_0040f6a0(iVar2,(undefined4 *)((int)param_3 + 0x30),param_3,(int)puVar3);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_0040dce0(local_54);
      local_8 = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x30;
      pvVar7 = (void *)(*(int *)(param_1 + 8) + -0x30);
    }
    else {
      uVar5 = FUN_0040f6a0(iVar2,puVar3,puVar3 + -0xc,(int)puVar3);
      *(undefined4 *)(param_1 + 8) = uVar5;
      FUN_0040ee80();
      pvVar7 = (void *)((int)param_3 + 0x30);
    }
    FUN_0040f290(pvVar7);
  }
  local_8 = 0xffffffff;
  FUN_004100b0(local_54);
  ExceptionList = local_10;
  return;
}

