// Address: 0x0044c400
// Name: FUN_0044c400
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044c400(int *param_1)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  int *piVar12;
  short sVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  ushort uVar19;
  byte bVar20;
  uint uVar21;
  float10 fVar22;
  undefined2 local_3c;
  byte local_3a;
  byte local_38;
  undefined2 uStack_37;
  int local_30;
  undefined1 local_2c;
  short local_24;
  
  piVar12 = param_1;
  uVar21 = param_1[0x1c];
  bVar2 = *(byte *)((int)param_1 + 0x126);
  uVar14 = uVar21 & 0x100;
  if ((uVar14 == 0) || ((bVar2 & 2) != 0)) {
    if (-1 < (char)uVar21) goto LAB_0044c45d;
    if (uVar14 == 0) {
      if ((((uVar21 & 0x4000) != 0) &&
          (sVar13 = *(short *)((int)param_1 + 0x13a), sVar13 == (short)param_1[0x4f])) &&
         (sVar13 == *(short *)((int)param_1 + 0x13e))) {
        *(short *)(param_1 + 0x50) = sVar13;
        goto LAB_0044c456;
      }
      goto LAB_0044c45d;
    }
LAB_0044c465:
    if ((uVar21 & 0x1000) != 0) {
      if ((bVar2 & 2) == 0) {
        switch(*(undefined1 *)((int)param_1 + 0x127)) {
        case 1:
          sVar13 = (short)param_1[0x50] * 0xff;
          *(short *)(param_1 + 0x50) = sVar13;
          *(short *)((int)param_1 + 0x13e) = sVar13;
          *(short *)(param_1 + 0x4f) = sVar13;
          *(short *)((int)param_1 + 0x13a) = sVar13;
          if ((uVar21 & 0x2000000) == 0) {
            sVar13 = (short)param_1[0x65] * 0xff;
LAB_0044c4db:
            *(short *)(param_1 + 0x65) = sVar13;
            *(short *)((int)param_1 + 0x192) = sVar13;
            *(short *)(param_1 + 100) = sVar13;
            *(short *)((int)param_1 + 0x18e) = sVar13;
          }
          break;
        case 2:
          sVar13 = (short)param_1[0x50] * 0x55;
          *(short *)(param_1 + 0x50) = sVar13;
          *(short *)((int)param_1 + 0x13e) = sVar13;
          *(short *)(param_1 + 0x4f) = sVar13;
          *(short *)((int)param_1 + 0x13a) = sVar13;
          if ((uVar21 & 0x2000000) == 0) {
            sVar13 = (short)param_1[0x65] * 0x55;
            goto LAB_0044c4db;
          }
          break;
        case 4:
          sVar13 = (short)param_1[0x50] * 0x11;
          *(short *)(param_1 + 0x50) = sVar13;
          *(short *)((int)param_1 + 0x13e) = sVar13;
          *(short *)(param_1 + 0x4f) = sVar13;
          *(short *)((int)param_1 + 0x13a) = sVar13;
          if ((uVar21 & 0x2000000) == 0) {
            sVar13 = (short)param_1[0x65] * 0x11;
            goto LAB_0044c4db;
          }
          break;
        case 8:
        case 0x10:
          uVar8 = (undefined2)param_1[0x50];
          *(undefined2 *)((int)param_1 + 0x13e) = uVar8;
          *(undefined2 *)(param_1 + 0x4f) = uVar8;
          *(undefined2 *)((int)param_1 + 0x13a) = uVar8;
        }
      }
      else if (bVar2 == 3) {
        pbVar15 = (byte *)(param_1[0x45] + (uint)*(byte *)(param_1 + 0x4e) * 3);
        *(ushort *)((int)param_1 + 0x13a) = (ushort)*pbVar15;
        *(ushort *)(param_1 + 0x4f) = (ushort)pbVar15[1];
        *(ushort *)((int)param_1 + 0x13e) = (ushort)pbVar15[2];
        if (((uVar21 & 0x80000) != 0) && ((uVar21 & 0x2000000) == 0)) {
          uVar7 = *(ushort *)((int)param_1 + 0x11a);
          iVar18 = 0;
          if (uVar7 != 0) {
            do {
              pcVar17 = (char *)(param_1[0x62] + iVar18);
              iVar18 = iVar18 + 1;
              *pcVar17 = -1 - *pcVar17;
            } while (iVar18 < (int)(uint)uVar7);
          }
        }
      }
    }
  }
  else {
LAB_0044c456:
    param_1[0x1a] = param_1[0x1a] | 0x800;
LAB_0044c45d:
    if (uVar14 != 0) goto LAB_0044c465;
  }
  *(int *)((int)param_1 + 0x142) = param_1[0x4e];
  *(int *)((int)param_1 + 0x146) = param_1[0x4f];
  *(short *)((int)param_1 + 0x14a) = (short)param_1[0x50];
  if (((bVar2 == 3) && (*(short *)((int)param_1 + 0x11a) != 0)) &&
     (ABS((float)param_1[0x58] * (float)param_1[0x57] - (float)_DAT_0049c9a0) < (float)_DAT_0049ebb8
     )) {
    bVar9 = false;
    iVar18 = 0;
    if (*(short *)((int)param_1 + 0x11a) != 0) {
      do {
        if ((*(char *)(param_1[0x62] + iVar18) != '\0') && (*(char *)(param_1[0x62] + iVar18) != -1)
           ) {
          bVar9 = true;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)(uint)*(ushort *)((int)param_1 + 0x11a));
      if (bVar9) goto LAB_0044c699;
    }
    param_1[0x1c] = param_1[0x1c] & 0xffffdfff;
  }
LAB_0044c699:
  if (((param_1[0x1c] & 0x602000U) == 0) || ((float)param_1[0x57] == 0.0)) {
    if (((char)param_1[0x1c] < '\0') && (bVar2 == 3)) {
      uVar7 = *(ushort *)((int)param_1 + 0x11a);
      bVar20 = *(byte *)(param_1 + 0x4f);
      bVar4 = *(byte *)((int)param_1 + 0x13a);
      iVar18 = 0;
      bVar5 = *(byte *)((int)param_1 + 0x13e);
      if (uVar7 != 0) {
        pbVar15 = (byte *)(param_1[0x45] + 2);
        do {
          cVar3 = *(char *)(param_1[0x62] + iVar18);
          if (cVar3 == '\0') {
            *(ushort *)(pbVar15 + -2) = CONCAT11(bVar20,bVar4);
            *pbVar15 = bVar5;
          }
          else if (cVar3 != -1) {
            bVar6 = *(byte *)(param_1[0x62] + iVar18);
            uVar19 = (0xff - (ushort)bVar6) * (ushort)bVar4 + (ushort)pbVar15[-2] * (ushort)bVar6 +
                     0x80;
            pbVar15[-2] = (byte)((uint)(uVar19 >> 8) + (uint)uVar19 >> 8);
            uVar19 = (0xff - (ushort)*(byte *)(iVar18 + param_1[0x62])) * (ushort)bVar20 +
                     (ushort)pbVar15[-1] * (ushort)*(byte *)(iVar18 + param_1[0x62]) + 0x80;
            pbVar15[-1] = (byte)((uint)(uVar19 >> 8) + (uint)uVar19 >> 8);
            uVar19 = (0xff - (ushort)*(byte *)(iVar18 + param_1[0x62])) * (ushort)bVar5 +
                     (ushort)*pbVar15 * (ushort)*(byte *)(iVar18 + param_1[0x62]) + 0x80;
            *pbVar15 = (byte)((uint)(uVar19 >> 8) + (uint)uVar19 >> 8);
          }
          iVar18 = iVar18 + 1;
          pbVar15 = pbVar15 + 3;
        } while (iVar18 < (int)(uint)uVar7);
      }
    }
    goto LAB_0044d03f;
  }
  FUN_0044bc20(param_1);
  if ((*(byte *)(param_1 + 0x1c) & 0x80) == 0) {
    if (bVar2 == 3) {
      uVar21 = (uint)*(ushort *)(param_1 + 0x46);
      if (uVar21 != 0) {
        pbVar15 = (byte *)(param_1[0x45] + 2);
        do {
          pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + param_1[0x59]);
          pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + param_1[0x59]);
          *pbVar15 = *(byte *)((uint)*pbVar15 + param_1[0x59]);
          pbVar15 = pbVar15 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    goto LAB_0044d03f;
  }
  if (bVar2 != 3) {
    iVar18 = (1 << (*(byte *)((int)param_1 + 0x127) & 0x1f)) + -1;
    dVar11 = (double)iVar18;
    if (iVar18 < 0) {
      dVar11 = dVar11 + _DAT_0049c9d0;
    }
    fVar22 = (float10)FUN_0047ad20();
    local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
    *(short *)((int)param_1 + 0x14a) = local_24;
    fVar22 = (float10)FUN_0047ad20();
    sVar13 = *(short *)((int)param_1 + 0x13a);
    local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
    *(short *)(param_1 + 0x50) = local_24;
    if (((sVar13 == (short)param_1[0x4f]) && (sVar13 == *(short *)((int)param_1 + 0x13e))) &&
       (sVar13 == local_24)) {
      uVar8 = *(undefined2 *)((int)param_1 + 0x14a);
      *(undefined2 *)(param_1 + 0x52) = uVar8;
      *(undefined2 *)((int)param_1 + 0x146) = uVar8;
      *(undefined2 *)(param_1 + 0x51) = uVar8;
      *(short *)((int)param_1 + 0x13e) = local_24;
      *(short *)(param_1 + 0x4f) = local_24;
      *(short *)((int)param_1 + 0x13a) = local_24;
    }
    else {
      fVar22 = (float10)FUN_0047ad20();
      local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
      *(short *)(param_1 + 0x51) = local_24;
      fVar22 = (float10)FUN_0047ad20();
      local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
      *(short *)((int)param_1 + 0x146) = local_24;
      fVar22 = (float10)FUN_0047ad20();
      local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
      *(short *)(param_1 + 0x52) = local_24;
      fVar22 = (float10)FUN_0047ad20();
      local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
      *(short *)((int)param_1 + 0x13a) = local_24;
      fVar22 = (float10)FUN_0047ad20();
      local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
      *(short *)(param_1 + 0x4f) = local_24;
      fVar22 = (float10)FUN_0047ad20();
      local_24 = (short)(int)ROUND(fVar22 * (float10)dVar11 + (float10)_DAT_004b4728);
      *(short *)((int)param_1 + 0x13e) = local_24;
    }
    goto LAB_0044d03f;
  }
  uVar7 = *(ushort *)(param_1 + 0x46);
  cVar3 = (char)param_1[0x4c];
  if (cVar3 == '\x02') {
    iVar18 = param_1[0x59];
    local_3c = CONCAT11(*(undefined1 *)((uint)*(ushort *)(param_1 + 0x4f) + iVar18),
                        *(undefined1 *)(iVar18 + (uint)*(ushort *)((int)param_1 + 0x13a)));
    local_3a = *(byte *)((uint)*(ushort *)((int)param_1 + 0x13e) + iVar18);
    iVar18 = param_1[0x5b];
    bVar20 = *(byte *)(iVar18 + (uint)*(ushort *)((int)param_1 + 0x13a));
    uStack_37 = CONCAT11(*(undefined1 *)(iVar18 + (uint)*(ushort *)((int)param_1 + 0x13e)),
                         *(undefined1 *)(iVar18 + (uint)*(ushort *)(param_1 + 0x4f)));
  }
  else {
    if (cVar3 == '\x01') {
LAB_0044c7a5:
      fVar10 = 1.0;
    }
    else if (cVar3 == '\x02') {
      fVar10 = 1.0 / ((float)param_1[0x58] * (float)param_1[0x57]);
    }
    else {
      if (cVar3 != '\x03') goto LAB_0044c7a5;
      fVar10 = 1.0 / ((float)param_1[0x58] * (float)param_1[0x4d]);
    }
    if ((float)_DAT_0049ebb8 <= ABS(fVar10 - 1.0)) {
      fVar22 = (float10)FUN_0047ad20();
      local_38 = (byte)(int)ROUND(fVar22 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
      bVar20 = local_38;
      fVar22 = (float10)FUN_0047ad20();
      local_38 = (byte)(int)ROUND(fVar22 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
      local_3c = CONCAT11(local_38,bVar20);
      fVar22 = (float10)FUN_0047ad20();
      local_38 = (byte)(int)ROUND(fVar22 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
      local_3a = local_38;
    }
    else {
      local_3c = CONCAT11((char)param_1[0x4f],*(undefined1 *)((int)param_1 + 0x13a));
      local_3a = *(byte *)((int)param_1 + 0x13e);
    }
    fVar22 = (float10)FUN_0047ad20();
    local_38 = (byte)(int)ROUND(fVar22 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
    bVar20 = local_38;
    fVar22 = (float10)FUN_0047ad20();
    local_38 = (byte)(int)ROUND(fVar22 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
    fVar22 = (float10)FUN_0047ad20();
    local_2c = (undefined1)(int)ROUND(fVar22 * (float10)_DAT_0049c998 + (float10)_DAT_004b4728);
    _local_38 = CONCAT12(local_2c,CONCAT11(local_38,local_38));
  }
  iVar18 = 0;
  if (uVar7 != 0) {
    pbVar15 = (byte *)(param_1[0x45] + 2);
    do {
      if (iVar18 < (int)(uint)*(ushort *)((int)param_1 + 0x11a)) {
        cVar3 = *(char *)(param_1[0x62] + iVar18);
        if (cVar3 == -1) goto LAB_0044cb06;
        if (cVar3 == '\0') {
          *(undefined2 *)(pbVar15 + -2) = local_3c;
          *pbVar15 = local_3a;
        }
        else {
          bVar4 = *(byte *)(param_1[0x62] + iVar18);
          uVar19 = (ushort)*(byte *)((uint)pbVar15[-2] + param_1[0x5b]) * (ushort)bVar4 +
                   (0xff - (ushort)bVar4) * (ushort)bVar20 + 0x80;
          pbVar15[-2] = *(byte *)(((int)((uint)(uVar19 >> 8) + (uint)uVar19) >> 8 & 0xffU) +
                                 param_1[0x5a]);
          uVar19 = (ushort)*(byte *)((uint)pbVar15[-1] + param_1[0x5b]) *
                   (ushort)*(byte *)(param_1[0x62] + iVar18) +
                   (0xff - (ushort)*(byte *)(param_1[0x62] + iVar18)) * (uStack_37 & 0xff) + 0x80;
          pbVar15[-1] = *(byte *)(((int)((uint)(uVar19 >> 8) + (uint)uVar19) >> 8 & 0xffU) +
                                 param_1[0x5a]);
          uVar19 = (ushort)*(byte *)((uint)*pbVar15 + param_1[0x5b]) *
                   (ushort)*(byte *)(param_1[0x62] + iVar18) +
                   (0xff - (ushort)*(byte *)(param_1[0x62] + iVar18)) * (uStack_37 >> 8) + 0x80;
          *pbVar15 = *(byte *)(((int)((uint)(uVar19 >> 8) + (uint)uVar19) >> 8 & 0xffU) +
                              param_1[0x5a]);
        }
      }
      else {
LAB_0044cb06:
        pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + param_1[0x59]);
        pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + param_1[0x59]);
        *pbVar15 = *(byte *)((uint)*pbVar15 + param_1[0x59]);
      }
      iVar18 = iVar18 + 1;
      pbVar15 = pbVar15 + 3;
    } while (iVar18 < (int)(uint)uVar7);
  }
LAB_0044d03f:
  if (((*(byte *)(param_1 + 0x1c) & 8) != 0) && (bVar2 == 3)) {
    pbVar15 = (byte *)((int)param_1 + 0x17e);
    puVar1 = (ushort *)(param_1 + 0x46);
    iVar18 = 8 - (uint)*(byte *)(param_1 + 0x5f);
    param_1 = (int *)(8 - (uint)*(byte *)((int)param_1 + 0x17d));
    local_30 = 8 - (uint)*pbVar15;
    if ((iVar18 < 0) || (8 < iVar18)) {
      iVar18 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((local_30 < 0) || (8 < local_30)) {
      local_30 = 0;
    }
    if (*puVar1 != 0) {
      iVar16 = 0;
      uVar21 = (uint)*puVar1;
      do {
        *(byte *)(piVar12[0x45] + iVar16) =
             *(byte *)(piVar12[0x45] + iVar16) >> ((byte)iVar18 & 0x1f);
        pbVar15 = (byte *)(iVar16 + 1 + piVar12[0x45]);
        *pbVar15 = *pbVar15 >> ((byte)param_1 & 0x1f);
        pbVar15 = (byte *)(iVar16 + 2 + piVar12[0x45]);
        *pbVar15 = *pbVar15 >> ((byte)local_30 & 0x1f);
        iVar16 = iVar16 + 3;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  return;
}

