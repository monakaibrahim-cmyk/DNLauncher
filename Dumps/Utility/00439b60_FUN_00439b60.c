// Address: 0x00439b60
// Name: FUN_00439b60
// Category: Utility


uint FUN_00439b60(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  int *unaff_EDI;
  int *piStack_c;
  
  puVar3 = (undefined4 *)unaff_EDI[6];
  iVar13 = puVar3[1];
  puVar11 = (undefined1 *)*puVar3;
  if (iVar13 == 0) {
    uVar6 = (*(code *)puVar3[3])();
    if ((char)uVar6 == '\0') goto LAB_00439b83;
    puVar11 = (undefined1 *)*puVar3;
    iVar13 = puVar3[1];
  }
  uVar1 = *puVar11;
  iVar13 = iVar13 + -1;
  puVar11 = puVar11 + 1;
  if (iVar13 == 0) {
    uVar6 = (*(code *)puVar3[3])();
    if ((char)uVar6 == '\0') {
LAB_00439b83:
      return uVar6 & 0xffffff00;
    }
    puVar11 = (undefined1 *)*puVar3;
    iVar13 = puVar3[1];
  }
  iVar13 = iVar13 + -1;
  pbVar12 = puVar11 + 1;
  iVar8 = CONCAT11(uVar1,*puVar11) - 2;
  do {
    iVar5 = iVar8;
    if (iVar5 < 1) {
      uVar9 = 0;
      if (iVar5 != 0) {
        *(undefined4 *)(*unaff_EDI + 0x14) = 0xb;
        uVar9 = (**(code **)*unaff_EDI)();
      }
      *puVar3 = pbVar12;
      puVar3[1] = iVar13;
      return CONCAT31((int3)((uint)uVar9 >> 8),1);
    }
    if (iVar13 == 0) {
      uVar6 = (*(code *)puVar3[3])();
      if ((char)uVar6 == '\0') goto LAB_00439b83;
      pbVar12 = (byte *)*puVar3;
      iVar13 = puVar3[1];
    }
    bVar2 = *pbVar12;
    *(undefined4 *)(*unaff_EDI + 0x14) = 0x51;
    iVar7 = (int)(uint)bVar2 >> 4;
    uVar6 = bVar2 & 0xf;
    *(uint *)(*unaff_EDI + 0x18) = uVar6;
    *(int *)(*unaff_EDI + 0x1c) = iVar7;
    iVar13 = iVar13 + -1;
    pbVar12 = pbVar12 + 1;
    (**(code **)(*unaff_EDI + 4))();
    if (3 < uVar6) {
      *(undefined4 *)(*unaff_EDI + 0x14) = 0x1f;
      *(uint *)(*unaff_EDI + 0x18) = uVar6;
      (**(code **)*unaff_EDI)();
    }
    if (unaff_EDI[uVar6 + 0x24] == 0) {
      iVar8 = FUN_0043bbc0((int)unaff_EDI);
      unaff_EDI[uVar6 + 0x24] = iVar8;
    }
    iVar8 = unaff_EDI[uVar6 + 0x24];
    piStack_c = (int *)&DAT_0049e188;
    do {
      if (iVar7 == 0) {
        if (iVar13 == 0) {
          uVar6 = (*(code *)puVar3[3])();
          if ((char)uVar6 == '\0') goto LAB_00439b83;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        uVar10 = (ushort)*pbVar12;
      }
      else {
        if (iVar13 == 0) {
          uVar6 = (*(code *)puVar3[3])();
          if ((char)uVar6 == '\0') goto LAB_00439b83;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        bVar2 = *pbVar12;
        iVar13 = iVar13 + -1;
        pbVar12 = pbVar12 + 1;
        if (iVar13 == 0) {
          uVar6 = (*(code *)puVar3[3])();
          if ((char)uVar6 == '\0') goto LAB_00439b83;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        uVar10 = (ushort)bVar2 * 0x100 + (ushort)*pbVar12;
      }
      iVar4 = *piStack_c;
      piStack_c = piStack_c + 1;
      iVar13 = iVar13 + -1;
      pbVar12 = pbVar12 + 1;
      *(ushort *)(iVar8 + iVar4 * 2) = uVar10;
    } while ((int)piStack_c < 0x49e288);
    if (1 < *(int *)(*unaff_EDI + 0x68)) {
      puVar14 = (ushort *)(iVar8 + 4);
      piStack_c = (int *)0x8;
      do {
        iVar8 = *unaff_EDI;
        *(uint *)(iVar8 + 0x18) = (uint)puVar14[-2];
        *(uint *)(iVar8 + 0x1c) = (uint)puVar14[-1];
        *(uint *)(iVar8 + 0x20) = (uint)*puVar14;
        *(uint *)(iVar8 + 0x24) = (uint)puVar14[1];
        *(uint *)(iVar8 + 0x28) = (uint)puVar14[2];
        *(uint *)(iVar8 + 0x2c) = (uint)puVar14[3];
        *(uint *)(iVar8 + 0x30) = (uint)puVar14[4];
        *(uint *)(iVar8 + 0x34) = (uint)puVar14[5];
        *(undefined4 *)(*unaff_EDI + 0x14) = 0x5d;
        (**(code **)(*unaff_EDI + 4))();
        puVar14 = puVar14 + 8;
        piStack_c = (int *)((int)piStack_c + -1);
      } while (piStack_c != (int *)0x0);
    }
    iVar8 = iVar5 + -0x41;
    if (iVar7 != 0) {
      iVar8 = iVar5 + -0x81;
    }
  } while( true );
}

