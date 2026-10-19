// Address: 0x00461fc3
// Name: FUN_00461fc3
// Category: MFC_CRT


CList<HWND__*,HWND__*> * __thiscall FUN_00461fc3(void *this,byte param_1)

{
  *(undefined ***)this = CList<HWND__*,HWND__*>::vftable;
  CList<HWND__*,HWND__*>::RemoveAll(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

