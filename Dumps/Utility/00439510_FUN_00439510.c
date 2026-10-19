// Address: 0x00439510
// Name: FUN_00439510
// Category: Utility


uint FUN_00439510(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *unaff_ESI;
  int iVar10;
  uint *puVar11;
  int *piStack_10;
  int iStack_8;
  
  puVar3 = (undefined4 *)unaff_ESI[6];
  pbVar8 = (byte *)*puVar3;
  iVar10 = puVar3[1];
  if (*(char *)(unaff_ESI[0x65] + 0xd) == '\0') {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x3e;
    (**(code **)*unaff_ESI)();
  }
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00439553;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  bVar1 = *pbVar8;
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar8 + 1;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00439553;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  bVar2 = *pbVar8;
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar8 + 1;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00439553;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  uVar5 = (uint)*pbVar8;
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x67;
  *(uint *)(*unaff_ESI + 0x18) = uVar5;
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar8 + 1;
  (**(code **)(*unaff_ESI + 4))();
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar5 * 2 + 6) || (uVar5 == 0)) || (4 < uVar5)) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xb;
    (**(code **)*unaff_ESI)();
  }
  unaff_ESI[0x49] = uVar5;
  iStack_8 = 0;
  if (uVar5 != 0) {
    piStack_10 = unaff_ESI + 0x4a;
    do {
      if (iVar10 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00439553;
        iVar10 = puVar3[1];
        pbVar8 = (byte *)*puVar3;
      }
      uVar6 = (uint)*pbVar8;
      iVar10 = iVar10 + -1;
      pbVar8 = pbVar8 + 1;
      if (iVar10 == 0) {
        uVar4 = (*(code *)puVar3[3])();
        if ((char)uVar4 == '\0') goto LAB_00439553;
        iVar10 = puVar3[1];
        pbVar8 = (byte *)*puVar3;
      }
      bVar1 = *pbVar8;
      iVar10 = iVar10 + -1;
      iVar7 = 0;
      pbVar8 = pbVar8 + 1;
      puVar11 = (uint *)unaff_ESI[0x31];
      if (0 < unaff_ESI[9]) {
        do {
          if (uVar6 == *puVar11) goto LAB_004396c0;
          iVar7 = iVar7 + 1;
          puVar11 = puVar11 + 0x15;
        } while (iVar7 < unaff_ESI[9]);
      }
      *(undefined4 *)(*unaff_ESI + 0x14) = 5;
      *(uint *)(*unaff_ESI + 0x18) = uVar6;
      (**(code **)*unaff_ESI)();
LAB_004396c0:
      *piStack_10 = (int)puVar11;
      puVar11[5] = (int)(uint)bVar1 >> 4;
      puVar11[6] = bVar1 & 0xf;
      iVar7 = *unaff_ESI;
      *(uint *)(iVar7 + 0x18) = uVar6;
      *(uint *)(iVar7 + 0x1c) = puVar11[5];
      *(uint *)(iVar7 + 0x20) = puVar11[6];
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x68;
      (**(code **)(*unaff_ESI + 4))();
      piStack_10 = piStack_10 + 1;
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < (int)uVar5);
  }
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00439553;
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  iVar10 = iVar10 + -1;
  pbVar9 = pbVar8 + 1;
  unaff_ESI[0x5b] = (uint)*pbVar8;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') goto LAB_00439553;
    iVar10 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar10 = iVar10 + -1;
  pbVar8 = pbVar9 + 1;
  unaff_ESI[0x5c] = (uint)*pbVar9;
  if (iVar10 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') {
LAB_00439553:
      return uVar4 & 0xffffff00;
    }
    iVar10 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  bVar1 = *pbVar8;
  unaff_ESI[0x5e] = bVar1 & 0xf;
  iVar7 = *unaff_ESI;
  unaff_ESI[0x5d] = (int)(uint)bVar1 >> 4;
  *(int *)(iVar7 + 0x18) = unaff_ESI[0x5b];
  *(int *)(iVar7 + 0x1c) = unaff_ESI[0x5c];
  *(int *)(iVar7 + 0x20) = unaff_ESI[0x5d];
  *(int *)(iVar7 + 0x24) = unaff_ESI[0x5e];
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x69;
  (**(code **)(*unaff_ESI + 4))();
  iVar7 = unaff_ESI[0x65];
  *(undefined4 *)(iVar7 + 0x10) = 0;
  unaff_ESI[0x1f] = unaff_ESI[0x1f] + 1;
  puVar3[1] = iVar10 + -1;
  *puVar3 = pbVar8 + 1;
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}

