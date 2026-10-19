// Address: 0x00440e60
// Name: FUN_00440e60
// Category: Utility


void __cdecl FUN_00440e60(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  
  param_5 = param_5 + -1;
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x1a4);
  iVar8 = *(int *)(param_1 + 0x120);
  iVar9 = *(int *)(iVar7 + 8);
  iVar10 = *(int *)(iVar7 + 0xc);
  iVar11 = *(int *)(iVar7 + 0x10);
  iVar7 = *(int *)(iVar7 + 0x14);
  if (-1 < param_5) {
    iVar15 = param_3 * 4;
    do {
      piVar1 = (int *)(iVar15 + *param_2);
      piVar2 = (int *)(iVar15 + param_2[2]);
      pbVar12 = *(byte **)(iVar15 + param_2[1]);
      piVar3 = (int *)(iVar15 + param_2[3]);
      puVar13 = (undefined1 *)*param_4;
      param_4 = param_4 + 1;
      iVar15 = iVar15 + 4;
      if (iVar6 != 0) {
        iVar16 = *piVar1 - (int)pbVar12;
        iVar14 = *piVar2 - (int)pbVar12;
        iVar18 = *piVar3 - (int)pbVar12;
        param_1 = iVar6;
        do {
          bVar4 = pbVar12[iVar14];
          uVar17 = (uint)pbVar12[iVar16];
          bVar5 = *pbVar12;
          *puVar13 = *(undefined1 *)(((iVar8 - *(int *)(iVar9 + (uint)bVar4 * 4)) - uVar17) + 0xff);
          puVar13[1] = *(undefined1 *)
                        (((iVar8 - (*(int *)(iVar7 + (uint)bVar5 * 4) +
                                    *(int *)(iVar11 + (uint)bVar4 * 4) >> 0x10)) - uVar17) + 0xff);
          puVar13[2] = *(undefined1 *)
                        (((iVar8 - *(int *)(iVar10 + (uint)bVar5 * 4)) - uVar17) + 0xff);
          puVar13[3] = pbVar12[iVar18];
          pbVar12 = pbVar12 + 1;
          param_1 = param_1 + -1;
          puVar13 = puVar13 + 4;
        } while (param_1 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

