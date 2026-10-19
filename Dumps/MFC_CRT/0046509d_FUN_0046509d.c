// Address: 0x0046509d
// Name: FUN_0046509d
// Category: MFC_CRT


CList<HWND__*,HWND__*> * __thiscall FUN_0046509d(void *this,byte param_1)

{
  *(undefined ***)this = CList<IControlSiteFactory*,IControlSiteFactory*>::vftable;
  CList<HWND__*,HWND__*>::RemoveAll(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

