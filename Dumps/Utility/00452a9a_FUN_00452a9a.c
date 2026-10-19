// Address: 0x00452a9a
// Name: FUN_00452a9a
// Category: Utility


undefined4 * __thiscall FUN_00452a9a(void *this,byte param_1)

{
  *(undefined ***)this = CMemoryException::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

