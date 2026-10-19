// Address: 0x00403f10
// Name: FUN_00403f10
// Category: Launcher


CWnd * __thiscall FUN_00403f10(void *this,byte param_1)

{
  FID_conflict__CHotKeyCtrl(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

