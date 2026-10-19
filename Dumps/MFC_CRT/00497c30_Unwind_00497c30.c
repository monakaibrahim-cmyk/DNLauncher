// Address: 0x00497c30
// Name: Unwind@00497c30
// Category: MFC_CRT


void Unwind_00497c30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FUN_00410090(*(int **)(unaff_EBP + 4));
    return;
  }
  return;
}

