// Address: 0x00425b20
// Name: FUN_00425b20
// Category: Launcher


undefined4 * __thiscall FUN_00425b20(void *this,byte param_1)

{
  *(undefined ***)this = CStream::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

