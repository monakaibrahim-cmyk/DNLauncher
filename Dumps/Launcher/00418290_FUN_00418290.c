// Address: 0x00418290
// Name: FUN_00418290
// Category: Launcher


void __thiscall FUN_00418290(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint local_38;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00497e60;
  local_10 = ExceptionList;
  local_38 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_38;
  ExceptionList = &local_10;
  local_24 = *param_1;
  local_20 = param_1[1];
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == 0) {
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar6 = *(int *)((int)this + 0xc) - iVar3 >> 3;
    iVar5 = *(int *)((int)this + 8) - iVar3 >> 3;
  }
  puVar2 = &local_38;
  if (iVar5 == 0x1fffffff) {
    iVar3 = FUN_004065a0();
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 8) - iVar3 >> 3;
  }
  if (iVar5 + 1U <= uVar6) {
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((int)puVar1 - (int)param_3 >> 3 == 0) {
      FUN_00418500(param_3 + 2,puVar1,param_3);
      local_8 = 2;
      FUN_00418570(1 - (*(int *)((int)this + 8) - (int)param_3 >> 3),&local_24);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 8;
      puVar1 = (undefined4 *)(*(int *)((int)this + 8) + -8);
      if (param_3 != puVar1) {
        do {
          *param_3 = local_24;
          param_3[1] = local_20;
          param_3 = param_3 + 2;
        } while (param_3 != puVar1);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      uVar4 = FUN_00418500(iVar5 + 1U,puVar1,puVar1 + -2);
      *(undefined4 *)((int)this + 8) = uVar4;
      FUN_00418530((int)(puVar1 + -2),(int)puVar1);
      puVar1 = param_3 + 2;
      for (; param_3 != puVar1; param_3 = param_3 + 2) {
        *param_3 = local_24;
        param_3[1] = local_20;
      }
    }
    ExceptionList = local_10;
    return;
  }
  if (0x1fffffff - (uVar6 >> 1) < uVar6) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 + (uVar6 >> 1);
  }
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 8) - iVar3 >> 3;
  }
  if (uVar6 < iVar5 + 1U) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 8) - iVar3 >> 3;
    }
    uVar6 = iVar3 + 1;
  }
  iVar3 = FUN_0040ff90(uVar6);
  local_8 = 0;
  local_1c = local_1c & 0xffffff00;
  FUN_00418590(*(undefined4 **)((int)this + 4),param_3);
  local_1c = local_1c & 0xffffff00;
  FUN_00418570(1,&local_24);
  local_1c = local_1c & 0xffffff00;
  FUN_00418590(param_3,*(undefined4 **)((int)this + 8));
  if (*(void **)((int)this + 4) == (void *)0x0) {
    *(uint *)((int)this + 0xc) = iVar3 + uVar6 * 8;
    *(int *)((int)this + 8) = iVar3 + 8;
    *(int *)((int)this + 4) = iVar3;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

