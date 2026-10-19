// Address: 0x004433a0
// Name: FUN_004433a0
// Category: Utility


void __cdecl FUN_004433a0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  size_t sVar1;
  byte bVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  short *psVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int local_2c;
  int local_1c;
  int local_18;
  
  sVar3 = *(size_t *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x120);
  iVar5 = *(int *)(param_1 + 100);
  iVar6 = *(int *)(param_1 + 0x1a8);
  if (0 < param_4) {
    iVar12 = param_2 - (int)param_3;
    local_18 = param_4;
    do {
      FUN_0043bca0((void *)*param_3,sVar3);
      local_1c = 0;
      if (0 < iVar5) {
        piVar13 = (int *)(iVar6 + 0x44);
        do {
          pcVar18 = (char *)*param_3;
          psVar14 = (short *)*piVar13;
          pbVar15 = (byte *)(*(int *)(iVar12 + (int)param_3) + local_1c);
          if (*(char *)(iVar6 + 0x54) == '\0') {
            iVar17 = 1;
            iVar16 = iVar5;
          }
          else {
            pcVar18 = pcVar18 + (sVar3 - 1);
            pbVar15 = pbVar15 + (sVar3 - 1) * iVar5;
            iVar17 = -1;
            psVar14 = psVar14 + sVar3 + 1;
            iVar16 = -iVar5;
          }
          iVar7 = *(int *)(*(int *)(iVar6 + 0x18) + local_1c * 4);
          iVar8 = *(int *)(*(int *)(iVar6 + 0x10) + local_1c * 4);
          iVar9 = 0;
          param_4 = 0;
          param_4._0_2_ = 0;
          local_2c = 0;
          for (sVar1 = sVar3; sVar1 != 0; sVar1 = sVar1 - 1) {
            bVar2 = *pbVar15;
            pbVar15 = pbVar15 + iVar16;
            uVar10 = (uint)*(byte *)((uint)bVar2 + (psVar14[iVar17] + 8 + iVar9 >> 4) + iVar4);
            bVar2 = *(byte *)(uVar10 + iVar7);
            *pcVar18 = *pcVar18 + bVar2;
            iVar11 = uVar10 - *(byte *)((uint)bVar2 + iVar8);
            *psVar14 = (short)param_4 + (short)iVar11 * 3;
            param_4 = local_2c + iVar11 * 5;
            iVar9 = iVar11 * 7;
            pcVar18 = pcVar18 + iVar17;
            psVar14 = psVar14 + iVar17;
            local_2c = iVar11;
          }
          piVar13 = piVar13 + 1;
          local_1c = local_1c + 1;
          *psVar14 = (short)param_4;
        } while (local_1c < iVar5);
      }
      param_3 = param_3 + 1;
      local_18 = local_18 + -1;
      *(bool *)(iVar6 + 0x54) = *(char *)(iVar6 + 0x54) == '\0';
    } while (local_18 != 0);
  }
  return;
}

