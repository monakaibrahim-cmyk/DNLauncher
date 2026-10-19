// Address: 0x0043bec0
// Name: FUN_0043bec0
// Category: Utility


uint FUN_0043bec0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_ESI;
  uint uStack_8;
  int *piStack_4;
  
  iVar2 = unaff_ESI[0x49];
  if (iVar2 != 1) {
    if ((iVar2 < 1) || (4 < iVar2)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
      *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0x49];
      *(undefined4 *)(*unaff_ESI + 0x1c) = 4;
      (**(code **)*unaff_ESI)();
    }
    iVar2 = FUN_0043bc00(unaff_ESI[7],unaff_ESI[0x44] * 8);
    unaff_ESI[0x4e] = iVar2;
    uVar3 = FUN_0043bc00(unaff_ESI[8],unaff_ESI[0x45] * 8);
    unaff_ESI[0x4f] = uVar3;
    unaff_ESI[0x50] = 0;
    uStack_8 = 0;
    if (0 < unaff_ESI[0x49]) {
      piStack_4 = unaff_ESI + 0x4a;
      do {
        iVar2 = *piStack_4;
        uVar3 = *(uint *)(iVar2 + 8);
        uVar1 = *(uint *)(iVar2 + 0xc);
        *(uint *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x24) * uVar3;
        uVar4 = *(uint *)(iVar2 + 0x1c) % uVar3;
        iVar5 = uVar1 * uVar3;
        *(uint *)(iVar2 + 0x34) = uVar3;
        *(uint *)(iVar2 + 0x38) = uVar1;
        *(int *)(iVar2 + 0x3c) = iVar5;
        if (uVar4 == 0) {
          uVar4 = uVar3;
        }
        *(uint *)(iVar2 + 0x44) = uVar4;
        uVar3 = *(uint *)(iVar2 + 0x20) % uVar1;
        if (uVar3 == 0) {
          uVar3 = uVar1;
        }
        *(uint *)(iVar2 + 0x48) = uVar3;
        if (10 < unaff_ESI[0x50] + iVar5) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0xd;
          (**(code **)*unaff_ESI)();
        }
        for (; 0 < iVar5; iVar5 = iVar5 + -1) {
          unaff_ESI[unaff_ESI[0x50] + 0x51] = uStack_8;
          unaff_ESI[0x50] = unaff_ESI[0x50] + 1;
        }
        piStack_4 = piStack_4 + 1;
        uVar3 = uStack_8 + 1;
        uStack_8 = uVar3;
      } while ((int)uVar3 < unaff_ESI[0x49]);
    }
    return uVar3;
  }
  iVar2 = unaff_ESI[0x4a];
  unaff_ESI[0x4e] = *(int *)(iVar2 + 0x1c);
  unaff_ESI[0x4f] = *(int *)(iVar2 + 0x20);
  uVar3 = *(uint *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x24);
  uVar1 = *(uint *)(iVar2 + 0x20);
  uVar4 = uVar1 % uVar3;
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 1;
  *(undefined4 *)(iVar2 + 0x3c) = 1;
  *(undefined4 *)(iVar2 + 0x44) = 1;
  if (uVar4 == 0) {
    uVar4 = uVar3;
  }
  *(uint *)(iVar2 + 0x48) = uVar4;
  unaff_ESI[0x50] = 1;
  unaff_ESI[0x51] = 0;
  return uVar1 / uVar3;
}

