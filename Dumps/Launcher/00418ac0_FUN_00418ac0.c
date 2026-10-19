// Address: 0x00418ac0
// Name: FUN_00418ac0
// Category: Launcher


undefined4 * __thiscall FUN_00418ac0(void *this,byte param_1)

{
  *(undefined ***)this = LogWnd::__LogWnd::vftable;
  DestroyWindow(*(HWND *)((int)this + 0x400c));
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

