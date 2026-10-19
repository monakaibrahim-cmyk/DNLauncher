// Address: 0x0042bb20
// Name: FUN_0042bb20
// Category: Launcher


void __fastcall
FUN_0042bb20(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar5;
  uint uVar6;
  uint uStack_180;
  uint local_164;
  undefined4 local_160 [81];
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00497e00;
  local_10 = ExceptionList;
  uStack_180 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_180;
  ExceptionList = &local_10;
  puVar5 = local_160;
  local_1c = uStack_180;
  for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xc) - iVar4) / 0x13c;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar4) / 0x13c;
    }
    if (0xcf6474U - iVar1 < param_3) {
      FUN_004065a0();
      iVar4 = extraout_ECX;
    }
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(param_1 + 8) - iVar4) / 0x13c;
    }
    if (uVar6 < iVar1 + param_3) {
      if (0xcf6474 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x13c;
      }
      if (uVar6 < iVar4 + param_3) {
        iVar4 = FUN_00415400(param_1);
        uVar6 = iVar4 + param_3;
      }
      iVar1 = FUN_0042be70(uVar6);
      local_8 = 0;
      uVar2 = FUN_0042c290(local_164,*(undefined4 **)(param_1 + 4));
      FUN_0042c210(uVar2,param_3);
      local_164 = uVar2 & 0xffffff00;
      FUN_0042c290(local_164,param_5);
      iVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x13c;
      }
      if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 4));
      }
      *(uint *)(param_1 + 0xc) = uVar6 * 0x13c + iVar1;
      *(uint *)(param_1 + 8) = (param_3 + iVar4) * 0x13c + iVar1;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      local_164 = local_164 & 0xffffff00;
      if ((uint)((iVar4 - (int)param_5) / 0x13c) < param_3) {
        iVar4 = param_3 * 0x13c;
        FUN_0042c290(local_164,param_5);
        local_8 = 2;
        FUN_0042b720();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar4;
        puVar5 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * -0x13c);
      }
      else {
        uVar3 = FUN_0042c290(local_164,(undefined4 *)(iVar4 + param_3 * -0x13c));
        *(undefined4 *)(param_1 + 8) = uVar3;
        FUN_0042c240(iVar4);
        puVar5 = param_5 + param_3 * 0x4f;
        iVar4 = extraout_ECX_00;
      }
      FUN_0042c190(iVar4,puVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

