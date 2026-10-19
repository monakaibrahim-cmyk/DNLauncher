// Address: 0x00404660
// Name: FUN_00404660
// Category: Launcher


CWnd * __thiscall FUN_00404660(void *this,byte param_1)

{
  *(undefined ***)this = CDnView::vftable;
  FUN_0045fc5a(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

