// Address: 0x004609cc
// Name: FUN_004609cc
// Category: MFC_CRT


int __thiscall FUN_004609cc(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8))) {
    return *(int *)((int)this + 4) + param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

