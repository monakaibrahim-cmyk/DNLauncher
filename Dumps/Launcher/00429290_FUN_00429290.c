// Address: 0x00429290
// Name: FUN_00429290
// Category: Launcher


int FUN_00429290(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  undefined4 local_4;
  
  uVar4 = 0;
  if (*(int *)(unaff_ESI + 0x2a4) == 0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar3 = *(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4);
    iVar2 = iVar3 * 0x67b23a55;
    iVar3 = iVar3 / 0x13c;
  }
  if (0 < iVar3) {
    local_4 = 0;
    do {
      if ((*(int *)(unaff_ESI + 0x2a4) == 0) ||
         ((uint)((*(int *)(unaff_ESI + 0x2a8) - *(int *)(unaff_ESI + 0x2a4)) / 0x13c) <= uVar4)) {
        FUN_00475b26();
      }
      iVar2 = *(int *)(unaff_ESI + 0x2a4);
      if (*(int *)(iVar2 + 0x100 + local_4) != 0) {
        if ((iVar2 == 0) || ((uint)((*(int *)(unaff_ESI + 0x2a8) - iVar2) / 0x13c) <= uVar4)) {
          FUN_00475b26();
        }
        iVar1 = *(int *)(unaff_ESI + 0x2a4);
        iVar2 = FUN_004291a0(uVar4);
        *(int *)(iVar1 + local_4 + 0x114) = iVar2;
      }
      local_4 = local_4 + 0x13c;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar3);
  }
  return iVar2;
}

