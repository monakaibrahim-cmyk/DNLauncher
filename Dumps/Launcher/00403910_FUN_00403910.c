// Address: 0x00403910
// Name: FUN_00403910
// Category: Launcher


CDialog * __thiscall FUN_00403910(void *this,byte param_1)

{
  FUN_00403930(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

