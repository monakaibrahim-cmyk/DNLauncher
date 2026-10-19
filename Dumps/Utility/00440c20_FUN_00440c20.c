// Address: 0x00440c20
// Name: FUN_00440c20
// Category: Utility


void __cdecl FUN_00440c20(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  param_5 = param_5 + -1;
  iVar5 = *(int *)(param_1 + 0x1a4);
  iVar6 = *(int *)(param_1 + 0x120);
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(iVar5 + 8);
  iVar9 = *(int *)(iVar5 + 0xc);
  iVar10 = *(int *)(iVar5 + 0x10);
  iVar5 = *(int *)(iVar5 + 0x14);
  if (-1 < param_5) {
    iVar16 = param_3 * 4;
    do {
      piVar1 = (int *)(iVar16 + *param_2);
      pbVar11 = *(byte **)(iVar16 + param_2[1]);
      piVar2 = (int *)(iVar16 + param_2[2]);
      puVar12 = (undefined1 *)*param_4;
      iVar16 = iVar16 + 4;
      param_4 = param_4 + 1;
      if (iVar7 != 0) {
        iVar14 = *piVar1 - (int)pbVar11;
        iVar13 = *piVar2 - (int)pbVar11;
        param_1 = iVar7;
        do {
          bVar3 = pbVar11[iVar13];
          uVar15 = (uint)pbVar11[iVar14];
          bVar4 = *pbVar11;
          *puVar12 = *(undefined1 *)(*(int *)(iVar8 + (uint)bVar3 * 4) + uVar15 + iVar6);
          puVar12[1] = *(undefined1 *)
                        ((*(int *)(iVar5 + (uint)bVar4 * 4) + *(int *)(iVar10 + (uint)bVar3 * 4) >>
                         0x10) + uVar15 + iVar6);
          puVar12[2] = *(undefined1 *)(*(int *)(iVar9 + (uint)bVar4 * 4) + uVar15 + iVar6);
          puVar12 = puVar12 + 3;
          pbVar11 = pbVar11 + 1;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

