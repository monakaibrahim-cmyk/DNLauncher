// Address: 0x0047632d
// Name: FUN_0047632d
// Category: MFC_CRT


undefined4 * __thiscall FUN_0047632d(void *this,byte param_1)

{
  FUN_0047631f(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

