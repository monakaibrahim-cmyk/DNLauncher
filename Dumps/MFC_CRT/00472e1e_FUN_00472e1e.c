// Address: 0x00472e1e
// Name: FUN_00472e1e
// Category: MFC_CRT


undefined4 * __thiscall FUN_00472e1e(void *this,byte param_1)

{
  if (*(int *)((int)this + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

