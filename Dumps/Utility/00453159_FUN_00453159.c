// Address: 0x00453159
// Name: FUN_00453159
// Category: Utility


CFile * __thiscall FUN_00453159(void *this,byte param_1)

{
  FUN_00453041(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

