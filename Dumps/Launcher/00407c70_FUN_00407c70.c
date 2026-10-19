// Address: 0x00407c70
// Name: FUN_00407c70
// Category: Launcher


void FUN_00407c70(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  
  uVar1 = *(uint *)(unaff_EBX + 8);
  if (uVar1 < *(uint *)(unaff_EBX + 4)) {
    FUN_00475b26();
  }
  uVar2 = *(uint *)(unaff_EBX + 4);
  if (*(uint *)(unaff_EBX + 8) < uVar2) {
    FUN_00475b26();
  }
  if (uVar2 != uVar1) {
    iVar3 = FUN_004081f0();
    FUN_00408380(*(int *)(unaff_EBX + 8));
    *(int *)(unaff_EBX + 8) = iVar3;
  }
  return;
}

