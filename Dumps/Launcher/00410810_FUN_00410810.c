// Address: 0x00410810
// Name: FUN_00410810
// Category: Launcher


undefined4 * __thiscall FUN_00410810(void *this,byte param_1)

{
  FUN_00410830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

