// Address: 0x00437860
// Name: FUN_00437860
// Category: Utility


undefined4 * __thiscall FUN_00437860(void *this,byte param_1)

{
  FUN_004371e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

