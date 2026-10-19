// Address: 0x00496d90
// Name: Unwind@00496d90
// Category: MFC_CRT


void Unwind_00496d90(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00410090(*(int **)(unaff_EBP + -0x14));
    return;
  }
  return;
}

