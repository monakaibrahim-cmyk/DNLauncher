// Address: 0x00435410
// Name: FUN_00435410
// Category: Utility


undefined4 * __thiscall FUN_00435410(void *this,byte param_1)

{
  *(undefined ***)this = CxImage::vftable;
  FUN_00434a90((int)this);
  FUN_004349e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

