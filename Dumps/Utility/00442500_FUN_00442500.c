// Address: 0x00442500
// Name: FUN_00442500
// Category: Utility


void __cdecl FUN_00442500(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  void *this;
  int iVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined1 *local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x1a8);
  iVar4 = *(int *)(iVar3 + 0x18);
  iVar5 = *(int *)(param_1 + 0x120);
  piVar6 = *(int **)(param_1 + 0x74);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  iVar10 = *(int *)(iVar3 + 0x28);
  if (0 < param_4) {
    local_48 = param_3;
    local_24 = param_4;
    do {
      iVar12 = 0;
      pbVar11 = *(byte **)((int)local_48 + (param_2 - (int)param_3));
      local_5c = (undefined1 *)*local_48;
      if (*(char *)(iVar3 + 0x24) == '\0') {
        psVar14 = *(short **)(iVar3 + 0x20);
        local_38 = 1;
        param_4 = 3;
        *(undefined1 *)(iVar3 + 0x24) = 1;
      }
      else {
        pbVar11 = pbVar11 + iVar2 * 3 + -3;
        local_5c = local_5c + iVar2 + -1;
        psVar14 = (short *)(*(int *)(iVar3 + 0x20) + (iVar2 * 3 + 3) * 2);
        local_38 = -1;
        param_4 = -3;
        *(undefined1 *)(iVar3 + 0x24) = 0;
      }
      iVar17 = 0;
      iVar15 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_4c = 0;
      local_4c._0_2_ = 0;
      local_50 = 0;
      local_50._0_2_ = 0;
      local_54 = 0;
      local_54._0_2_ = 0;
      for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
        uVar18 = (uint)*(byte *)(*(int *)(iVar10 + (psVar14[param_4] + 8 + iVar17 >> 4) * 4) +
                                 (uint)*pbVar11 + iVar5);
        uVar20 = (uint)*(byte *)(*(int *)(iVar10 + (psVar14[param_4 + 1] + 8 + iVar12 >> 4) * 4) +
                                 (uint)pbVar11[1] + iVar5);
        uVar16 = (uint)*(byte *)(*(int *)(iVar10 + (psVar14[param_4 + 2] + 8 + iVar15 >> 4) * 4) +
                                 (uint)pbVar11[2] + iVar5);
        this = (void *)((int)uVar20 >> 2);
        iVar13 = (int)uVar16 >> 3;
        iVar15 = (int)this * 0x20 + iVar13;
        iVar17 = (int)uVar18 >> 3;
        iVar12 = *(int *)(iVar4 + iVar17 * 4);
        if (*(short *)(iVar12 + iVar15 * 2) == 0) {
          FUN_004422f0(this,param_1,iVar17,iVar13);
        }
        iVar12 = *(ushort *)(iVar12 + iVar15 * 2) - 1;
        *local_5c = (char)iVar12;
        iVar19 = uVar18 - *(byte *)(iVar12 + iVar7);
        iVar21 = uVar20 - *(byte *)(iVar12 + iVar8);
        iVar13 = uVar16 - *(byte *)(iVar12 + iVar9);
        *psVar14 = (short)local_54 + (short)iVar19 * 3;
        local_54 = local_44 + iVar19 * 5;
        iVar17 = iVar19 * 7;
        psVar14[1] = (short)local_50 + (short)iVar21 * 3;
        local_50 = local_40 + iVar21 * 5;
        iVar12 = iVar21 * 7;
        psVar14[2] = (short)local_4c + (short)iVar13 * 3;
        local_4c = local_3c + iVar13 * 5;
        local_5c = local_5c + local_38;
        iVar15 = iVar13 * 7;
        pbVar11 = pbVar11 + param_4;
        psVar14 = psVar14 + param_4;
        local_3c = iVar13;
        local_40 = iVar21;
        local_44 = iVar19;
      }
      local_48 = local_48 + 1;
      *psVar14 = (short)local_54;
      psVar14[1] = (short)local_50;
      local_24 = local_24 + -1;
      psVar14[2] = (short)local_4c;
    } while (local_24 != 0);
  }
  return;
}

