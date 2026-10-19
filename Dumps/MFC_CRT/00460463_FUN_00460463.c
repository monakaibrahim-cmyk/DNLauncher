// Address: 0x00460463
// Name: FUN_00460463
// Category: MFC_CRT


undefined4 * __thiscall FUN_00460463(void *this,byte param_1)

{
  FUN_0046043c(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

