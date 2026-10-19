// Address: 0x004706ef
// Name: FUN_004706ef
// Category: MFC_CRT


CPtrList * __thiscall FUN_004706ef(void *this,byte param_1)

{
  FUN_00467bd9(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

