// Address: 0x004719f1
// Name: Catch@004719f1
// Category: MFC_CRT


undefined * Catch_004719f1(void)

{
  tagEXCEPINFO *ptVar1;
  int unaff_EBP;
  
  ptVar1 = *(tagEXCEPINFO **)(*(int *)(unaff_EBP + 0xc) + 0xc);
  if (ptVar1 != (tagEXCEPINFO *)0x0) {
    COleDispatchException::Process(ptVar1,*(CException **)(unaff_EBP + -0x20));
  }
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    FUN_004528f4(*(int **)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0x80020009;
  return &DAT_00471a1d;
}

