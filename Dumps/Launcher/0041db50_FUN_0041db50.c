// Address: 0x0041db50
// Name: FUN_0041db50
// Category: Launcher


CWnd * __thiscall FUN_0041db50(void *this,byte param_1)

{
  FID_conflict__CHotKeyCtrl(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

