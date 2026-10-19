// Address: 0x00449930
// Name: FUN_00449930
// Category: Utility


undefined4 __cdecl FUN_00449930(int param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_24;
  
  iVar1 = *param_2;
  local_24 = 0;
  uVar9 = 0;
  if ((*(byte *)(param_2 + 2) & 2) != 0) {
    uVar11 = (uint)*(ushort *)(param_1 + 0x22e);
    uVar13 = (uint)*(ushort *)(param_1 + 0x22c);
    uVar14 = (uint)*(ushort *)(param_1 + 0x22a);
    if (*(byte *)(param_2 + 2) == 2) {
      if (*(char *)((int)param_2 + 9) == '\b') {
        iVar5 = iVar1;
        pbVar6 = param_3;
        pbVar7 = param_3;
        if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            bVar8 = *pbVar6;
            if ((bVar8 == pbVar6[1]) && (bVar8 == pbVar6[2])) {
              *pbVar7 = pbVar6[2];
            }
            else {
              local_24 = 1;
              *pbVar7 = (byte)(pbVar6[2] * uVar11 + pbVar6[1] * uVar13 + bVar8 * uVar14 >> 0xf);
            }
            pbVar6 = pbVar6 + 3;
            pbVar7 = pbVar7 + 1;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            iVar2 = *(int *)(param_1 + 0x16c);
            bVar8 = *(byte *)((uint)*pbVar6 + iVar2);
            if ((bVar8 == *(byte *)((uint)pbVar6[1] + iVar2)) &&
               (bVar8 == *(byte *)((uint)pbVar6[2] + iVar2))) {
              *pbVar7 = pbVar6[2];
            }
            else {
              local_24 = 1;
              *pbVar7 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar11 +
                                   *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + bVar8 * uVar14 >>
                                  0xf) + *(int *)(param_1 + 0x168));
            }
            pbVar6 = pbVar6 + 3;
            pbVar7 = pbVar7 + 1;
          }
        }
      }
      else {
        iVar5 = iVar1;
        pbVar6 = param_3;
        pbVar7 = param_3;
        if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            if ((uVar10 != CONCAT11(pbVar6[2],pbVar6[3])) ||
               (uVar10 != CONCAT11(pbVar6[4],pbVar6[5]))) {
              local_24 = 1;
            }
            uVar12 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar11 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar13
                     + uVar10 * uVar14 >> 0xf & 0xffff;
            *pbVar7 = (byte)(uVar12 >> 8);
            pbVar7[1] = (byte)uVar12;
            pbVar6 = pbVar6 + 6;
            pbVar7 = pbVar7 + 2;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            uVar3 = CONCAT11(pbVar6[2],pbVar6[3]);
            uVar4 = CONCAT11(pbVar6[4],pbVar6[5]);
            if ((uVar10 != uVar3) || (uVar10 != uVar4)) {
              bVar8 = (byte)*(undefined2 *)(param_1 + 0x158);
              iVar2 = *(int *)(param_1 + 0x178);
              uVar12 = *(ushort *)
                        (*(int *)(iVar2 + ((uVar10 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)*pbVar6 * 2) * uVar14 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar3 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)pbVar6[2] * 2) * uVar13 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar4 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)pbVar6[4] * 2) * uVar11 >> 0xf;
              local_24 = 1;
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x174) +
                                 ((uVar12 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        ((uVar12 & 0xffff) >> 8) * 2);
            }
            *pbVar7 = (byte)(uVar10 >> 8);
            pbVar7[1] = (byte)uVar10;
            pbVar6 = pbVar6 + 6;
            pbVar7 = pbVar7 + 2;
          }
        }
      }
    }
    if ((char)param_2[2] == '\x06') {
      if (*(char *)((int)param_2 + 9) == '\b') {
        iVar5 = iVar1;
        pbVar6 = param_3;
        if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            bVar8 = *pbVar6;
            if ((bVar8 != pbVar6[1]) || (bVar8 != pbVar6[2])) {
              local_24 = 1;
            }
            *param_3 = (byte)(pbVar6[2] * uVar11 + pbVar6[1] * uVar13 + bVar8 * uVar14 >> 0xf);
            param_3[1] = pbVar6[3];
            param_3 = param_3 + 2;
            pbVar6 = pbVar6 + 4;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            iVar2 = *(int *)(param_1 + 0x16c);
            bVar8 = *(byte *)((uint)*pbVar6 + iVar2);
            if ((bVar8 != *(byte *)((uint)pbVar6[1] + iVar2)) ||
               (bVar8 != *(byte *)((uint)pbVar6[2] + iVar2))) {
              local_24 = 1;
            }
            *param_3 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar11 +
                                  *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + bVar8 * uVar14 >>
                                 0xf) + *(int *)(param_1 + 0x168));
            param_3[1] = pbVar6[3];
            param_3 = param_3 + 2;
            pbVar6 = pbVar6 + 4;
          }
        }
      }
      else {
        iVar5 = iVar1;
        pbVar6 = param_3;
        if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            if ((uVar10 != CONCAT11(pbVar6[2],pbVar6[3])) ||
               (uVar10 != CONCAT11(pbVar6[4],pbVar6[5]))) {
              local_24 = 1;
            }
            uVar12 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar11 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar13
                     + uVar10 * uVar14 >> 0xf & 0xffff;
            *param_3 = (byte)(uVar12 >> 8);
            param_3[1] = (byte)uVar12;
            param_3[2] = pbVar6[6];
            param_3[3] = pbVar6[7];
            param_3 = param_3 + 4;
            pbVar6 = pbVar6 + 8;
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            uVar3 = CONCAT11(pbVar6[2],pbVar6[3]);
            uVar4 = CONCAT11(pbVar6[4],pbVar6[5]);
            if ((uVar10 != uVar3) || (uVar10 != uVar4)) {
              iVar2 = *(int *)(param_1 + 0x178);
              bVar8 = (byte)*(undefined2 *)(param_1 + 0x158);
              uVar12 = *(ushort *)
                        (*(int *)(iVar2 + ((uVar10 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)*pbVar6 * 2) * uVar14 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar3 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)pbVar6[2] * 2) * uVar13 +
                       *(ushort *)
                        (*(int *)(iVar2 + ((uVar4 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        (uint)pbVar6[4] * 2) * uVar11 >> 0xf;
              local_24 = 1;
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x174) +
                                 ((uVar12 & 0xff) >> (bVar8 & 0x1f)) * 4) +
                        ((uVar12 & 0xffff) >> 8) * 2);
            }
            *param_3 = (byte)(uVar10 >> 8);
            param_3[1] = (byte)uVar10;
            param_3[2] = pbVar6[6];
            param_3[3] = pbVar6[7];
            param_3 = param_3 + 4;
            pbVar6 = pbVar6 + 8;
          }
        }
      }
    }
    *(char *)((int)param_2 + 10) = *(char *)((int)param_2 + 10) + -2;
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
    bVar8 = *(char *)((int)param_2 + 9) * *(char *)((int)param_2 + 10);
    *(byte *)((int)param_2 + 0xb) = bVar8;
    if (7 < bVar8) {
      param_2[1] = (uint)(bVar8 >> 3) * iVar1;
      return local_24;
    }
    param_2[1] = (uint)bVar8 * iVar1 + 7 >> 3;
    uVar9 = local_24;
  }
  return uVar9;
}

