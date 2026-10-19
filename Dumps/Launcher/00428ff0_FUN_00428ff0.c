// Address: 0x00428ff0
// Name: FUN_00428ff0
// Category: Launcher


undefined4 * __thiscall FUN_00428ff0(void *this,byte param_1)

{
  FUN_00429020(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

