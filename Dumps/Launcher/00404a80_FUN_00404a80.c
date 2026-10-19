// Address: 0x00404a80
// Name: FUN_00404a80
// Category: Launcher


undefined4 * __thiscall FUN_00404a80(void *this,byte param_1)

{
  FUN_00404aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

