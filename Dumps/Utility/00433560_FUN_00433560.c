// Address: 0x00433560
// Name: FUN_00433560
// Category: Utility


void __cdecl FUN_00433560(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 extraout_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  
  iVar2 = *param_1;
  iVar7 = ((int *)param_1[2])[3];
  iVar8 = *(int *)param_1[2];
  iVar6 = -1;
  iVar4 = 0;
  *(undefined4 *)(unaff_ESI + 0x1450) = 0;
  *(undefined4 *)(unaff_ESI + 0x1454) = 0x23d;
  if (0 < iVar7) {
    do {
      if (*(short *)(iVar2 + iVar4 * 4) == 0) {
        *(undefined2 *)(iVar2 + 2 + iVar4 * 4) = 0;
      }
      else {
        *(int *)(unaff_ESI + 0x1450) = *(int *)(unaff_ESI + 0x1450) + 1;
        *(int *)(unaff_ESI + 0xb5c + *(int *)(unaff_ESI + 0x1450) * 4) = iVar4;
        *(undefined1 *)(iVar4 + 0x1458 + unaff_ESI) = 0;
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  iVar4 = *(int *)(unaff_ESI + 0x1450);
  while (iVar4 < 2) {
    if (iVar6 < 2) {
      iVar4 = iVar6 + 1;
      iVar6 = iVar4;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(unaff_ESI + 0x1450) = *(int *)(unaff_ESI + 0x1450) + 1;
    *(int *)(unaff_ESI + 0xb5c + *(int *)(unaff_ESI + 0x1450) * 4) = iVar4;
    *(undefined2 *)(iVar2 + iVar4 * 4) = 1;
    *(undefined1 *)(unaff_ESI + 0x1458 + iVar4) = 0;
    *(int *)(unaff_ESI + 0x16a8) = *(int *)(unaff_ESI + 0x16a8) + -1;
    if (iVar8 != 0) {
      *(int *)(unaff_ESI + 0x16ac) =
           *(int *)(unaff_ESI + 0x16ac) - (uint)*(ushort *)(iVar8 + 2 + iVar4 * 4);
    }
    iVar4 = *(int *)(unaff_ESI + 0x1450);
  }
  param_1[1] = iVar6;
  for (iVar8 = *(int *)(unaff_ESI + 0x1450) / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    FUN_004331f0(iVar8);
  }
  do {
    uVar3 = *(undefined4 *)(unaff_ESI + 0xb5c + *(int *)(unaff_ESI + 0x1450) * 4);
    iVar8 = *(int *)(unaff_ESI + 0xb60);
    *(int *)(unaff_ESI + 0x1450) = *(int *)(unaff_ESI + 0x1450) + -1;
    *(undefined4 *)(unaff_ESI + 0xb60) = uVar3;
    FUN_004331f0(1);
    iVar6 = *(int *)(unaff_ESI + 0xb60);
    *(int *)(unaff_ESI + 0x1454) = *(int *)(unaff_ESI + 0x1454) + -1;
    *(int *)(unaff_ESI + 0xb5c + *(int *)(unaff_ESI + 0x1454) * 4) = iVar8;
    *(int *)(unaff_ESI + 0x1454) = *(int *)(unaff_ESI + 0x1454) + -1;
    *(int *)(unaff_ESI + 0xb5c + *(int *)(unaff_ESI + 0x1454) * 4) = iVar6;
    *(short *)(iVar2 + iVar7 * 4) = *(short *)(iVar2 + iVar6 * 4) + *(short *)(iVar2 + iVar8 * 4);
    bVar5 = *(byte *)(unaff_ESI + 0x1458 + iVar6);
    bVar1 = *(byte *)(unaff_ESI + 0x1458 + iVar8);
    if (bVar5 <= bVar1) {
      bVar5 = bVar1;
    }
    *(byte *)(unaff_ESI + 0x1458 + iVar7) = bVar5 + 1;
    *(short *)(iVar2 + 2 + iVar6 * 4) = (short)iVar7;
    *(short *)(iVar2 + 2 + iVar8 * 4) = (short)iVar7;
    *(int *)(unaff_ESI + 0xb60) = iVar7;
    iVar7 = iVar7 + 1;
    FUN_004331f0(1);
  } while (1 < *(int *)(unaff_ESI + 0x1450));
  *(int *)(unaff_ESI + 0x1454) = *(int *)(unaff_ESI + 0x1454) + -1;
  *(undefined4 *)(unaff_ESI + 0xb5c + *(int *)(unaff_ESI + 0x1454) * 4) =
       *(undefined4 *)(unaff_ESI + 0xb60);
  FUN_004332c0(param_1);
  FUN_004334e0(extraout_ECX,unaff_ESI + 0xb3c);
  return;
}

