// Address: 0x0046abd6
// Name: Catch@0046abd6
// Category: MFC_CRT


undefined * Catch_0046abd6(void)

{
  int *piVar1;
  BOOL BVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if ((piVar1[2] == -0x7ffdfffd) && (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x74) == 0)) {
    BVar2 = EnableWindow(*(HWND *)(*(int *)(unaff_EBP + -0x18) + 0x24),*(BOOL *)(unaff_EBP + 8));
    *(BOOL *)(unaff_EBP + -0x14) = BVar2;
  }
  FUN_004528f4(piVar1);
  return &DAT_0046ac07;
}

