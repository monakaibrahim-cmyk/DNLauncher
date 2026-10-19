// Address: 0x00462a60
// Name: FUN_00462a60
// Category: MFC_CRT


void FUN_00462a60(void)

{
  uint unaff_EBP;
  CWnd *unaff_ESI;
  undefined4 uStack0000000c;
  
  FUN_004031b0((undefined4 *)(*(int *)(unaff_ESI + 0xc4) + -0x10));
  *(undefined1 *)(unaff_EBP - 4) = 0;
  FUN_00467bd9((CPtrList *)(unaff_ESI + 0x84));
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  CWnd::~CWnd(unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x462aa3;
  __security_check_cookie(*(uint *)(unaff_EBP + 0x400) ^ unaff_EBP);
  return;
}

