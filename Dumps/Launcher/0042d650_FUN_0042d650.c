// Address: 0x0042d650
// Name: FUN_0042d650
// Category: Launcher


undefined4 * __thiscall FUN_0042d650(void *this,byte param_1)

{
  FUN_0042d670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

