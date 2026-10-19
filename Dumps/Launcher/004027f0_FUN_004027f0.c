// Address: 0x004027f0
// Name: FUN_004027f0
// Category: Launcher


undefined4 * __thiscall FUN_004027f0(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  FUN_00475bfc(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

