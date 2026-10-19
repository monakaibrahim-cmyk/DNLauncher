// Address: 0x0041db20
// Name: FUN_0041db20
// Category: Launcher


undefined4 * __thiscall FUN_0041db20(void *this,byte param_1)

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

