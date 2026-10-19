// Address: 0x00489251
// Name: FUN_00489251
// Category: MFC_CRT


undefined4 * __thiscall FUN_00489251(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  FUN_00475bfc(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

