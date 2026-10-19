// Address: 0x00471252
// Name: FUN_00471252
// Category: MFC_CRT


void __thiscall FUN_00471252(void *this,size_t param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  
  sVar2 = param_1;
  if ((int)param_1 < 0) goto LAB_00471263;
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if (*(int *)((int)this + 4) == 0) {
    pvVar4 = FUN_00452728(param_1);
    *(void **)((int)this + 4) = pvVar4;
    _memset(pvVar4,0,param_1);
    *(size_t *)((int)this + 0xc) = param_1;
LAB_004712cf:
    *(size_t *)((int)this + 8) = param_1;
    return;
  }
  iVar1 = *(int *)((int)this + 0xc);
  if ((int)param_1 <= iVar1) {
    iVar1 = *(int *)((int)this + 8);
    if (iVar1 < (int)param_1) {
      _memset((void *)(iVar1 + *(int *)((int)this + 4)),0,param_1 - iVar1);
    }
    goto LAB_004712cf;
  }
  iVar5 = *(int *)((int)this + 0x10);
  if (iVar5 == 0) {
    iVar5 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
    if (iVar5 < 4) {
LAB_00471301:
      iVar5 = 4;
    }
    else if (iVar5 < 0x401) {
      if (iVar5 < 4) goto LAB_00471301;
    }
    else {
      iVar5 = 0x400;
    }
  }
  sVar3 = iVar5 + iVar1;
  if (iVar5 + iVar1 <= (int)param_1) {
    sVar3 = param_1;
  }
  param_1 = sVar3;
  if (iVar1 <= (int)param_1) {
    pvVar4 = FUN_00452728(param_1);
    FUN_004527b0(pvVar4,param_1,*(void **)((int)this + 4),*(rsize_t *)((int)this + 8));
    _memset((void *)(*(int *)((int)this + 8) + (int)pvVar4),0,sVar2 - *(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
LAB_00471263:
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

