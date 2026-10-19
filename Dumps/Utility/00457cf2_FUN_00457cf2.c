// Address: 0x00457cf2
// Name: FUN_00457cf2
// Category: Utility


CWnd * __thiscall FUN_00457cf2(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

