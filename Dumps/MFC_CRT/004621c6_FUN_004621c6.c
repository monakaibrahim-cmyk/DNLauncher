// Address: 0x004621c6
// Name: FUN_004621c6
// Category: MFC_CRT


CMenu * __thiscall FUN_004621c6(void *this,byte param_1)

{
  *(undefined ***)this = CMenu::vftable;
  CMenu::DestroyMenu(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

