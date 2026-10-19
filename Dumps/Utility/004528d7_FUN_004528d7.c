// Address: 0x004528d7
// Name: FUN_004528d7
// Category: Utility


undefined4 * __thiscall FUN_004528d7(void *this,byte param_1)

{
  *(undefined ***)this = COleException::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

