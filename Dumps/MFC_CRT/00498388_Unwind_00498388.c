// Address: 0x00498388
// Name: Unwind@00498388
// Category: MFC_CRT


void Unwind_00498388(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    FUN_00410090(*(int **)(unaff_EBP + 4));
    return;
  }
  return;
}

