// Address: 0x00462d62
// Name: Catch@00462d62
// Category: MFC_CRT


undefined1 * Catch_00462d62(void)

{
  int unaff_EBP;
  
  GlobalUnlock(*(HGLOBAL *)(unaff_EBP + -0x18));
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    FUN_004528f4(*(int **)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &LAB_00462cef;
}

