// Address: 0x00415420
// Name: FUN_00415420
// Category: Launcher


int FUN_00415420(void)

{
  int unaff_ESI;
  uint unaff_EDI;
  
  if ((*(int *)(unaff_ESI + 4) == 0) ||
     ((uint)((*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x13c) <= unaff_EDI)) {
    FUN_00475b26();
  }
  return unaff_EDI * 0x13c + *(int *)(unaff_ESI + 4);
}

