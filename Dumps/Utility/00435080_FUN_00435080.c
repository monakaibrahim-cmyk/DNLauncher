// Address: 0x00435080
// Name: FUN_00435080
// Category: Utility


undefined4 * __thiscall FUN_00435080(void *this,byte param_1)

{
  *(undefined ***)this = CxFile::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

