// Address: 0x0041db70
// Name: FUN_0041db70
// Category: Launcher


CWnd * __thiscall FUN_0041db70(void *this,byte param_1)

{
  *(undefined ***)this = CCustomSkinButton::vftable;
  FUN_0041c830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

