// Address: 0x004105a0
// Name: FUN_004105a0
// Category: Launcher


undefined4 * __thiscall FUN_004105a0(void *this,byte param_1)

{
  *(undefined ***)this = CThread::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

