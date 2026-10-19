// Address: 0x0047466a
// Name: FUN_0047466a
// Category: MFC_CRT


undefined4 * __thiscall FUN_0047466a(void *this,byte param_1)

{
  FUN_004745b6(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

