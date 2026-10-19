// Address: 0x00497f40
// Name: Unwind@00497f40
// Category: MFC_CRT


void Unwind_00497f40(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_004105d0(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}

