// Address: 0x0042ed00
// Name: FUN_0042ed00
// Category: Launcher


int FUN_0042ed00(void)

{
  byte in_AL;
  int iVar1;
  
  if (in_AL < 0x7f) {
    iVar1 = _isalnum((uint)in_AL);
    return iVar1;
  }
  return 1;
}

