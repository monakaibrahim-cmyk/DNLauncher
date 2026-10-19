// Address: 0x0045e327
// Name: FUN_0045e327
// Category: Utility


void FUN_0045e327(void)

{
  uint unaff_EBP;
  CScrollView *unaff_ESI;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  CScrollView::~CScrollView(unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x45e34d;
  __security_check_cookie(*(uint *)(unaff_EBP + 0x400) ^ unaff_EBP);
  return;
}

