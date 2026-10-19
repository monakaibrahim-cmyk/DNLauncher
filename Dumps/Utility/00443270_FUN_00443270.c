// Address: 0x00443270
// Name: FUN_00443270
// Category: Utility


void __cdecl FUN_00443270(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  piVar3 = *(int **)(iVar2 + 0x18);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *piVar3;
  iVar6 = piVar3[1];
  iVar7 = piVar3[2];
  if (0 < param_4) {
    iVar12 = param_2 - (int)param_3;
    local_24 = param_4;
    do {
      iVar8 = *(int *)(iVar2 + 0x30);
      pcVar16 = (char *)*param_3;
      iVar9 = *(int *)(iVar2 + 0x3c);
      iVar10 = *(int *)(iVar2 + 0x38);
      pbVar13 = *(byte **)(iVar12 + (int)param_3);
      iVar14 = iVar8 * 0x40;
      iVar11 = *(int *)(iVar2 + 0x34);
      uVar15 = 0;
      for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pcVar16 = *(char *)(*(int *)(iVar11 + iVar14 + uVar15 * 4) + (uint)*pbVar13 + iVar5) +
                   *(char *)(iVar6 + *(int *)(iVar10 + iVar14 + uVar15 * 4) + (uint)pbVar13[1]) +
                   *(char *)(iVar7 + *(int *)(iVar9 + iVar14 + uVar15 * 4) + (uint)pbVar13[2]);
        pcVar16 = pcVar16 + 1;
        pbVar13 = pbVar13 + 3;
        uVar15 = uVar15 + 1 & 0xf;
      }
      param_3 = param_3 + 1;
      local_24 = local_24 + -1;
      *(uint *)(iVar2 + 0x30) = iVar8 + 1U & 0xf;
    } while (local_24 != 0);
  }
  return;
}

