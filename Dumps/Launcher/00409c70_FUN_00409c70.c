// Address: 0x00409c70
// Name: FUN_00409c70
// Category: Launcher


int FUN_00409c70(void)

{
  int unaff_ESI;
  uint unaff_EDI;
  
  if ((*(int *)(unaff_ESI + 4) == 0) ||
     ((uint)(*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4) >> 3) <= unaff_EDI)) {
    FUN_00475b26();
  }
  return *(int *)(unaff_ESI + 4) + unaff_EDI * 8;
}

