// Address: 0x00431b90
// Name: FUN_00431b90
// Category: Utility


undefined4 FUN_00431b90(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int unaff_EDI;
  
  if ((((unaff_EDI != 0) && (iVar1 = *(int *)(unaff_EDI + 0x1c), iVar1 != 0)) &&
      (*(int *)(unaff_EDI + 0x20) != 0)) && (*(int *)(unaff_EDI + 0x24) != 0)) {
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    *(undefined4 *)(unaff_EDI + 8) = 0;
    *(undefined4 *)(unaff_EDI + 0x18) = 0;
    *(undefined4 *)(unaff_EDI + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(iVar1 + 0x18) == 2) {
      uVar2 = FUN_004265e0(0,(uint *)0x0,0);
      uVar3 = extraout_ECX;
    }
    else {
      uVar2 = FUN_00428100(0,(byte *)0x0);
      uVar3 = extraout_ECX_00;
    }
    *(uint *)(unaff_EDI + 0x30) = uVar2;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    FUN_00433120(uVar3,iVar1);
    FUN_00432510();
    return 0;
  }
  return 0xfffffffe;
}

