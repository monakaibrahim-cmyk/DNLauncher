// Address: 0x00407e00
// Name: FUN_00407e00
// Category: Launcher


void __thiscall FUN_00407e00(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  uint uStack_6c;
  undefined1 local_50 [4];
  void *local_4c;
  uint local_38;
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004986e8;
  local_10 = ExceptionList;
  uStack_6c = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_18 = uStack_6c;
  FUN_00408150(local_50);
  uVar6 = 0;
  local_8 = 0;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x38;
    iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x38;
  }
  if (iVar1 == 0x4924924) {
    FUN_0040e7a0();
    iVar2 = extraout_ECX;
  }
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x38;
  }
  if (uVar6 < iVar1 + 1U) {
    if (0x4924924 - (uVar6 >> 1) < uVar6) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 + (uVar6 >> 1);
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x38;
    }
    if (uVar6 < iVar2 + 1U) {
      iVar2 = FUN_00407cc0((int)this);
      uVar6 = iVar2 + 1;
    }
    if (uVar6 == 0) {
      pvVar3 = FUN_00452728(0);
    }
    else {
      pvVar3 = (void *)FUN_00408280(uVar6);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    pvVar4 = FUN_00408500(*(void **)((int)this + 4),(int)param_2,pvVar3);
    FUN_004082e0(local_50,1,pvVar4);
    FUN_00408500(param_2,*(int *)((int)this + 8),(void *)((int)pvVar4 + 0x38));
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x38;
    }
    if (iVar2 != 0) {
      FUN_00408380(*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + uVar6 * 0x38);
    *(void **)((int)this + 8) = (void *)((int)pvVar3 + (iVar1 + 1) * 0x38);
    *(void **)((int)this + 4) = pvVar3;
  }
  else {
    pvVar3 = *(void **)((int)this + 8);
    iVar2 = ((int)pvVar3 - (int)param_2) / 0x38;
    if (iVar2 == 0) {
      FUN_00408250(0,(void *)((int)param_2 + 0x38),param_2,(int)pvVar3);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00407db0(local_50);
      local_8 = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x38;
      FUN_004083e0((void *)(*(int *)((int)this + 8) + -0x38));
    }
    else {
      uVar5 = FUN_00408250(iVar2,pvVar3,(void *)((int)pvVar3 + -0x38),(int)pvVar3);
      *(undefined4 *)((int)this + 8) = uVar5;
      FUN_00408460((int)param_2);
      FUN_004083e0((void *)((int)param_2 + 0x38));
    }
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  if (local_38 < 0x10) {
    ExceptionList = local_10;
    __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}

