// Address: 0x00475c1f
// Name: FUN_00475c1f
// Category: MFC_CRT


undefined4 * __thiscall FUN_00475c1f(void *this,byte param_1)

{
  FUN_00475bfc(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

