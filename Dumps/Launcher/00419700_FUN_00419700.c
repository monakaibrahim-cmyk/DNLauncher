// Address: 0x00419700
// Name: FUN_00419700
// Category: Launcher


CWnd * __thiscall FUN_00419700(void *this,byte param_1)

{
  FID_conflict__CHotKeyCtrl(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

