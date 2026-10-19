// Address: 0x00472e5c
// Name: FUN_00472e5c
// Category: MFC_CRT


void __thiscall FUN_00472e5c(void *this,int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_1;
  if (param_1 < 0) {
LAB_00472e6d:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 8)) {
        param_1 = 0;
        do {
          FUN_00472e1e((void *)(*(int *)((int)this + 4) + param_1),0);
          param_1 = param_1 + 0xc;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 8));
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    if (*(int *)((int)this + 4) == 0) {
      if (param_1 <= *(int *)((int)this + 0x10)) {
        param_1 = *(int *)((int)this + 0x10);
      }
      pvVar1 = FUN_00452728(param_1 * 0xc);
      *(void **)((int)this + 4) = pvVar1;
      _memset(pvVar1,0,param_1 * 0xc);
      if (0 < iVar5) {
        iVar3 = 0;
        iVar4 = iVar5;
        do {
          puVar2 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
          }
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(int *)((int)this + 0xc) = param_1;
    }
    else {
      if (*(int *)((int)this + 0xc) < param_1) {
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
        iVar4 = iVar4 + *(int *)((int)this + 0xc);
        if (iVar4 <= param_1) {
          iVar4 = param_1;
        }
        param_1 = iVar4;
        if (*(int *)((int)this + 0xc) <= param_1) {
          pvVar1 = FUN_00452728(param_1 * 0xc);
          FUN_004527b0(pvVar1,param_1 * 0xc,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0xc)
          ;
          _memset((void *)(*(int *)((int)this + 8) * 0xc + (int)pvVar1),0,
                  (iVar5 - *(int *)((int)this + 8)) * 0xc);
          iVar4 = 0;
          if (iVar5 != *(int *)((int)this + 8) && -1 < iVar5 - *(int *)((int)this + 8)) {
            do {
              puVar2 = (undefined4 *)((*(int *)((int)this + 8) + iVar4) * 0xc + (int)pvVar1);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
                puVar2[1] = 0;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar5 - *(int *)((int)this + 8));
          }
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        goto LAB_00472e6d;
      }
      iVar4 = *(int *)((int)this + 8);
      if (iVar4 < param_1) {
        _memset((void *)(iVar4 * 0xc + *(int *)((int)this + 4)),0,(param_1 - iVar4) * 0xc);
        iVar4 = 0;
        if (param_1 != *(int *)((int)this + 8) && -1 < param_1 - *(int *)((int)this + 8)) {
          do {
            puVar2 = (undefined4 *)
                     ((*(int *)((int)this + 8) + iVar4) * 0xc + *(int *)((int)this + 4));
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1 - *(int *)((int)this + 8));
        }
      }
      else if ((param_1 < iVar4) &&
              (iVar3 = iVar4 - param_1, bVar6 = iVar4 != param_1, param_1 = 0, bVar6 && -1 < iVar3))
      {
        iVar4 = iVar5 * 0xc;
        do {
          FUN_00472e1e((void *)(*(int *)((int)this + 4) + iVar4),0);
          param_1 = param_1 + 1;
          iVar4 = iVar4 + 0xc;
        } while (param_1 < *(int *)((int)this + 8) - iVar5);
      }
    }
    *(int *)((int)this + 8) = iVar5;
  }
  return;
}

