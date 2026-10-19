// Address: 0x0044b640
// Name: FUN_0044b640
// Category: Utility


void __cdecl FUN_0044b640(int *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  undefined1 *puVar9;
  char *pcVar10;
  ushort uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  
  iVar7 = *param_1;
  if ((char)param_1[2] == '\0') {
    if (param_3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(ushort *)(param_3 + 8);
    }
    bVar8 = *(byte *)((int)param_1 + 9);
    if (bVar8 < 8) {
      if (bVar8 == 1) {
        uVar11 = (uVar11 & 1) * 0xff;
        pbVar13 = (byte *)((iVar7 - 1U >> 3) + param_2);
        iVar12 = 7 - (iVar7 - 1U & 7);
        pcVar10 = (char *)(iVar7 + -1 + param_2);
        for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
          *pcVar10 = -((*pbVar13 >> ((byte)iVar12 & 0x1f) & 1) != 0);
          if (iVar12 == 7) {
            iVar12 = 0;
            pbVar13 = pbVar13 + -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          pcVar10 = pcVar10 + -1;
        }
      }
      else if (bVar8 == 2) {
        uVar11 = (uVar11 & 3) * 0x55;
        pbVar14 = (byte *)((iVar7 - 1U >> 2) + param_2);
        iVar12 = (3 - (iVar7 - 1U & 3)) * 2;
        pbVar13 = (byte *)(iVar7 + -1 + param_2);
        for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
          bVar8 = *pbVar14 >> ((byte)iVar12 & 0x1f) & 3;
          *pbVar13 = ((bVar8 * '\x04' | bVar8) * '\x04' | bVar8) * '\x04' | bVar8;
          if (iVar12 == 6) {
            iVar12 = 0;
            pbVar14 = pbVar14 + -1;
          }
          else {
            iVar12 = iVar12 + 2;
          }
          pbVar13 = pbVar13 + -1;
        }
      }
      else if (bVar8 == 4) {
        uVar11 = (uVar11 & 0xf) * 0x11;
        pbVar14 = (byte *)((iVar7 - 1U >> 1) + param_2);
        iVar12 = (iVar7 - 1U & 1) * -4 + 4;
        pbVar13 = (byte *)(iVar7 + -1 + param_2);
        for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
          bVar8 = *pbVar14 >> ((byte)iVar12 & 0x1f);
          *pbVar13 = bVar8 << 4 | bVar8 & 0xf;
          if (iVar12 == 4) {
            iVar12 = 0;
            pbVar14 = pbVar14 + -1;
          }
          else {
            iVar12 = 4;
          }
          pbVar13 = pbVar13 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar7;
    }
    if (param_3 != 0) {
      if (*(char *)((int)param_1 + 9) == '\b') {
        pbVar13 = (byte *)(iVar7 + -1 + param_2);
        puVar9 = (undefined1 *)(param_2 + -1 + iVar7 * 2);
        for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
          if ((ushort)*pbVar13 == (uVar11 & 0xff)) {
            *puVar9 = 0;
          }
          else {
            *puVar9 = 0xff;
          }
          puVar9[-1] = *pbVar13;
          puVar9 = puVar9 + -2;
          pbVar13 = pbVar13 + -1;
        }
      }
      else if (*(char *)((int)param_1 + 9) == '\x10') {
        pcVar10 = (char *)(param_1[1] + -1 + param_2);
        puVar9 = (undefined1 *)(param_2 + -1 + param_1[1] * 2);
        for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
          if ((pcVar10[-1] == (char)(uVar11 >> 8)) && (*pcVar10 == (char)uVar11)) {
            *puVar9 = 0;
            puVar9[-1] = 0;
          }
          else {
            *puVar9 = 0xff;
            puVar9[-1] = 0xff;
          }
          puVar9[-2] = *pcVar10;
          puVar9[-3] = pcVar10[-1];
          puVar9 = puVar9 + -4;
          pcVar10 = pcVar10 + -2;
        }
      }
      bVar8 = *(byte *)((int)param_1 + 9) * '\x02';
      *(byte *)((int)param_1 + 0xb) = bVar8;
      *(undefined1 *)(param_1 + 2) = 4;
      *(undefined1 *)((int)param_1 + 10) = 2;
      if (7 < bVar8) {
        param_1[1] = (uint)((*(byte *)((int)param_1 + 9) & 0x7f) >> 2) * iVar7;
        return;
      }
      param_1[1] = (uint)bVar8 * iVar7 + 7 >> 3;
    }
  }
  else if (((char)param_1[2] == '\x02') && (param_3 != 0)) {
    if (*(char *)((int)param_1 + 9) == '\b') {
      cVar1 = *(char *)(param_3 + 2);
      cVar2 = *(char *)(param_3 + 4);
      cVar3 = *(char *)(param_3 + 6);
      pcVar10 = (char *)(param_1[1] + -1 + param_2);
      puVar9 = (undefined1 *)(param_2 + -1 + iVar7 * 4);
      for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (((pcVar10[-2] == cVar1) && (pcVar10[-1] == cVar2)) && (*pcVar10 == cVar3)) {
          *puVar9 = 0;
        }
        else {
          *puVar9 = 0xff;
        }
        puVar9[-1] = *pcVar10;
        puVar9[-2] = pcVar10[-1];
        puVar9[-3] = pcVar10[-2];
        puVar9 = puVar9 + -4;
        pcVar10 = pcVar10 + -3;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      cVar1 = *(char *)(param_3 + 3);
      cVar2 = *(char *)(param_3 + 5);
      cVar3 = *(char *)(param_3 + 7);
      cVar4 = *(char *)(param_3 + 2);
      cVar5 = *(char *)(param_3 + 4);
      cVar6 = *(char *)(param_3 + 6);
      pcVar10 = (char *)(param_1[1] + -1 + param_2);
      puVar9 = (undefined1 *)(param_2 + -1 + iVar7 * 8);
      for (iVar15 = iVar7; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (((((pcVar10[-5] == cVar1) && (pcVar10[-4] == cVar4)) && (pcVar10[-3] == cVar2)) &&
            ((pcVar10[-2] == cVar5 && (pcVar10[-1] == cVar3)))) && (*pcVar10 == cVar6)) {
          *puVar9 = 0;
          puVar9[-1] = 0;
        }
        else {
          *puVar9 = 0xff;
          puVar9[-1] = 0xff;
        }
        puVar9[-2] = *pcVar10;
        puVar9[-3] = pcVar10[-1];
        puVar9[-4] = pcVar10[-2];
        puVar9[-5] = pcVar10[-3];
        puVar9[-6] = pcVar10[-4];
        puVar9[-7] = pcVar10[-5];
        puVar9 = puVar9 + -8;
        pcVar10 = pcVar10 + -6;
      }
    }
    bVar8 = *(byte *)((int)param_1 + 9) * '\x04';
    *(byte *)((int)param_1 + 0xb) = bVar8;
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    if (7 < bVar8) {
      param_1[1] = (uint)((*(byte *)((int)param_1 + 9) & 0x3f) >> 1) * iVar7;
      return;
    }
    param_1[1] = (uint)bVar8 * iVar7 + 7 >> 3;
    return;
  }
  return;
}

