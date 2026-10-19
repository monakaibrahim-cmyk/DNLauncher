// Address: 0x0049846e
// Name: Unwind@0049846e
// Category: MFC_CRT


void Unwind_0049846e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    FUN_00410090((int *)(unaff_EBP + -0x78));
    return;
  }
  return;
}

