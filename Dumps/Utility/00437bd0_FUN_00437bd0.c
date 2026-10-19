// Address: 0x00437bd0
// Name: FUN_00437bd0
// Category: Utility


undefined4 * __thiscall FUN_00437bd0(void *this,byte param_1)

{
  FUN_00437ae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

