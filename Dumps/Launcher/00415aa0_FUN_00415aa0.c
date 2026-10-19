// Address: 0x00415aa0
// Name: FUN_00415aa0
// Category: Launcher


void __thiscall FUN_00415aa0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  uint uVar6;
  uint uStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00497f20;
  local_10 = ExceptionList;
  uStack_34 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == 0) {
    uVar6 = 0;
    iVar2 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
    iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
  }
  puVar1 = &uStack_34;
  if (iVar2 == 0x15555555) {
    FUN_0040e7a0();
    iVar3 = extraout_ECX;
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
  }
  if (iVar2 + 1U <= uVar6) {
    puVar5 = *(undefined4 **)((int)this + 8);
    iVar3 = (int)puVar5 - (int)param_3;
    if (iVar3 / 0xc + (iVar3 >> 0x1f) == iVar3 >> 0x1f) {
      FUN_00415e80(param_3 + 3,puVar5,param_3);
      local_8 = 2;
      FUN_00415f80(1 - (*(int *)((int)this + 8) - (int)param_3) / 0xc,&local_24);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0xc;
      puVar5 = (undefined4 *)(*(int *)((int)this + 8) + -0xc);
    }
    else {
      uVar4 = FUN_00415e80(iVar3,puVar5,puVar5 + -3);
      *(undefined4 *)((int)this + 8) = uVar4;
      FUN_004160f0((int)(puVar5 + -3));
      puVar5 = param_3 + 3;
    }
    FUN_00415eb0(&local_24,puVar5);
    ExceptionList = local_10;
    return;
  }
  if (0x15555555 - (uVar6 >> 1) < uVar6) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 + (uVar6 >> 1);
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
  }
  if (uVar6 < iVar3 + 1U) {
    iVar3 = FUN_004156a0((int)this);
    uVar6 = iVar3 + 1;
  }
  iVar3 = FUN_00415d40(uVar6);
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  FUN_00416140(*(undefined4 **)((int)this + 4),param_3);
  local_18 = local_18 & 0xffffff00;
  FUN_00415f80(1,&local_24);
  local_18 = local_18 & 0xffffff00;
  FUN_00416140(param_3,*(undefined4 **)((int)this + 8));
  if (*(void **)((int)this + 4) == (void *)0x0) {
    *(uint *)((int)this + 0xc) = iVar3 + uVar6 * 0xc;
    *(int *)((int)this + 8) = iVar3 + 0xc;
    *(int *)((int)this + 4) = iVar3;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

