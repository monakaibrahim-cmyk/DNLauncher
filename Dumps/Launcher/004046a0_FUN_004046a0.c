// Address: 0x004046a0
// Name: FUN_004046a0
// Category: Launcher


CHtmlView * FUN_004046a0(void)

{
  CHtmlView *this;
  CHtmlView *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049795a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = FUN_00452728(0xf0);
  local_4 = 0;
  pCVar1 = (CHtmlView *)0x0;
  if (this != (CHtmlView *)0x0) {
    CHtmlView::CHtmlView(this);
    *(undefined ***)this = CDnHtmlView::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}

