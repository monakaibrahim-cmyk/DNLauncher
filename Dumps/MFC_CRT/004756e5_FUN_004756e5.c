// Address: 0x004756e5
// Name: FUN_004756e5
// Category: MFC_CRT


CDialog * __thiscall FUN_004756e5(void *this,byte param_1)

{
  *(undefined ***)this = COleBusyDialog::vftable;
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

