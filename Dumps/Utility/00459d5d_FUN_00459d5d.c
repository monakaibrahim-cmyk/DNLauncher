// Address: 0x00459d5d
// Name: FUN_00459d5d
// Category: Utility


CDialog * __thiscall FUN_00459d5d(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

