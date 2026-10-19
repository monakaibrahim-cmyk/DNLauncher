// Address: 0x00473cf2
// Name: FUN_00473cf2
// Category: MFC_CRT


void __thiscall FUN_00473cf2(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1;
  if (param_1 < 0) {
LAB_00473d00:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    if (*(int *)((int)this + 4) == 0) {
      iVar5 = *(int *)((int)this + 0x10);
      if (*(int *)((int)this + 0x10) < param_1) {
        iVar5 = param_1;
      }
      pvVar3 = FUN_00452728(iVar5 << 2);
      *(void **)((int)this + 4) = pvVar3;
      _memset(pvVar3,0,iVar5 << 2);
      *(int *)((int)this + 0xc) = iVar5;
    }
    else {
      iVar1 = *(int *)((int)this + 0xc);
      if (iVar1 < param_1) {
        iVar4 = *(int *)((int)this + 0x10);
        if (iVar4 == 0) {
          iVar4 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
          if (iVar4 < 4) {
            iVar4 = 4;
          }
          else if (0x400 < iVar4) {
            iVar4 = 0x400;
          }
        }
        iVar2 = iVar4 + iVar1;
        if (iVar4 + iVar1 <= param_1) {
          iVar2 = param_1;
        }
        param_1 = iVar2;
        if (iVar1 <= param_1) {
          pvVar3 = FUN_00452728(param_1 << 2);
          FUN_004527b0(pvVar3,param_1 << 2,*(void **)((int)this + 4),*(int *)((int)this + 8) << 2);
          _memset((void *)((int)pvVar3 + *(int *)((int)this + 8) * 4),0,
                  (iVar5 - *(int *)((int)this + 8)) * 4);
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        goto LAB_00473d00;
      }
      iVar5 = *(int *)((int)this + 8);
      if (iVar5 < param_1) {
        _memset((void *)(*(int *)((int)this + 4) + iVar5 * 4),0,(param_1 - iVar5) * 4);
      }
    }
    *(int *)((int)this + 8) = param_1;
  }
  return;
}

