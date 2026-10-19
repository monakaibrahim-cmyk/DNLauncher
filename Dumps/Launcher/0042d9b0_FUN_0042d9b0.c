// Address: 0x0042d9b0
// Name: FUN_0042d9b0
// Category: Launcher


undefined4 * __thiscall FUN_0042d9b0(void *this,byte param_1)

{
  FUN_0042d9d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

