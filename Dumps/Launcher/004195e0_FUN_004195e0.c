// Address: 0x004195e0
// Name: FUN_004195e0
// Category: Launcher


CWnd * __thiscall FUN_004195e0(void *this,byte param_1)

{
  FUN_00419600(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

