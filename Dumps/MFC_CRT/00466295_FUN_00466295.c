// Address: 0x00466295
// Name: FUN_00466295
// Category: MFC_CRT


CToolTipCtrl * __thiscall FUN_00466295(void *this,byte param_1)

{
  CToolTipCtrl::~CToolTipCtrl(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

