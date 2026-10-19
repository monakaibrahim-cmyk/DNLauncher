// Address: 0x0040fd90
// Name: FUN_0040fd90
// Category: Launcher


undefined4 FUN_0040fd90(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (0x1fffffff < unaff_EDI) {
    uVar1 = FUN_0040e7a0();
    return uVar1;
  }
  iVar2 = FUN_0040ff90(unaff_EDI);
  *(int *)(unaff_ESI + 4) = iVar2;
  *(int *)(unaff_ESI + 8) = iVar2;
  iVar2 = iVar2 + unaff_EDI * 8;
  *(int *)(unaff_ESI + 0xc) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

