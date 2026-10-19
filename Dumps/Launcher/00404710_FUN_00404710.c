// Address: 0x00404710
// Name: FUN_00404710
// Category: Launcher


CHtmlView * __thiscall FUN_00404710(void *this,byte param_1)

{
  *(undefined ***)this = CDnHtmlView::vftable;
  CHtmlView::~CHtmlView(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

