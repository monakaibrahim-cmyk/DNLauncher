// Address: 0x004745c6
// Name: FUN_004745c6
// Category: MFC_CRT


void __thiscall FUN_004745c6(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_1) && (0 < param_3)) {
    if (param_1 < *(int *)((int)this + 8)) {
      iVar1 = *(int *)((int)this + 8);
      FUN_00471456(this,iVar1 + param_3,-1);
      FUN_004070b0((void *)(*(int *)((int)this + 4) + (param_1 + param_3) * 4),
                   ((*(int *)((int)this + 8) - param_1) - param_3) * 4,
                   (void *)(*(int *)((int)this + 4) + param_1 * 4),(iVar1 - param_1) * 4);
      _memset((void *)(*(int *)((int)this + 4) + param_1 * 4),0,param_3 << 2);
    }
    else {
      FUN_00471456(this,param_1 + param_3,-1);
    }
    iVar1 = param_1 << 2;
    do {
      param_3 = param_3 + -1;
      *(undefined4 *)(iVar1 + *(int *)((int)this + 4)) = param_2;
      iVar1 = iVar1 + 4;
    } while (param_3 != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

