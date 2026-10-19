// Address: 0x0045bb05
// Name: FUN_0045bb05
// Category: Utility


undefined4 * __thiscall FUN_0045bb05(void *this,byte param_1)

{
  *(undefined ***)this = CResourceException::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

