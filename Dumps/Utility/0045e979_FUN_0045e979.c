// Address: 0x0045e979
// Name: FUN_0045e979
// Category: Utility


CScrollView * __thiscall FUN_0045e979(void *this,byte param_1)

{
  CScrollView::~CScrollView(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

