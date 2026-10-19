// Address: 0x0040dcb0
// Name: FUN_0040dcb0
// Category: Launcher


undefined4 FUN_0040dcb0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_ESI;
  int unaff_EDI;
  
  if (0x5555555 < unaff_ESI) {
    uVar1 = FUN_004065a0();
    return uVar1;
  }
  iVar2 = FUN_0040e440(unaff_ESI);
  *(int *)(unaff_EDI + 4) = iVar2;
  *(int *)(unaff_EDI + 8) = iVar2;
  *(uint *)(unaff_EDI + 0xc) = unaff_ESI * 0x30 + iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

