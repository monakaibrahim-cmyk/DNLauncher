// Address: 0x00461ef7
// Name: FUN_00461ef7
// Category: MFC_CRT


undefined4 * __thiscall FUN_00461ef7(void *this,byte param_1)

{
  FUN_00471446(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

