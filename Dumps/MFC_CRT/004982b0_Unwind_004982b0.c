// Address: 0x004982b0
// Name: Unwind@004982b0
// Category: MFC_CRT


void Unwind_004982b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00410090(*(int **)(unaff_EBP + 4));
    return;
  }
  return;
}

