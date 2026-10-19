// Address: 0x00473ede
// Name: FUN_00473ede
// Category: MFC_CRT


undefined4 * __thiscall FUN_00473ede(void *this,byte param_1)

{
  FUN_00473ec9(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

