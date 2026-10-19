// Address: 0x0044a030
// Name: FUN_0044a030
// Category: Utility


void __cdecl
FUN_0044a030(int *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,byte param_12)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int local_c;
  int local_4;
  
  iVar3 = *param_1;
  if (param_4 == 0) {
    return;
  }
  bVar5 = *(byte *)(param_1 + 2);
  if ((bVar5 & 4) != 0) {
    if (bVar5 == 3) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
  }
  local_c = iVar3;
  switch(bVar5) {
  case 0:
    switch(*(undefined1 *)((int)param_1 + 9)) {
    case 1:
      iVar14 = 7;
      for (iVar9 = iVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
        bVar5 = (byte)iVar14;
        if ((ushort)(*param_2 >> (bVar5 & 0x1f) & 1) == *(ushort *)(param_3 + 8)) {
          bVar4 = (byte)(0x7f7f >> (7 - bVar5 & 0x1f)) & *param_2;
          *param_2 = bVar4;
          *param_2 = *(char *)(param_4 + 8) << (bVar5 & 0x1f) | bVar4;
        }
        if (iVar14 == 0) {
          iVar14 = 7;
          param_2 = param_2 + 1;
        }
        else {
          iVar14 = iVar14 + -1;
        }
      }
      break;
    case 2:
      iVar14 = 6;
      iVar9 = iVar3;
      if (param_6 == 0) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          bVar5 = (byte)iVar14;
          if ((ushort)(*param_2 >> (bVar5 & 0x1f) & 3) == *(ushort *)(param_3 + 8)) {
            bVar4 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
            *param_2 = bVar4;
            *param_2 = *(char *)(param_4 + 8) << (bVar5 & 0x1f) | bVar4;
          }
          if (iVar14 == 0) {
            iVar14 = 6;
            param_2 = param_2 + 1;
          }
          else {
            iVar14 = iVar14 + -2;
          }
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          bVar5 = (byte)iVar14;
          bVar4 = *param_2 >> (bVar5 & 0x1f) & 3;
          if ((ushort)bVar4 == *(ushort *)(param_3 + 8)) {
            bVar4 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
            *param_2 = bVar4;
            bVar7 = *(char *)(param_4 + 8) << (bVar5 & 0x1f);
          }
          else {
            uVar11 = (uint)bVar4;
            bVar7 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
            bVar4 = (*(byte *)((((uVar11 * 4 | uVar11) * 4 | uVar11) * 4 | uVar11) + param_6) >> 6)
                    << (bVar5 & 0x1f);
          }
          *param_2 = bVar7 | bVar4;
          if (iVar14 == 0) {
            iVar14 = 6;
            param_2 = param_2 + 1;
          }
          else {
            iVar14 = iVar14 + -2;
          }
        }
      }
      break;
    case 4:
      iVar14 = 4;
      iVar9 = iVar3;
      if (param_6 == 0) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          bVar5 = (byte)iVar14;
          if ((ushort)(*param_2 >> (bVar5 & 0x1f) & 0xf) == *(ushort *)(param_3 + 8)) {
            bVar4 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
            *param_2 = bVar4;
            *param_2 = *(char *)(param_4 + 8) << (bVar5 & 0x1f) | bVar4;
          }
          if (iVar14 == 0) {
            iVar14 = 4;
            param_2 = param_2 + 1;
          }
          else {
            iVar14 = iVar14 + -4;
          }
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          bVar5 = (byte)iVar14;
          bVar4 = *param_2 >> (bVar5 & 0x1f) & 0xf;
          if ((ushort)bVar4 == *(ushort *)(param_3 + 8)) {
            bVar4 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
            *param_2 = bVar4;
            bVar7 = *(char *)(param_4 + 8) << (bVar5 & 0x1f);
          }
          else {
            bVar7 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
            bVar4 = (*(byte *)(((uint)bVar4 << 4 | (uint)bVar4) + param_6) >> 4) << (bVar5 & 0x1f);
          }
          *param_2 = bVar7 | bVar4;
          if (iVar14 == 0) {
            iVar14 = 4;
            param_2 = param_2 + 1;
          }
          else {
            iVar14 = iVar14 + -4;
          }
        }
      }
      break;
    case 8:
      iVar9 = iVar3;
      if (param_6 == 0) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) {
            *param_2 = *(byte *)(param_4 + 8);
          }
          param_2 = param_2 + 1;
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) {
            bVar5 = *(byte *)(param_4 + 8);
          }
          else {
            bVar5 = *(byte *)((uint)*param_2 + param_6);
          }
          *param_2 = bVar5;
          param_2 = param_2 + 1;
        }
      }
      break;
    case 0x10:
      iVar9 = iVar3;
      if (param_9 == 0) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 8)) {
            *param_2 = *(byte *)(param_4 + 9);
            param_2[1] = *(byte *)(param_4 + 8);
          }
          param_2 = param_2 + 2;
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 8)) {
            *param_2 = *(byte *)(param_4 + 9);
            uVar8 = (ushort)*(byte *)(param_4 + 8);
          }
          else {
            uVar8 = *(ushort *)
                     (*(int *)(param_9 + (uint)(param_2[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*param_2 * 2);
            *param_2 = (byte)(uVar8 >> 8);
          }
          param_2[1] = (byte)uVar8;
          param_2 = param_2 + 2;
        }
      }
    }
    break;
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (param_6 == 0) {
        if (iVar3 != 0) {
          pbVar10 = param_2 + 2;
          iVar9 = iVar3;
          do {
            if ((((ushort)pbVar10[-2] == *(ushort *)(param_3 + 2)) &&
                ((ushort)pbVar10[-1] == *(ushort *)(param_3 + 4))) &&
               ((ushort)*pbVar10 == *(ushort *)(param_3 + 6))) {
              pbVar10[-2] = *(byte *)(param_4 + 2);
              pbVar10[-1] = *(byte *)(param_4 + 4);
              *pbVar10 = *(byte *)(param_4 + 6);
            }
            pbVar10 = pbVar10 + 3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else if (iVar3 != 0) {
        pbVar10 = param_2 + 2;
        iVar9 = iVar3;
        do {
          if ((((ushort)pbVar10[-2] == *(ushort *)(param_3 + 2)) &&
              ((ushort)pbVar10[-1] == *(ushort *)(param_3 + 4))) &&
             ((ushort)*pbVar10 == *(ushort *)(param_3 + 6))) {
            pbVar10[-2] = *(byte *)(param_4 + 2);
            pbVar10[-1] = *(byte *)(param_4 + 4);
            bVar5 = *(byte *)(param_4 + 6);
          }
          else {
            pbVar10[-2] = *(byte *)((uint)pbVar10[-2] + param_6);
            pbVar10[-1] = *(byte *)((uint)pbVar10[-1] + param_6);
            bVar5 = *(byte *)((uint)*pbVar10 + param_6);
          }
          *pbVar10 = bVar5;
          pbVar10 = pbVar10 + 3;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if (param_9 == 0) {
      if (iVar3 != 0) {
        pbVar10 = param_2 + 2;
        iVar9 = iVar3;
        do {
          if ((((ushort)((ushort)pbVar10[-2] * 0x100 + (ushort)pbVar10[-1]) ==
                *(short *)(param_3 + 2)) &&
              ((ushort)((ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1]) == *(short *)(param_3 + 4)))
             && ((ushort)((ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3]) ==
                 *(short *)(param_3 + 6))) {
            pbVar10[-2] = *(byte *)(param_4 + 3);
            pbVar10[-1] = *(byte *)(param_4 + 2);
            *pbVar10 = *(byte *)(param_4 + 5);
            pbVar10[1] = *(byte *)(param_4 + 4);
            pbVar10[2] = *(byte *)(param_4 + 7);
            pbVar10[3] = *(byte *)(param_4 + 6);
          }
          pbVar10 = pbVar10 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if (iVar3 != 0) {
      pbVar10 = param_2 + 2;
      do {
        if ((((ushort)((ushort)pbVar10[-2] * 0x100 + (ushort)pbVar10[-1]) == *(short *)(param_3 + 2)
             ) && ((ushort)((ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1]) ==
                   *(short *)(param_3 + 4))) &&
           ((ushort)((ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3]) == *(short *)(param_3 + 6))) {
          pbVar10[-2] = *(byte *)(param_4 + 3);
          pbVar10[-1] = *(byte *)(param_4 + 2);
          *pbVar10 = *(byte *)(param_4 + 5);
          pbVar10[1] = *(byte *)(param_4 + 4);
          pbVar10[2] = *(byte *)(param_4 + 7);
          pbVar10[3] = *(byte *)(param_4 + 6);
        }
        else {
          uVar2 = *(undefined2 *)
                   (*(int *)(param_9 + (uint)(pbVar10[-1] >> (param_12 & 0x1f)) * 4) +
                   (uint)pbVar10[-2] * 2);
          pbVar10[-1] = (byte)uVar2;
          pbVar10[-2] = (byte)((ushort)uVar2 >> 8);
          uVar2 = *(undefined2 *)
                   (*(int *)(param_9 + (uint)(pbVar10[1] >> (param_12 & 0x1f)) * 4) +
                   (uint)*pbVar10 * 2);
          pbVar10[1] = (byte)uVar2;
          *pbVar10 = (byte)((ushort)uVar2 >> 8);
          uVar2 = *(undefined2 *)
                   (*(int *)(param_9 + (uint)(pbVar10[3] >> (param_12 & 0x1f)) * 4) +
                   (uint)pbVar10[2] * 2);
          pbVar10[2] = (byte)((ushort)uVar2 >> 8);
          pbVar10[3] = (byte)uVar2;
        }
        pbVar10 = pbVar10 + 6;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    break;
  case 4:
    if (*(char *)((int)param_1 + 9) == '\b') {
      iVar9 = iVar3;
      pbVar10 = param_2;
      if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          bVar5 = param_2[1];
          if (bVar5 == 0xff) {
            bVar5 = *param_2;
          }
          else if (bVar5 == 0) {
            bVar5 = *(byte *)(param_4 + 8);
          }
          else {
            uVar8 = (0xff - (ushort)bVar5) * *(short *)(param_5 + 8) +
                    (ushort)*param_2 * (ushort)bVar5 + 0x80;
            bVar5 = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
          }
          *pbVar10 = bVar5;
          param_2 = param_2 + 2;
          pbVar10 = pbVar10 + 1;
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          bVar5 = param_2[1];
          if (bVar5 == 0xff) {
            *pbVar10 = *(byte *)((uint)*param_2 + param_6);
          }
          else if (bVar5 == 0) {
            *pbVar10 = *(byte *)(param_4 + 8);
          }
          else {
            uVar8 = (0xff - (ushort)bVar5) * *(short *)(param_5 + 8) +
                    (ushort)*(byte *)((uint)*param_2 + param_8) * (ushort)bVar5 + 0x80;
            *pbVar10 = *(byte *)(((int)((uint)(uVar8 >> 8) + (uint)uVar8) >> 8 & 0xffU) + param_7);
          }
          param_2 = param_2 + 2;
          pbVar10 = pbVar10 + 1;
        }
      }
    }
    else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
      if (iVar3 != 0) {
        pbVar10 = param_2 + 3;
        do {
          uVar8 = (ushort)pbVar10[-1] * 0x100 + (ushort)*pbVar10;
          if (uVar8 == 0xffff) {
            *(undefined2 *)param_2 = *(undefined2 *)(pbVar10 + -3);
          }
          else {
            if (uVar8 == 0) {
              *param_2 = *(byte *)(param_4 + 9);
              bVar5 = *(byte *)(param_4 + 8);
            }
            else {
              uVar11 = (uint)(ushort)((ushort)pbVar10[-3] * 0x100 + (ushort)pbVar10[-2]) *
                       (uint)uVar8 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar8);
              iVar9 = (uVar11 >> 0x10) + uVar11;
              bVar5 = (byte)((uint)iVar9 >> 0x10);
              *param_2 = (byte)((uint)iVar9 >> 0x18);
            }
            param_2[1] = bVar5;
          }
          pbVar10 = pbVar10 + 4;
          param_2 = param_2 + 2;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else if (iVar3 != 0) {
      pbVar10 = param_2 + 1;
      do {
        uVar8 = (ushort)pbVar10[1] * 0x100 + (ushort)pbVar10[2];
        if (uVar8 == 0xffff) {
          uVar8 = *(ushort *)
                   (*(int *)(param_9 + (uint)(*pbVar10 >> (param_12 & 0x1f)) * 4) +
                   (uint)pbVar10[-1] * 2);
LAB_0044a8de:
          *param_2 = (byte)(uVar8 >> 8);
        }
        else {
          if (uVar8 != 0) {
            uVar11 = (uint)*(ushort *)
                            (*(int *)(param_11 + (uint)(*pbVar10 >> (param_12 & 0x1f)) * 4) +
                            (uint)pbVar10[-1] * 2) * (uint)uVar8 + 0x8000 +
                     (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar8);
            uVar11 = (uVar11 >> 0x10) + uVar11;
            uVar8 = *(ushort *)
                     (*(int *)(param_10 + ((uVar11 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar11 >> 0x18) * 2);
            goto LAB_0044a8de;
          }
          *param_2 = *(byte *)(param_4 + 9);
          uVar8 = (ushort)*(byte *)(param_4 + 8);
        }
        param_2[1] = (byte)uVar8;
        pbVar10 = pbVar10 + 4;
        param_2 = param_2 + 2;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    break;
  case 6:
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
        if (iVar3 != 0) {
          pbVar10 = param_2 + 2;
          pbVar12 = param_2 + 1;
          do {
            bVar5 = pbVar12[2];
            if (bVar5 == 0xff) {
              pbVar10[-2] = pbVar12[-1];
              pbVar10[-1] = *pbVar12;
              *pbVar10 = pbVar12[1];
            }
            else {
              if (bVar5 == 0) {
                pbVar10[-2] = *(byte *)(param_4 + 2);
                pbVar10[-1] = *(byte *)(param_4 + 4);
                bVar5 = *(byte *)(param_4 + 6);
              }
              else {
                sVar6 = 0xff - (ushort)bVar5;
                uVar8 = (ushort)pbVar12[-1] * (ushort)bVar5 + *(short *)(param_4 + 2) * sVar6 + 0x80
                ;
                pbVar10[-2] = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
                uVar8 = *(short *)(param_4 + 4) * sVar6 + (ushort)*pbVar12 * (ushort)bVar5 + 0x80;
                pbVar10[-1] = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
                uVar8 = (ushort)pbVar12[1] * (ushort)bVar5 + *(short *)(param_4 + 6) * sVar6 + 0x80;
                bVar5 = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
              }
              *pbVar10 = bVar5;
            }
            pbVar12 = pbVar12 + 4;
            pbVar10 = pbVar10 + 3;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
      }
      else if (iVar3 != 0) {
        pbVar10 = param_2 + 2;
        pbVar12 = param_2 + 1;
        do {
          bVar5 = pbVar12[2];
          if (bVar5 == 0xff) {
            pbVar10[-2] = *(byte *)((uint)pbVar12[-1] + param_6);
            pbVar10[-1] = *(byte *)((uint)*pbVar12 + param_6);
            bVar5 = *(byte *)((uint)pbVar12[1] + param_6);
          }
          else if (bVar5 == 0) {
            pbVar10[-2] = *(byte *)(param_4 + 2);
            pbVar10[-1] = *(byte *)(param_4 + 4);
            bVar5 = *(byte *)(param_4 + 6);
          }
          else {
            sVar6 = 0xff - (ushort)bVar5;
            uVar8 = (ushort)*(byte *)((uint)pbVar12[-1] + param_8) * (ushort)bVar5 +
                    *(short *)(param_5 + 2) * sVar6 + 0x80;
            pbVar10[-2] = *(byte *)(((int)((uint)(uVar8 >> 8) + (uint)uVar8) >> 8 & 0xffU) + param_7
                                   );
            uVar8 = (ushort)*(byte *)((uint)*pbVar12 + param_8) * (ushort)bVar5 +
                    *(short *)(param_5 + 4) * sVar6 + 0x80;
            pbVar10[-1] = *(byte *)(((int)((uint)(uVar8 >> 8) + (uint)uVar8) >> 8 & 0xffU) + param_7
                                   );
            uVar8 = (ushort)*(byte *)((uint)pbVar12[1] + param_8) * (ushort)bVar5 +
                    *(short *)(param_5 + 6) * sVar6 + 0x80;
            bVar5 = *(byte *)(((int)((uint)(uVar8 >> 8) + (uint)uVar8) >> 8 & 0xffU) + param_7);
          }
          *pbVar10 = bVar5;
          pbVar12 = pbVar12 + 4;
          pbVar10 = pbVar10 + 3;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else {
      local_4 = iVar3;
      if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        if (iVar3 != 0) {
          pbVar10 = param_2 + 2;
          pbVar12 = param_2 + 7;
          do {
            uVar8 = (ushort)pbVar12[-1] * 0x100 + (ushort)*pbVar12;
            if (uVar8 == 0xffff) {
              *(undefined4 *)(pbVar10 + -2) = *(undefined4 *)(pbVar12 + -7);
              *(undefined2 *)(pbVar10 + 2) = *(undefined2 *)(pbVar12 + -3);
            }
            else {
              if (uVar8 == 0) {
                pbVar10[-2] = *(byte *)(param_4 + 3);
                pbVar10[-1] = *(byte *)(param_4 + 2);
                *pbVar10 = *(byte *)(param_4 + 5);
                pbVar10[1] = *(byte *)(param_4 + 4);
                pbVar10[2] = *(byte *)(param_4 + 7);
                bVar5 = *(byte *)(param_4 + 6);
              }
              else {
                bVar5 = pbVar12[-5];
                bVar4 = pbVar12[-4];
                bVar7 = pbVar12[-2];
                bVar1 = pbVar12[-3];
                uVar13 = (uint)uVar8;
                iVar14 = 0xffff - uVar13;
                uVar11 = (ushort)((ushort)pbVar12[-7] * 0x100 + (ushort)pbVar12[-6]) * uVar13 +
                         0x8000 + (uint)*(ushort *)(param_4 + 2) * iVar14;
                iVar9 = (uVar11 >> 0x10) + uVar11;
                pbVar10[-2] = (byte)((uint)iVar9 >> 0x18);
                pbVar10[-1] = (byte)((uint)iVar9 >> 0x10);
                uVar11 = (uint)*(ushort *)(param_4 + 4) * iVar14 + 0x8000 +
                         (ushort)((ushort)bVar5 * 0x100 + (ushort)bVar4) * uVar13;
                iVar9 = (uVar11 >> 0x10) + uVar11;
                *pbVar10 = (byte)((uint)iVar9 >> 0x18);
                pbVar10[1] = (byte)((uint)iVar9 >> 0x10);
                uVar11 = (uint)*(ushort *)(param_4 + 6) * iVar14 + 0x8000 +
                         (ushort)((ushort)bVar1 * 0x100 + (ushort)bVar7) * uVar13;
                iVar9 = (uVar11 >> 0x10) + uVar11;
                bVar5 = (byte)((uint)iVar9 >> 0x10);
                pbVar10[2] = (byte)((uint)iVar9 >> 0x18);
              }
              pbVar10[3] = bVar5;
            }
            pbVar12 = pbVar12 + 8;
            pbVar10 = pbVar10 + 6;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
        }
      }
      else if (iVar3 != 0) {
        pbVar10 = param_2 + 2;
        pbVar12 = param_2 + 1;
        do {
          uVar8 = (ushort)pbVar12[5] * 0x100 + (ushort)pbVar12[6];
          if (uVar8 == 0xffff) {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(*pbVar12 >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar12[-1] * 2);
            pbVar10[-2] = (byte)((ushort)uVar2 >> 8);
            pbVar10[-1] = (byte)uVar2;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(pbVar12[2] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar12[1] * 2);
            *pbVar10 = (byte)((ushort)uVar2 >> 8);
            pbVar10[1] = (byte)uVar2;
            uVar8 = *(ushort *)
                     (*(int *)(param_9 + (uint)(pbVar12[4] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar12[3] * 2);
LAB_0044ae35:
            pbVar10[2] = (byte)(uVar8 >> 8);
          }
          else {
            if (uVar8 != 0) {
              uVar13 = (uint)uVar8;
              iVar9 = 0xffff - uVar13;
              uVar11 = *(ushort *)
                        (*(int *)(param_11 + (uint)(*pbVar12 >> (param_12 & 0x1f)) * 4) +
                        (uint)pbVar12[-1] * 2) * uVar13 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 2) * iVar9;
              uVar11 = (uVar11 >> 0x10) + uVar11;
              uVar2 = *(undefined2 *)
                       (*(int *)(param_10 + ((uVar11 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                       (uVar11 >> 0x18) * 2);
              pbVar10[-2] = (byte)((ushort)uVar2 >> 8);
              pbVar10[-1] = (byte)uVar2;
              uVar11 = *(ushort *)
                        (*(int *)(param_11 + (uint)(pbVar12[2] >> (param_12 & 0x1f)) * 4) +
                        (uint)pbVar12[1] * 2) * uVar13 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 4) * iVar9;
              uVar11 = (uVar11 >> 0x10) + uVar11;
              uVar2 = *(undefined2 *)
                       (*(int *)(param_10 + ((uVar11 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                       (uVar11 >> 0x18) * 2);
              *pbVar10 = (byte)((ushort)uVar2 >> 8);
              pbVar10[1] = (byte)uVar2;
              uVar11 = *(ushort *)
                        (*(int *)(param_11 + (uint)(pbVar12[4] >> (param_12 & 0x1f)) * 4) +
                        (uint)pbVar12[3] * 2) * uVar13 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 6) * iVar9;
              uVar11 = (uVar11 >> 0x10) + uVar11;
              uVar8 = *(ushort *)
                       (*(int *)(param_10 + ((uVar11 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                       (uVar11 >> 0x18) * 2);
              goto LAB_0044ae35;
            }
            pbVar10[-2] = *(byte *)(param_4 + 3);
            pbVar10[-1] = *(byte *)(param_4 + 2);
            *pbVar10 = *(byte *)(param_4 + 5);
            pbVar10[1] = *(byte *)(param_4 + 4);
            pbVar10[2] = *(byte *)(param_4 + 7);
            uVar8 = (ushort)*(byte *)(param_4 + 6);
          }
          pbVar10[3] = (byte)uVar8;
          pbVar12 = pbVar12 + 8;
          pbVar10 = pbVar10 + 6;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
    }
    break;
  default:
    goto switchD_0044a078_default;
  }
switchD_0044a078_default:
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + -1;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
    bVar5 = *(char *)((int)param_1 + 9) * *(char *)((int)param_1 + 10);
    *(byte *)((int)param_1 + 0xb) = bVar5;
    if (7 < bVar5) {
      param_1[1] = (uint)(bVar5 >> 3) * iVar3;
      return;
    }
    param_1[1] = (uint)bVar5 * iVar3 + 7 >> 3;
  }
  return;
}

