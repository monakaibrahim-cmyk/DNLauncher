// Address: 0x0042eb50
// Name: FUN_0042eb50
// Category: Launcher


undefined4 FUN_0042eb50(void)

{
  int iVar1;
  byte unaff_BL;
  
  iVar1 = _isspace((uint)unaff_BL);
  if (((iVar1 == 0) && (unaff_BL != 10)) && (unaff_BL != 0xd)) {
    return 0;
  }
  return 1;
}

