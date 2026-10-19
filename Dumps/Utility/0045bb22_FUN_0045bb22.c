// Address: 0x0045bb22
// Name: FUN_0045bb22
// Category: Utility


undefined4 * __thiscall FUN_0045bb22(void *this,byte param_1)

{
  *(undefined ***)this = CUserException::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

