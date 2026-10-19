// Address: 0x00497a30
// Name: Unwind@00497a30
// Category: MFC_CRT


void Unwind_00497a30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00410090(*(int **)(unaff_EBP + 4));
    return;
  }
  return;
}

