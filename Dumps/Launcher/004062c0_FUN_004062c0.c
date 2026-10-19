// Address: 0x004062c0
// Name: FUN_004062c0
// Category: Launcher


int FUN_004062c0(void)

{
  ushort *puVar1;
  int in_EAX;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint unaff_EBX;
  uint uVar7;
  int iVar8;
  
  if (unaff_EBX == 0) {
    return 0;
  }
  uVar7 = *(uint *)(in_EAX + 0x14);
  if ((uVar7 != 0) && (unaff_EBX <= uVar7)) {
    iVar8 = uVar7 + (1 - unaff_EBX);
    puVar1 = (ushort *)(in_EAX + 4);
    puVar2 = puVar1;
    if (7 < *(uint *)(in_EAX + 0x18)) {
      puVar2 = *(ushort **)puVar1;
    }
    while (puVar3 = puVar2, iVar4 = iVar8, iVar8 != 0) {
      while (*puVar3 != 0x3a) {
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 1;
        if (iVar4 == 0) {
          return -1;
        }
      }
      if (puVar3 == (ushort *)0x0) {
        return -1;
      }
      puVar6 = &DAT_004b0384;
      puVar5 = puVar3;
      uVar7 = unaff_EBX;
      while( true ) {
        if (uVar7 == 0) goto LAB_00406357;
        if (*puVar5 != *puVar6) break;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        uVar7 = uVar7 - 1;
      }
      if ((-(uint)(*puVar5 < *puVar6) & 0xfffffffe) == 0xffffffff) {
LAB_00406357:
        if (*(uint *)(in_EAX + 0x18) < 8) {
          return (int)puVar3 - (int)puVar1 >> 1;
        }
        return (int)puVar3 - *(int *)puVar1 >> 1;
      }
      iVar8 = iVar8 + (-1 - ((int)puVar3 - (int)puVar2 >> 1));
      puVar2 = puVar3 + 1;
    }
  }
  return -1;
}

