// Address: 0x00428d80
// Name: FUN_00428d80
// Category: Launcher


undefined4 * __thiscall FUN_00428d80(void *this,byte param_1)

{
  *(undefined ***)this = CEtFileHandle::vftable;
  if (*(void **)((int)this + 0x140) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x140));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

