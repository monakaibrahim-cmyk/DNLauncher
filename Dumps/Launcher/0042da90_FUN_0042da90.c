// Address: 0x0042da90
// Name: FUN_0042da90
// Category: Launcher


int FUN_0042da90(void)

{
  int iVar1;
  
  iVar1 = FUN_0042ea80();
  if (iVar1 == 0) {
    return 0;
  }
  if (0xf < *(uint *)(iVar1 + 0x48)) {
    return *(int *)(iVar1 + 0x34);
  }
  return iVar1 + 0x34;
}

