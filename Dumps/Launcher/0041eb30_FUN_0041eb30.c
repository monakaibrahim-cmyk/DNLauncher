// Address: 0x0041eb30
// Name: FUN_0041eb30
// Category: Launcher


CDialog * __thiscall FUN_0041eb30(void *this,byte param_1)

{
  FUN_0041e820(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

