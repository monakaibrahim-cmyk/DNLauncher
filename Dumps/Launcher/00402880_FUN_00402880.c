// Address: 0x00402880
// Name: FUN_00402880
// Category: Launcher


undefined4 * __thiscall FUN_00402880(void *this,byte param_1)

{
  *(undefined ***)this = std::logic_error::vftable;
  if (0xf < *(uint *)((int)this + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00475bfc(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

