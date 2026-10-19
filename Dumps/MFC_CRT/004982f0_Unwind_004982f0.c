// Address: 0x004982f0
// Name: Unwind@004982f0
// Category: MFC_CRT


void Unwind_004982f0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    FUN_00410090(*(int **)(unaff_EBP + -0x2c));
    return;
  }
  return;
}

