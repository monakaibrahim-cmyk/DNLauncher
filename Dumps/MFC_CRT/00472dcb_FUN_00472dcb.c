// Address: 0x00472dcb
// Name: FUN_00472dcb
// Category: MFC_CRT


int __thiscall FUN_00472dcb(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8))) {
    return param_1 * 0xc + *(int *)((int)this + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

