// Address: 0x0041dcd0
// Name: FUN_0041dcd0
// Category: Launcher


undefined4 * __thiscall FUN_0041dcd0(void *this,byte param_1)

{
  *(undefined ***)this = CMD5Checksum::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

