// Address: 0x00461fa7
// Name: FUN_00461fa7
// Category: MFC_CRT


undefined4 * __thiscall FUN_00461fa7(void *this,byte param_1)

{
  FUN_00461f64(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

