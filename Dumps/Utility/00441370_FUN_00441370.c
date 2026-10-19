// Address: 0x00441370
// Name: FUN_00441370
// Category: Utility


void __cdecl FUN_00441370(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  iVar4 = *(int *)(param_1 + 0x120);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar17 = *(byte **)(*param_2 + param_3 * 4);
  pbVar15 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar12 = *(byte **)(param_2[2] + param_3 * 4);
  puVar11 = (undefined1 *)*param_4;
  for (uVar13 = *(uint *)(param_1 + 0x5c) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
    bVar1 = *pbVar12;
    bVar2 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    pbVar12 = pbVar12 + 1;
    iVar8 = *(int *)(iVar5 + (uint)bVar1 * 4);
    iVar16 = *(int *)(iVar3 + (uint)bVar2 * 4);
    iVar9 = *(int *)(iVar7 + (uint)bVar1 * 4);
    uVar14 = (uint)*pbVar17;
    iVar10 = *(int *)(iVar6 + (uint)bVar2 * 4);
    *puVar11 = *(undefined1 *)(iVar8 + uVar14 + iVar4);
    iVar16 = iVar16 + iVar9 >> 0x10;
    puVar11[1] = *(undefined1 *)(iVar16 + uVar14 + iVar4);
    puVar11[2] = *(undefined1 *)(iVar4 + uVar14 + iVar10);
    uVar14 = (uint)pbVar17[1];
    puVar11[3] = *(undefined1 *)(iVar8 + uVar14 + iVar4);
    puVar11[4] = *(undefined1 *)(iVar16 + uVar14 + iVar4);
    puVar11[5] = *(undefined1 *)(iVar4 + uVar14 + iVar10);
    pbVar17 = pbVar17 + 2;
    puVar11 = puVar11 + 6;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    iVar3 = *(int *)(iVar3 + (uint)*pbVar15 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar12 * 4);
    uVar13 = (uint)*pbVar17;
    iVar6 = *(int *)(iVar6 + (uint)*pbVar15 * 4);
    *puVar11 = *(undefined1 *)(*(int *)(iVar5 + (uint)*pbVar12 * 4) + uVar13 + iVar4);
    puVar11[1] = *(undefined1 *)(uVar13 + (iVar3 + iVar7 >> 0x10) + iVar4);
    puVar11[2] = *(undefined1 *)(uVar13 + iVar6 + iVar4);
  }
  return;
}

