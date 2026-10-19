// Address: 0x0046417e
// Name: FUN_0046417e
// Category: MFC_CRT


undefined4 * __thiscall FUN_0046417e(void *this,byte param_1)

{
  FUN_00463f8a(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

