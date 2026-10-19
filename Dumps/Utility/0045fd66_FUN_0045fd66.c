// Address: 0x0045fd66
// Name: FUN_0045fd66
// Category: Utility


void FUN_0045fd66(void)

{
  uint unaff_EBP;
  CWnd *unaff_ESI;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  CWnd::~CWnd(unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x45fd8c;
  __security_check_cookie(*(uint *)(unaff_EBP + 0x400) ^ unaff_EBP);
  return;
}

