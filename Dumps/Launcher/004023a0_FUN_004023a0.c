// Address: 0x004023a0
// Name: FUN_004023a0
// Category: Launcher


void __fastcall
FUN_004023a0(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
            undefined4 *param_5)

{
  void *_Memory;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uStack_50;
  undefined4 local_40 [8];
  uint local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00497cf0;
  local_10 = ExceptionList;
  uStack_50 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  puVar8 = local_40;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = *(int *)(param_3 + 4);
  if (iVar4 == 0) {
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar6 = *(int *)(param_3 + 0xc) - iVar4 >> 5;
    iVar5 = *(int *)(param_3 + 8) - iVar4 >> 5;
  }
  if (iVar5 == 0x7ffffff) {
    iVar4 = FUN_0040e7a0();
  }
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_3 + 8) - iVar4 >> 5;
  }
  if (iVar5 + 1U <= uVar6) {
    iVar4 = *(int *)(param_3 + 8);
    uVar6 = param_3 >> 8;
    param_3 = uVar6 << 8;
    if (iVar4 - (int)param_5 >> 5 == 0) {
      FUN_004027b0(param_3,param_5);
      local_8 = 2;
      param_3 = uVar6 << 8;
      FUN_00402780(param_3,1 - (*(int *)(uVar1 + 8) - (int)param_5 >> 5));
      *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 0x20;
      puVar8 = (undefined4 *)(*(int *)(uVar1 + 8) + -0x20);
      if (param_5 != puVar8) {
        do {
          puVar9 = param_5 + 8;
          puVar7 = local_40;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *param_5 = *puVar7;
            puVar7 = puVar7 + 1;
            param_5 = param_5 + 1;
          }
          param_5 = puVar9;
        } while (puVar9 != puVar8);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      uVar2 = FUN_004027b0(param_3,(undefined4 *)(iVar4 + -0x20));
      *(undefined4 *)(uVar1 + 8) = uVar2;
      FUN_00402740(extraout_ECX,(undefined4 *)(iVar4 + -0x20),iVar4);
      puVar8 = param_5;
      while (puVar8 != param_5 + 8) {
        puVar3 = puVar8 + 8;
        puVar7 = local_40;
        puVar9 = puVar8;
        for (iVar4 = 8; puVar8 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
    ExceptionList = local_10;
    return;
  }
  if (0x7ffffff - (uVar6 >> 1) < uVar6) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 + (uVar6 >> 1);
  }
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_3 + 8) - iVar4 >> 5;
  }
  if (uVar6 < iVar5 + 1U) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_3 + 8) - iVar4 >> 5;
    }
    uVar6 = iVar4 + 1;
  }
  iVar4 = FUN_00402620(uVar6);
  local_8 = 0;
  local_1c = local_1c & 0xffffff00;
  local_20 = FUN_004027b0(iVar4,*(undefined4 **)(param_3 + 4));
  local_1c = local_1c & 0xffffff00;
  FUN_00402780(iVar4,1);
  local_20 = local_20 & 0xffffff00;
  FUN_004027b0(iVar4,param_5);
  _Memory = *(void **)(param_3 + 4);
  if (_Memory == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_3 + 8) - (int)_Memory >> 5;
  }
  if (_Memory == (void *)0x0) {
    *(uint *)(param_3 + 0xc) = uVar6 * 0x20 + iVar4;
    *(int *)(param_3 + 8) = (iVar5 + 1) * 0x20 + iVar4;
    *(int *)(param_3 + 4) = iVar4;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

