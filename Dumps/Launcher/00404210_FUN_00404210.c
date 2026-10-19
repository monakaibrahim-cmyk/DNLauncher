// Address: 0x00404210
// Name: FUN_00404210
// Category: Launcher


undefined4 * __thiscall FUN_00404210(void *this,byte param_1)

{
  FUN_00404230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

