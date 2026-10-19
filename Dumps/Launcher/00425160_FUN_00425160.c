// Address: 0x00425160
// Name: FUN_00425160
// Category: Launcher


void __thiscall FUN_00425160(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  uint uStack_50;
  undefined1 local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00498f98;
  local_10 = ExceptionList;
  uStack_50 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  uVar6 = 0;
  local_1c = 7;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffff0000);
  local_18 = uStack_50;
  FUN_004069c0(local_34,0,0xffffffff);
  local_8 = 0;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x1c;
    iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
  }
  if (iVar1 == 0x9249249) {
    FUN_004065a0();
    iVar2 = extraout_ECX;
  }
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
  }
  if (uVar6 < iVar1 + 1U) {
    if (0x9249249 - (uVar6 >> 1) < uVar6) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 + (uVar6 >> 1);
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
    }
    if (uVar6 < iVar2 + 1U) {
      iVar2 = FUN_004061d0((int)this);
      uVar6 = iVar2 + 1;
    }
    if (uVar6 == 0) {
      pvVar3 = FUN_00452728(0);
    }
    else {
      pvVar3 = (void *)FUN_004044c0(uVar6);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    pvVar4 = (void *)FUN_00425880(*(int *)((int)this + 4),pvVar3,param_3);
    FUN_00425690(&DAT_00000001,pvVar4);
    FUN_00425880(param_3,(void *)((int)pvVar4 + 0x1c),*(int *)((int)this + 8));
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
    }
    if (iVar2 != 0) {
      FUN_00406e30();
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + uVar6 * 0x1c);
    *(void **)((int)this + 8) = (void *)((int)pvVar3 + (iVar1 + 1) * 0x1c);
    *(void **)((int)this + 4) = pvVar3;
  }
  else {
    iVar2 = *(int *)((int)this + 8);
    iVar1 = iVar2 - param_3;
    if (iVar1 / 0x1c + (iVar1 >> 0x1f) == iVar1 >> 0x1f) {
      FUN_004255f0(param_3 + 0x1c,iVar2,param_3,(void *)(param_3 + 0x1c));
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_004250e0();
      local_8 = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x1c;
    }
    else {
      uVar5 = FUN_004255f0(iVar1,iVar2,iVar2 + -0x1c,(void *)iVar2);
      *(undefined4 *)((int)this + 8) = uVar5;
      FUN_00425640();
    }
    FUN_00425620();
  }
  if (local_1c < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_30);
}

