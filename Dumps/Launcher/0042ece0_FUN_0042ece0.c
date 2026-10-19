// Address: 0x0042ece0
// Name: FUN_0042ece0
// Category: Launcher


int FUN_0042ece0(void)

{
  byte in_AL;
  int iVar1;
  
  if (in_AL < 0x7f) {
    iVar1 = _isalpha((uint)in_AL);
    return iVar1;
  }
  return 1;
}

