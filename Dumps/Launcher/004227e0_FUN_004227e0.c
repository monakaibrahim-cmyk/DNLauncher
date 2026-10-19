// Address: 0x004227e0
// Name: FUN_004227e0
// Category: Launcher


CDialog * __thiscall FUN_004227e0(void *this,byte param_1)

{
  FUN_00422580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

