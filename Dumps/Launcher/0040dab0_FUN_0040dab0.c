// Address: 0x0040dab0
// Name: FUN_0040dab0
// Category: Launcher


uint FUN_0040dab0(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_00475b26();
  }
  if (*(uint *)(*unaff_ESI + 8) <= (uint)unaff_ESI[1]) {
    FUN_00475b26();
    return unaff_ESI[1];
  }
  return unaff_ESI[1];
}

