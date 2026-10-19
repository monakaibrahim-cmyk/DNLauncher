// Address: 0x0045d6c3
// Name: FUN_0045d6c3
// Category: Utility


CHtmlView * __thiscall FUN_0045d6c3(void *this,byte param_1)

{
  CHtmlView::~CHtmlView(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

