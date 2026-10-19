// Address: 0x004045f0
// Name: FUN_004045f0
// Category: Launcher


CView * FUN_004045f0(void)

{
  CView *this;
  CView *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049795a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = FUN_00452728(0x58);
  local_4 = 0;
  pCVar1 = (CView *)0x0;
  if (this != (CView *)0x0) {
    CView::CView(this);
    *(undefined ***)this = CDnView::vftable;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}

