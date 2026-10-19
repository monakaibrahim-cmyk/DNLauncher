// Address: 0x00402140
// Name: FUN_00402140
// Category: Launcher


void __thiscall FUN_00402140(void *this,undefined4 param_1,undefined4 *param_2)

{
  rsize_t rVar1;
  undefined4 *in_EAX;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar5;
  undefined4 extraout_ECX_01;
  int iVar6;
  uint local_8;
  undefined4 local_4;
  
  local_4 = *in_EAX;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    local_8 = 0;
    iVar6 = 0;
  }
  else {
    local_8 = *(int *)((int)this + 0xc) - iVar2 >> 2;
    iVar6 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (iVar6 == 0x3fffffff) {
    iVar2 = FUN_0040e7a0();
    local_8 = extraout_ECX;
  }
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (local_8 < iVar6 + 1U) {
    if (0x3fffffff - (local_8 >> 1) < local_8) {
      local_8 = 0;
    }
    else {
      local_8 = local_8 + (local_8 >> 1);
    }
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar2 >> 2;
    }
    if (local_8 < iVar6 + 1U) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar2 >> 2;
      }
      local_8 = iVar2 + 1;
    }
    pvVar3 = (void *)FUN_00402340(local_8);
    pvVar5 = *(void **)((int)this + 4);
    iVar2 = (int)param_2 - (int)pvVar5 >> 2;
    rVar1 = iVar2 * 4;
    if (iVar2 != 0) {
      _memmove_s(pvVar3,rVar1,pvVar5,rVar1);
      pvVar5 = extraout_ECX_00;
    }
    puVar4 = FUN_00401ec0(pvVar5,&local_4);
    iVar2 = *(int *)((int)this + 8) - (int)param_2 >> 2;
    if (iVar2 != 0) {
      rVar1 = iVar2 * 4;
      _memmove_s(puVar4,rVar1,param_2,rVar1);
    }
    if (*(void **)((int)this + 4) == (void *)0x0) {
      *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + local_8 * 4);
      *(int *)((int)this + 8) = (int)pvVar3 + 4;
      *(void **)((int)this + 4) = pvVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  pvVar5 = *(void **)((int)this + 8);
  if ((int)pvVar5 - (int)param_2 >> 2 == 0) {
    FUN_00402710(param_2 + 1,param_2);
    FUN_00401ec0(extraout_ECX_01,&local_4);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
    puVar4 = (undefined4 *)(*(int *)((int)this + 8) + -4);
    if (param_2 != puVar4) {
      do {
        *param_2 = local_4;
        param_2 = param_2 + 1;
      } while (param_2 != puVar4);
      return;
    }
  }
  else {
    pvVar3 = FUN_00402710(pvVar5,(void *)((int)pvVar5 + -4));
    iVar2 = ((int)pvVar5 + -4) - (int)param_2 >> 2;
    *(void **)((int)this + 8) = pvVar3;
    if (0 < iVar2) {
      _memmove_s((void *)((int)pvVar5 + iVar2 * -4),iVar2 * 4,param_2,iVar2 * 4);
    }
    puVar4 = param_2 + 1;
    for (; param_2 != puVar4; param_2 = param_2 + 1) {
      *param_2 = local_4;
    }
  }
  return;
}

