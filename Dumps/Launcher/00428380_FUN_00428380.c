// Address: 0x00428380
// Name: FUN_00428380
// Category: Launcher


void __cdecl FUN_00428380(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  byte *local_3c;
  uint local_30;
  
  puVar3 = (undefined4 *)param_1[7];
  uVar15 = puVar3[0xe];
  pbVar16 = (byte *)(*param_1 + -1);
  pbVar2 = pbVar16 + param_1[1] + -5;
  iVar4 = param_1[4];
  iVar13 = iVar4 - param_2;
  puVar20 = (undefined1 *)(param_1[3] + -1);
  iVar19 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar26 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar24 = puVar3[0xf];
  puVar21 = puVar20;
  local_3c = pbVar16;
LAB_00428420:
  if (uVar24 < 0xf) {
    pbVar17 = pbVar16 + 1;
    pbVar16 = pbVar16 + 2;
    uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar24 & 0x1f)) +
             ((uint)*pbVar16 << ((byte)uVar24 + 8 & 0x1f));
    uVar24 = uVar24 + 0x10;
    local_3c = pbVar16;
  }
  uVar14 = *(uint *)(iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar15) * 4);
  uVar15 = uVar15 >> ((byte)(uVar14 >> 8) & 0x1f);
  uVar24 = uVar24 - (uVar14 >> 8 & 0xff);
  while ((uVar14 & 0xff) != 0) {
    if ((uVar14 & 0x10) != 0) {
      param_2 = uVar14 >> 0x10;
      uVar14 = uVar14 & 0xf;
      if (uVar14 != 0) {
        if (uVar24 < uVar14) {
          pbVar17 = pbVar16 + 1;
          pbVar16 = pbVar16 + 1;
          uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar24 & 0x1f));
          uVar24 = uVar24 + 8;
          local_3c = pbVar16;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar14) - 1U & uVar15);
        uVar15 = uVar15 >> (sbyte)uVar14;
        uVar24 = uVar24 - uVar14;
      }
      if (uVar24 < 0xf) {
        pbVar17 = pbVar16 + 1;
        pbVar1 = pbVar16 + 2;
        pbVar16 = pbVar16 + 2;
        uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar24 & 0x1f)) +
                 ((uint)*pbVar1 << ((byte)uVar24 + 8 & 0x1f));
        uVar24 = uVar24 + 0x10;
        local_3c = pbVar16;
      }
      local_30 = *(uint *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar15) * 4);
      uVar14 = local_30 & 0xff;
      uVar15 = uVar15 >> ((byte)(local_30 >> 8) & 0x1f);
      uVar24 = uVar24 - (local_30 >> 8 & 0xff);
      if ((local_30 & 0x10) == 0) goto LAB_00428540;
      goto LAB_0042857b;
    }
    if ((uVar14 & 0x40) != 0) {
      if ((uVar14 & 0x20) != 0) {
        *puVar3 = 0xb;
        goto LAB_004287e4;
      }
      param_1[6] = (int)"invalid literal/length code";
      goto LAB_004287d6;
    }
    uVar14 = *(uint *)(iVar7 + (((1 << ((byte)uVar14 & 0x1f)) - 1U & uVar15) + (uVar14 >> 0x10)) * 4
                      );
    uVar15 = uVar15 >> ((byte)(uVar14 >> 8) & 0x1f);
    uVar24 = uVar24 - (uVar14 >> 8 & 0xff);
  }
  puVar21[1] = (char)(uVar14 >> 0x10);
  puVar22 = puVar21 + 1;
  goto LAB_00428715;
  while( true ) {
    local_30 = *(uint *)(iVar8 + (((1 << ((byte)uVar14 & 0x1f)) - 1U & uVar15) + (local_30 >> 0x10))
                                 * 4);
    uVar14 = local_30 & 0xff;
    uVar15 = uVar15 >> ((byte)(local_30 >> 8) & 0x1f);
    uVar24 = uVar24 - (local_30 >> 8 & 0xff);
    if ((local_30 & 0x10) != 0) break;
LAB_00428540:
    if ((uVar14 & 0x40) != 0) {
      param_1[6] = (int)"invalid distance code";
LAB_004287d6:
      *puVar3 = 0x1b;
      goto LAB_004287e4;
    }
  }
LAB_0042857b:
  uVar14 = uVar14 & 0xf;
  pbVar17 = pbVar16;
  uVar25 = uVar24;
  if (uVar24 < uVar14) {
    pbVar17 = pbVar16 + 1;
    uVar25 = uVar24 + 8;
    uVar15 = uVar15 + ((uint)pbVar16[1] << ((byte)uVar24 & 0x1f));
    local_3c = pbVar17;
    if (uVar25 < uVar14) {
      pbVar17 = pbVar16 + 2;
      uVar15 = uVar15 + ((uint)pbVar16[2] << ((byte)uVar25 & 0x1f));
      uVar25 = uVar24 + 0x10;
      local_3c = pbVar17;
    }
  }
  uVar24 = uVar25 - uVar14;
  uVar25 = (local_30 >> 0x10) + ((1 << (sbyte)uVar14) - 1U & uVar15);
  uVar15 = uVar15 >> (sbyte)uVar14;
  if (uVar25 <= (uint)((int)puVar21 - (int)(puVar20 + iVar13))) {
    iVar11 = (int)puVar21 - uVar25;
    do {
      puVar23 = puVar21;
      iVar12 = iVar11;
      puVar23[1] = *(undefined1 *)(iVar12 + 1);
      puVar23[2] = *(undefined1 *)(iVar12 + 2);
      puVar21 = puVar23 + 3;
      *puVar21 = *(undefined1 *)(iVar12 + 3);
      param_2 = param_2 - 3;
      iVar11 = iVar12 + 3;
    } while (2 < param_2);
    pbVar16 = pbVar17;
    puVar22 = puVar21;
    if (param_2 != 0) {
      puVar23[4] = *(undefined1 *)(iVar12 + 4);
      puVar22 = puVar23 + 4;
      if (1 < param_2) {
        puVar23[5] = *(undefined1 *)(iVar12 + 5);
        puVar22 = puVar23 + 5;
      }
    }
    goto LAB_00428715;
  }
  uVar14 = uVar25 - ((int)puVar21 - (int)(puVar20 + iVar13));
  pbVar16 = local_3c;
  if (uVar5 < uVar14) {
    param_1[6] = (int)"invalid distance too far back";
    *puVar3 = 0x1b;
LAB_004287e4:
    iVar19 = (int)pbVar16 - (uVar24 >> 3);
    iVar26 = uVar24 + (uVar24 >> 3) * -8;
    *param_1 = iVar19 + 1;
    param_1[3] = (int)(puVar21 + 1);
    param_1[4] = (int)(puVar20 + iVar4 + -0x101 + (0x101 - (int)puVar21));
    param_1[1] = (int)(pbVar2 + (5 - iVar19));
    puVar3[0xf] = iVar26;
    puVar3[0xe] = uVar15 & (1 << ((byte)iVar26 & 0x1f)) - 1U;
    return;
  }
  iVar11 = iVar26 + -1;
  if (uVar6 == 0) {
    iVar12 = iVar11 + (iVar19 - uVar14);
    uVar18 = uVar14;
    if (uVar14 < param_2) {
      do {
        puVar23 = (undefined1 *)(iVar12 + 1);
        iVar12 = iVar12 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 - 1;
        *puVar21 = *puVar23;
      } while (uVar18 != 0);
LAB_004286a6:
      param_2 = param_2 - uVar14;
      iVar12 = (int)puVar21 - uVar25;
    }
  }
  else if (uVar6 < uVar14) {
    uVar18 = uVar14 - uVar6;
    iVar12 = iVar11 + (uVar6 - uVar14) + iVar19;
    if (uVar18 < param_2) {
      param_2 = param_2 - uVar18;
      do {
        puVar23 = (undefined1 *)(iVar12 + 1);
        iVar12 = iVar12 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 - 1;
        *puVar21 = *puVar23;
      } while (uVar18 != 0);
      iVar12 = iVar11;
      if (uVar6 < param_2) {
        param_2 = param_2 - uVar6;
        uVar14 = uVar6;
        do {
          puVar23 = (undefined1 *)(iVar11 + 1);
          iVar11 = iVar11 + 1;
          puVar21 = puVar21 + 1;
          uVar14 = uVar14 - 1;
          *puVar21 = *puVar23;
        } while (uVar14 != 0);
        iVar12 = (int)puVar21 - uVar25;
      }
    }
  }
  else {
    iVar12 = iVar11 + (uVar6 - uVar14);
    uVar18 = uVar14;
    if (uVar14 < param_2) {
      do {
        puVar23 = (undefined1 *)(iVar12 + 1);
        iVar12 = iVar12 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 - 1;
        *puVar21 = *puVar23;
      } while (uVar18 != 0);
      goto LAB_004286a6;
    }
  }
  if (2 < param_2) {
    iVar11 = (param_2 - 3) / 3 + 1;
    do {
      param_2 = param_2 - 3;
      puVar21[1] = *(undefined1 *)(iVar12 + 1);
      puVar21[2] = *(undefined1 *)(iVar12 + 2);
      puVar23 = (undefined1 *)(iVar12 + 3);
      iVar12 = iVar12 + 3;
      puVar21 = puVar21 + 3;
      iVar11 = iVar11 + -1;
      *puVar21 = *puVar23;
    } while (iVar11 != 0);
  }
  puVar22 = puVar21;
  if (param_2 != 0) {
    puVar22 = puVar21 + 1;
    *puVar22 = *(undefined1 *)(iVar12 + 1);
    if (1 < param_2) {
      puVar22 = puVar21 + 2;
      *puVar22 = *(undefined1 *)(iVar12 + 2);
    }
  }
LAB_00428715:
  puVar21 = puVar22;
  if ((pbVar2 <= pbVar16) || (puVar20 + iVar4 + -0x101 <= puVar22)) goto LAB_004287e4;
  goto LAB_00428420;
}

