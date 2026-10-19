// Address: 0x0045e7f1
// Name: FUN_0045e7f1
// Category: Utility


CWnd * __thiscall FUN_0045e7f1(void *this,byte param_1)

{
  *(undefined ***)this = _AFX_MOUSEANCHORWND::vftable;
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

