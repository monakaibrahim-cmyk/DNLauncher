// Address: 0x004085d0
// Name: FUN_004085d0
// Category: Launcher


CDialog * __thiscall FUN_004085d0(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

