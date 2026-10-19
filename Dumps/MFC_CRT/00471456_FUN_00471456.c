// Address: 0x00471456
// Name: FUN_00471456
// Category: MFC_CRT


void __thiscall FUN_00471456(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 < 0) goto LAB_00471467;
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if (*(int *)((int)this + 4) == 0) {
    pvVar4 = FUN_00452728(param_1 << 2);
    *(void **)((int)this + 4) = pvVar4;
    _memset(pvVar4,0,param_1 << 2);
    *(int *)((int)this + 0xc) = param_1;
LAB_004714d8:
    *(int *)((int)this + 8) = param_1;
    return;
  }
  iVar1 = *(int *)((int)this + 0xc);
  if (param_1 <= iVar1) {
    iVar2 = *(int *)((int)this + 8);
    if (iVar2 < param_1) {
      _memset((void *)(*(int *)((int)this + 4) + iVar2 * 4),0,(param_1 - iVar2) * 4);
    }
    goto LAB_004714d8;
  }
  iVar5 = *(int *)((int)this + 0x10);
  if (iVar5 == 0) {
    iVar5 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
    if (iVar5 < 4) {
LAB_0047150a:
      iVar5 = 4;
    }
    else if (iVar5 < 0x401) {
      if (iVar5 < 4) goto LAB_0047150a;
    }
    else {
      iVar5 = 0x400;
    }
  }
  iVar3 = iVar5 + iVar1;
  if (iVar5 + iVar1 <= param_1) {
    iVar3 = param_1;
  }
  param_1 = iVar3;
  if (iVar1 <= param_1) {
    pvVar4 = FUN_00452728(param_1 << 2);
    FUN_004527b0(pvVar4,param_1 << 2,*(void **)((int)this + 4),*(int *)((int)this + 8) << 2);
    _memset((void *)((int)pvVar4 + *(int *)((int)this + 8) * 4),0,
            (iVar2 - *(int *)((int)this + 8)) * 4);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
LAB_00471467:
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

