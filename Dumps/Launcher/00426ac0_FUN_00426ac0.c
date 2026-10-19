// Address: 0x00426ac0
// Name: FUN_00426ac0
// Category: Launcher


int __cdecl FUN_00426ac0(int *param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint extraout_EDX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *_Src;
  undefined1 *puVar12;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  char local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  if ((((param_1 == (int *)0x0) || (puVar3 = (uint *)param_1[7], puVar3 == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar3 == 0xb) {
    *puVar3 = 0xc;
  }
  local_14 = (undefined1 *)param_1[3];
  uVar11 = param_1[1];
  uVar10 = puVar3[0xe];
  _Src = (uint *)*param_1;
  local_20 = param_1[4];
  uVar6 = *puVar3;
  puVar12 = (undefined1 *)puVar3[0xf];
  local_c = 0;
  local_2c = uVar11;
  local_4 = uVar11;
  local_24 = uVar10;
  local_10 = local_20;
  do {
    if (0x1c < uVar6) {
      return -2;
    }
    uVar9 = uVar11;
    switch(uVar6) {
    case 0:
      uVar6 = uVar11;
      if (puVar3[2] == 0) {
        *puVar3 = 0xc;
      }
      else {
        for (; uVar11 = local_2c, puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
          uVar9 = 0;
          if (uVar6 == 0) goto LAB_00427f1d;
          uVar11 = *_Src;
          uVar6 = uVar6 - 1;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)(byte)uVar11 << ((byte)puVar12 & 0x1f));
          local_2c = uVar6;
          local_24 = uVar10;
        }
        local_2c = uVar11;
        if (((puVar3[2] & 2) == 0) || (uVar10 != 0x8b1f)) {
          puVar3[4] = 0;
          if (puVar3[8] != 0) {
            *(undefined4 *)(puVar3[8] + 0x30) = 0xffffffff;
          }
          if (((puVar3[2] & 1) == 0) || (((uVar10 & 0xff) * 0x100 + (uVar10 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else if (((byte)uVar10 & 0xf) == 8) {
            local_24 = uVar10 >> 4;
            uVar6 = (local_24 & 0xf) + 8;
            puVar12 = puVar12 + -4;
            if (uVar6 <= puVar3[9]) {
              puVar3[5] = 1 << (sbyte)uVar6;
              uVar6 = FUN_00428100(0,(byte *)0x0);
              puVar3[6] = uVar6;
              param_1[0xc] = uVar6;
              *puVar3 = ~(uVar10 >> 0xc) & 2 | 9;
              uVar10 = 0;
              local_24 = 0;
              puVar12 = (undefined1 *)0x0;
              break;
            }
            param_1[6] = (int)"invalid window size";
            uVar10 = local_24;
          }
          else {
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00427eb9;
        }
        uVar6 = FUN_004265e0(0,(uint *)0x0,0);
        puVar3[6] = uVar6;
        local_1c = '\x1f';
        local_1b = 0x8b;
        uVar6 = FUN_004265e0(uVar6,(uint *)&local_1c,2);
        uVar10 = 0;
        puVar3[6] = uVar6;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
        *puVar3 = 1;
      }
      break;
    case 1:
      for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
        uVar9 = 0;
        if (uVar11 == 0) goto LAB_00427f1d;
        uVar6 = *_Src;
        uVar11 = uVar11 - 1;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar11;
        local_24 = uVar10;
      }
      puVar3[4] = uVar10;
      if ((char)uVar10 == '\b') {
        if ((uVar10 & 0xe000) == 0) {
          if ((uint *)puVar3[8] != (uint *)0x0) {
            *(uint *)puVar3[8] = uVar10 >> 8 & 1;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1b = (undefined1)(uVar10 >> 8);
            local_1c = (char)uVar10;
            uVar11 = FUN_004265e0(puVar3[6],(uint *)&local_1c,2);
            puVar3[6] = uVar11;
            uVar11 = local_2c;
          }
          uVar10 = 0;
          puVar12 = (undefined1 *)0x0;
          *puVar3 = 2;
          do {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            uVar6 = *_Src;
            bVar8 = (byte)puVar12;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)(byte)uVar6 << (bVar8 & 0x1f));
            local_2c = uVar11;
joined_r0x00426d5a:
          } while (puVar12 < (undefined1 *)0x20);
          if (puVar3[8] != 0) {
            *(uint *)(puVar3[8] + 4) = uVar10;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1b = (undefined1)(uVar10 >> 8);
            local_1c = (char)uVar10;
            local_1a = (undefined1)(uVar10 >> 0x10);
            local_19 = (undefined1)(uVar10 >> 0x18);
            uVar11 = FUN_004265e0(puVar3[6],(uint *)&local_1c,4);
            puVar3[6] = uVar11;
            uVar11 = local_2c;
          }
          uVar10 = 0;
          puVar12 = (undefined1 *)0x0;
          *puVar3 = 3;
          do {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            uVar6 = *_Src;
            bVar8 = (byte)puVar12;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)(byte)uVar6 << (bVar8 & 0x1f));
            local_2c = uVar11;
joined_r0x00426ddd:
          } while (puVar12 < (undefined1 *)0x10);
          if (puVar3[8] != 0) {
            *(uint *)(puVar3[8] + 8) = uVar10 & 0xff;
            *(uint *)(puVar3[8] + 0xc) = uVar10 >> 8;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1c = (char)uVar10;
            local_1b = (undefined1)(uVar10 >> 8);
            uVar11 = FUN_004265e0(puVar3[6],(uint *)&local_1c,2);
            puVar3[6] = uVar11;
            uVar11 = local_2c;
          }
          uVar10 = 0;
          local_24 = 0;
          puVar12 = (undefined1 *)0x0;
          *puVar3 = 4;
          goto switchD_00426b40_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00427eb9;
    case 2:
      goto joined_r0x00426d5a;
    case 3:
      goto joined_r0x00426ddd;
    case 4:
switchD_00426b40_caseD_4:
      if ((puVar3[4] & 0x400) == 0) {
        if (puVar3[8] != 0) {
          *(undefined4 *)(puVar3[8] + 0x10) = 0;
        }
      }
      else {
        for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
          uVar9 = 0;
          if (uVar11 == 0) goto LAB_00427f1d;
          uVar6 = *_Src;
          uVar11 = uVar11 - 1;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
          local_2c = uVar11;
        }
        puVar3[0x10] = uVar10;
        if (puVar3[8] != 0) {
          *(uint *)(puVar3[8] + 0x14) = uVar10;
        }
        if ((puVar3[4] & 0x200) != 0) {
          local_1c = (char)uVar10;
          local_1b = (undefined1)(uVar10 >> 8);
          uVar11 = FUN_004265e0(puVar3[6],(uint *)&local_1c,2);
          puVar3[6] = uVar11;
          uVar11 = local_2c;
        }
        uVar10 = 0;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      *puVar3 = 5;
      uVar9 = uVar11;
    case 5:
      if ((puVar3[4] & 0x400) == 0) {
LAB_00426f9c:
        puVar3[0x10] = 0;
        *puVar3 = 6;
switchD_00426b40_caseD_6:
        if ((puVar3[4] & 0x800) == 0) {
          if (puVar3[8] != 0) {
            *(undefined4 *)(puVar3[8] + 0x1c) = 0;
          }
LAB_00427054:
          puVar3[0x10] = 0;
          *puVar3 = 7;
switchD_00426b40_caseD_7:
          if ((puVar3[4] & 0x1000) == 0) {
            if (puVar3[8] != 0) {
              *(undefined4 *)(puVar3[8] + 0x24) = 0;
            }
LAB_00427114:
            *puVar3 = 8;
switchD_00426b40_caseD_8:
            uVar11 = uVar9;
            if ((puVar3[4] & 0x200) != 0) {
              for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
                uVar9 = 0;
                if (uVar11 == 0) goto LAB_00427f1d;
                uVar6 = *_Src;
                local_2c = uVar11 - 1;
                _Src = (uint *)((int)_Src + 1);
                uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
                uVar11 = local_2c;
                local_24 = uVar10;
              }
              if (uVar10 != (ushort)puVar3[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00427eb9;
              }
              uVar10 = 0;
              local_24 = 0;
              puVar12 = (undefined1 *)0x0;
            }
            if (puVar3[8] != 0) {
              *(uint *)(puVar3[8] + 0x2c) = (int)puVar3[4] >> 9 & 1;
              *(undefined4 *)(puVar3[8] + 0x30) = 1;
            }
            uVar11 = FUN_004265e0(0,(uint *)0x0,0);
            puVar3[6] = uVar11;
            param_1[0xc] = uVar11;
            *puVar3 = 0xb;
            uVar11 = local_2c;
            break;
          }
          if (uVar9 != 0) {
            uVar11 = 0;
            do {
              pbVar1 = (byte *)(uVar11 + (int)_Src);
              local_18 = (undefined1 *)(uint)*pbVar1;
              uVar11 = uVar11 + 1;
              uVar6 = puVar3[8];
              if (((uVar6 != 0) && (local_8 = *(uint *)(uVar6 + 0x24), local_8 != 0)) &&
                 (puVar3[0x10] < *(uint *)(uVar6 + 0x28))) {
                *(byte *)(local_8 + puVar3[0x10]) = *pbVar1;
                puVar3[0x10] = puVar3[0x10] + 1;
                uVar9 = local_2c;
              }
            } while ((local_18 != (undefined1 *)0x0) && (uVar11 < uVar9));
            if ((puVar3[4] & 0x200) != 0) {
              uVar6 = FUN_004265e0(puVar3[6],_Src,uVar11);
              puVar3[6] = uVar6;
              uVar9 = local_2c;
            }
            uVar9 = uVar9 - uVar11;
            _Src = (uint *)((int)_Src + uVar11);
            local_2c = uVar9;
            if (local_18 == (undefined1 *)0x0) goto LAB_00427114;
          }
        }
        else if (uVar9 != 0) {
          uVar11 = 0;
          do {
            pbVar1 = (byte *)(uVar11 + (int)_Src);
            local_18 = (undefined1 *)(uint)*pbVar1;
            uVar11 = uVar11 + 1;
            uVar6 = puVar3[8];
            if (((uVar6 != 0) && (local_8 = *(uint *)(uVar6 + 0x1c), local_8 != 0)) &&
               (puVar3[0x10] < *(uint *)(uVar6 + 0x20))) {
              *(byte *)(local_8 + puVar3[0x10]) = *pbVar1;
              puVar3[0x10] = puVar3[0x10] + 1;
              uVar9 = local_2c;
            }
          } while ((local_18 != (undefined1 *)0x0) && (uVar11 < uVar9));
          if ((puVar3[4] & 0x200) != 0) {
            uVar6 = FUN_004265e0(puVar3[6],_Src,uVar11);
            puVar3[6] = uVar6;
            uVar9 = local_2c;
          }
          uVar9 = uVar9 - uVar11;
          _Src = (uint *)((int)_Src + uVar11);
          local_2c = uVar9;
          if (local_18 == (undefined1 *)0x0) goto LAB_00427054;
        }
      }
      else {
        uVar11 = puVar3[0x10];
        if (uVar9 < puVar3[0x10]) {
          uVar11 = uVar9;
        }
        if (uVar11 != 0) {
          if ((puVar3[8] != 0) && (local_8 = *(uint *)(puVar3[8] + 0x10), local_8 != 0)) {
            local_18 = (undefined1 *)(*(int *)(puVar3[8] + 0x14) - puVar3[0x10]);
            uVar6 = uVar11;
            if (*(undefined1 **)(puVar3[8] + 0x18) < local_18 + uVar11) {
              uVar6 = (int)*(undefined1 **)(puVar3[8] + 0x18) - (int)local_18;
            }
            _memcpy(local_18 + local_8,_Src,uVar6);
            uVar9 = local_2c;
          }
          if ((puVar3[4] & 0x200) != 0) {
            uVar6 = FUN_004265e0(puVar3[6],_Src,uVar11);
            puVar3[6] = uVar6;
            uVar9 = local_2c;
          }
          uVar9 = uVar9 - uVar11;
          _Src = (uint *)((int)_Src + uVar11);
          puVar3[0x10] = puVar3[0x10] - uVar11;
          local_2c = uVar9;
        }
        if (puVar3[0x10] == 0) goto LAB_00426f9c;
      }
LAB_00427f1d:
      param_1[3] = (int)local_14;
      param_1[4] = local_20;
      *param_1 = (int)_Src;
      param_1[1] = uVar9;
      puVar3[0xe] = uVar10;
      puVar3[0xf] = (uint)puVar12;
      if (((puVar3[10] == 0) && ((0x17 < (int)*puVar3 || (local_10 == param_1[4])))) ||
         (iVar5 = FUN_004269d0(), iVar5 == 0)) {
        iVar5 = local_4 - param_1[1];
        uVar11 = local_10 - param_1[4];
        param_1[2] = param_1[2] + iVar5;
        param_1[5] = param_1[5] + uVar11;
        puVar3[7] = puVar3[7] + uVar11;
        if ((puVar3[2] != 0) && (uVar11 != 0)) {
          if (puVar3[4] == 0) {
            uVar6 = FUN_00428100(puVar3[6],(byte *)(param_1[3] - uVar11));
          }
          else {
            uVar6 = FUN_004265e0(puVar3[6],(uint *)(param_1[3] - uVar11),uVar11);
          }
          puVar3[6] = uVar6;
          param_1[0xc] = uVar6;
        }
        param_1[0xb] = (-(uint)(puVar3[1] != 0) & 0x40) + ((*puVar3 != 0xb) - 1 & 0x80) +
                       puVar3[0xf];
        if (((iVar5 != 0) || (uVar11 != 0)) && (param_2 != 4)) {
          return local_c;
        }
        if (local_c != 0) {
          return local_c;
        }
        return -5;
      }
      *puVar3 = 0x1c;
switchD_00426b40_caseD_1c:
      return -4;
    case 6:
      goto switchD_00426b40_caseD_6;
    case 7:
      goto switchD_00426b40_caseD_7;
    case 8:
      goto switchD_00426b40_caseD_8;
    case 9:
      for (; puVar12 < (undefined1 *)0x20; puVar12 = puVar12 + 8) {
        uVar9 = 0;
        if (uVar11 == 0) goto LAB_00427f1d;
        uVar6 = *_Src;
        uVar11 = uVar11 - 1;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar11;
        local_24 = uVar10;
      }
      uVar6 = ((uVar10 & 0xff00) + uVar10 * 0x10000) * 0x100 + (local_24 >> 0x10 & 0xff) * 0x100 +
              (uVar10 >> 0x18);
      puVar3[6] = uVar6;
      param_1[0xc] = uVar6;
      uVar10 = 0;
      puVar12 = (undefined1 *)0x0;
      *puVar3 = 10;
    case 10:
      if (puVar3[3] == 0) {
        param_1[3] = (int)local_14;
        *param_1 = (int)_Src;
        param_1[4] = local_20;
        param_1[1] = uVar11;
        puVar3[0xf] = (uint)puVar12;
        puVar3[0xe] = uVar10;
        return 2;
      }
      uVar11 = FUN_00428100(0,(byte *)0x0);
      puVar3[6] = uVar11;
      param_1[0xc] = uVar11;
      *puVar3 = 0xb;
      uVar9 = local_2c;
switchD_00426b40_caseD_b:
      if (param_2 != 5) {
switchD_00426b40_caseD_c:
        uVar11 = uVar9;
        if (puVar3[1] == 0) {
          for (; puVar12 < (undefined1 *)0x3; puVar12 = puVar12 + 8) {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            uVar6 = *_Src;
            local_2c = uVar11 - 1;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
            uVar11 = local_2c;
          }
          puVar3[1] = uVar10 & 1;
          switch(uVar10 >> 1 & 3) {
          case 0:
            uVar10 = uVar10 >> 3;
            *puVar3 = 0xd;
            puVar12 = puVar12 + -3;
            local_24 = uVar10;
            break;
          case 1:
            FUN_004269b0();
            uVar10 = uVar10 >> 3;
            *puVar3 = 0x12;
            puVar12 = puVar12 + -3;
            uVar11 = extraout_EDX;
            local_24 = uVar10;
            break;
          case 2:
            uVar10 = uVar10 >> 3;
            *puVar3 = 0xf;
            puVar12 = puVar12 + -3;
            local_24 = uVar10;
            break;
          case 3:
            param_1[6] = (int)"invalid block type";
            *puVar3 = 0x1b;
          default:
            uVar10 = uVar10 >> 3;
            puVar12 = puVar12 + -3;
            local_24 = uVar10;
          }
        }
        else {
          uVar10 = uVar10 >> (sbyte)((uint)puVar12 & 7);
          puVar12 = puVar12 + -((uint)puVar12 & 7);
          *puVar3 = 0x18;
          local_24 = uVar10;
        }
        break;
      }
      goto LAB_00427f1d;
    case 0xb:
      goto switchD_00426b40_caseD_b;
    case 0xc:
      goto switchD_00426b40_caseD_c;
    case 0xd:
      uVar10 = uVar10 >> (sbyte)((uint)puVar12 & 7);
      for (puVar12 = puVar12 + -((uint)puVar12 & 7); puVar12 < (undefined1 *)0x20;
          puVar12 = puVar12 + 8) {
        uVar9 = 0;
        if (uVar11 == 0) goto LAB_00427f1d;
        uVar6 = *_Src;
        uVar11 = uVar11 - 1;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar11;
      }
      uVar6 = uVar10 & 0xffff;
      if (uVar6 == ~uVar10 >> 0x10) {
        uVar10 = 0;
        puVar3[0x10] = uVar6;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
        *puVar3 = 0xe;
        uVar9 = uVar11;
        goto switchD_00426b40_caseD_e;
      }
      param_1[6] = (int)"invalid stored block lengths";
      local_24 = uVar10;
      goto LAB_00427eb9;
    case 0xe:
switchD_00426b40_caseD_e:
      local_28 = puVar3[0x10];
      if (local_28 == 0) {
LAB_00427a49:
        *puVar3 = 0xb;
        uVar11 = uVar9;
      }
      else {
        if (uVar9 < local_28) {
          local_28 = uVar9;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        if (local_28 == 0) goto LAB_00427f1d;
        _memcpy(local_14,_Src,local_28);
        local_20 = local_20 - local_28;
        local_14 = local_14 + local_28;
        _Src = (uint *)((int)_Src + local_28);
        puVar3[0x10] = puVar3[0x10] - local_28;
        uVar11 = local_2c - local_28;
        local_2c = local_2c - local_28;
      }
      break;
    case 0xf:
      for (; puVar12 < (undefined1 *)0xe; puVar12 = puVar12 + 8) {
        uVar9 = 0;
        if (uVar11 == 0) goto LAB_00427f1d;
        uVar6 = *_Src;
        uVar11 = uVar11 - 1;
        _Src = (uint *)((int)_Src + 1);
        uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar11;
      }
      puVar3[0x18] = (uVar10 & 0x1f) + 0x101;
      uVar9 = uVar10 >> 10;
      uVar6 = (uVar10 >> 5 & 0x1f) + 1;
      uVar10 = uVar10 >> 0xe;
      puVar12 = puVar12 + -0xe;
      puVar3[0x19] = uVar6;
      puVar3[0x17] = (uVar9 & 0xf) + 4;
      local_24 = uVar10;
      if ((puVar3[0x18] < 0x11f) && (uVar6 < 0x1f)) {
        puVar3[0x1a] = 0;
        *puVar3 = 0x10;
        goto switchD_00426b40_caseD_10;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00427eb9;
    case 0x10:
switchD_00426b40_caseD_10:
      if (puVar3[0x1a] < puVar3[0x17]) {
        do {
          for (; puVar12 < (undefined1 *)0x3; puVar12 = puVar12 + 8) {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            uVar6 = *_Src;
            uVar11 = uVar11 - 1;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
            local_2c = uVar11;
          }
          *(ushort *)((int)puVar3 + (uint)*(ushort *)(&DAT_004ae228 + puVar3[0x1a] * 2) * 2 + 0x70)
               = (ushort)uVar10 & 7;
          puVar3[0x1a] = puVar3[0x1a] + 1;
          uVar10 = uVar10 >> 3;
          puVar12 = puVar12 + -3;
          local_24 = uVar10;
        } while (puVar3[0x1a] < puVar3[0x17]);
      }
      uVar11 = puVar3[0x1a];
      while (uVar11 < 0x13) {
        *(undefined2 *)
         ((int)puVar3 + (uint)*(ushort *)(&DAT_004ae228 + puVar3[0x1a] * 2) * 2 + 0x70) = 0;
        puVar3[0x1a] = puVar3[0x1a] + 1;
        uVar11 = puVar3[0x1a];
      }
      puVar3[0x1b] = (uint)(puVar3 + 0x14c);
      puVar3[0x13] = (uint)(puVar3 + 0x14c);
      puVar3[0x15] = 7;
      local_c = FUN_00428870((int)(puVar3 + 0x1c),puVar3 + 0x15,0,0x13,(int *)(puVar3 + 0x1b),
                             (ushort *)(puVar3 + 0xbc));
      uVar11 = local_2c;
      if (local_c == 0) {
        puVar3[0x1a] = 0;
        *puVar3 = 0x11;
        goto switchD_00426b40_caseD_11;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00427eb9:
      *puVar3 = 0x1b;
      break;
    case 0x11:
switchD_00426b40_caseD_11:
      if (puVar3[0x1a] < puVar3[0x19] + puVar3[0x18]) {
        do {
          uVar6 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar10) * 4);
          if (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff)) {
            do {
              uVar9 = 0;
              if (uVar11 == 0) goto LAB_00427f1d;
              bVar8 = (byte)puVar12;
              uVar11 = uVar11 - 1;
              puVar12 = puVar12 + 8;
              uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar8 & 0x1f));
              _Src = (uint *)((int)_Src + 1);
              uVar6 = *(uint *)(puVar3[0x13] +
                               ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar10) * 4);
              local_2c = uVar11;
            } while (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff));
          }
          local_28._2_2_ = (short)(uVar6 >> 0x10);
          bVar8 = (byte)(uVar6 >> 8);
          if (uVar6 >> 0x10 < 0x10) {
            if (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff)) {
              do {
                uVar9 = 0;
                if (uVar11 == 0) goto LAB_00427f1d;
                uVar9 = *_Src;
                bVar7 = (byte)puVar12;
                uVar11 = uVar11 - 1;
                puVar12 = puVar12 + 8;
                _Src = (uint *)((int)_Src + 1);
                uVar10 = uVar10 + ((uint)(byte)uVar9 << (bVar7 & 0x1f));
                local_2c = uVar11;
              } while (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff));
            }
            local_24 = uVar10 >> (bVar8 & 0x1f);
            puVar12 = puVar12 + -(uVar6 >> 8 & 0xff);
            *(short *)((int)puVar3 + puVar3[0x1a] * 2 + 0x70) = local_28._2_2_;
            puVar3[0x1a] = puVar3[0x1a] + 1;
          }
          else {
            if (local_28._2_2_ == 0x10) {
              local_18 = (undefined1 *)(uVar6 >> 8 & 0xff);
              if (puVar12 < local_18 + 2) {
                do {
                  uVar9 = 0;
                  if (uVar11 == 0) goto LAB_00427f1d;
                  bVar7 = (byte)puVar12;
                  uVar11 = uVar11 - 1;
                  puVar12 = puVar12 + 8;
                  uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar7 & 0x1f));
                  _Src = (uint *)((int)_Src + 1);
                  local_2c = uVar11;
                } while (puVar12 < local_18 + 2);
              }
              uVar10 = uVar10 >> (bVar8 & 0x1f);
              puVar12 = puVar12 + -(int)local_18;
              if (puVar3[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                local_24 = uVar10;
                goto LAB_00427eb9;
              }
              local_18 = (undefined1 *)(uint)*(ushort *)((int)puVar3 + puVar3[0x1a] * 2 + 0x6e);
              local_28 = (uVar10 & 3) + 3;
              local_24 = uVar10 >> 2;
              puVar12 = puVar12 + -2;
            }
            else {
              local_18 = (undefined1 *)(uVar6 >> 8 & 0xff);
              if (local_28._2_2_ == 0x11) {
                if (puVar12 < local_18 + 3) {
                  do {
                    uVar9 = 0;
                    if (uVar11 == 0) goto LAB_00427f1d;
                    bVar7 = (byte)puVar12;
                    uVar11 = uVar11 - 1;
                    puVar12 = puVar12 + 8;
                    uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar7 & 0x1f));
                    _Src = (uint *)((int)_Src + 1);
                    local_2c = uVar11;
                  } while (puVar12 < local_18 + 3);
                }
                uVar10 = uVar10 >> (bVar8 & 0x1f);
                local_28 = (uVar10 & 7) + 3;
                local_24 = uVar10 >> 3;
                iVar5 = -3;
              }
              else {
                if (puVar12 < local_18 + 7) {
                  do {
                    uVar9 = 0;
                    if (uVar11 == 0) goto LAB_00427f1d;
                    bVar7 = (byte)puVar12;
                    uVar11 = uVar11 - 1;
                    puVar12 = puVar12 + 8;
                    uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar7 & 0x1f));
                    _Src = (uint *)((int)_Src + 1);
                    local_2c = uVar11;
                  } while (puVar12 < local_18 + 7);
                }
                uVar10 = uVar10 >> (bVar8 & 0x1f);
                local_28 = (uVar10 & 0x7f) + 0xb;
                local_24 = uVar10 >> 7;
                iVar5 = -7;
              }
              puVar12 = puVar12 + (iVar5 - (int)local_18);
              local_18 = (undefined1 *)0x0;
            }
            if (puVar3[0x19] + puVar3[0x18] < puVar3[0x1a] + local_28) {
              param_1[6] = (int)"invalid bit length repeat";
              uVar10 = local_24;
              goto LAB_00427eb9;
            }
            for (; local_28 != 0; local_28 = local_28 + -1) {
              *(short *)((int)puVar3 + puVar3[0x1a] * 2 + 0x70) = (short)local_18;
              puVar3[0x1a] = puVar3[0x1a] + 1;
            }
          }
          uVar10 = local_24;
        } while (puVar3[0x1a] < puVar3[0x19] + puVar3[0x18]);
      }
      if (*puVar3 != 0x1b) {
        puVar3[0x1b] = (uint)(puVar3 + 0x14c);
        puVar3[0x13] = (uint)(puVar3 + 0x14c);
        puVar3[0x15] = 9;
        local_c = FUN_00428870((int)(puVar3 + 0x1c),puVar3 + 0x15,1,puVar3[0x18],
                               (int *)(puVar3 + 0x1b),(ushort *)(puVar3 + 0xbc));
        uVar11 = local_2c;
        if (local_c == 0) {
          puVar3[0x14] = puVar3[0x1b];
          puVar3[0x16] = 6;
          local_c = FUN_00428870((int)puVar3 + puVar3[0x18] * 2 + 0x70,puVar3 + 0x16,2,puVar3[0x19],
                                 (int *)(puVar3 + 0x1b),(ushort *)(puVar3 + 0xbc));
          if (local_c == 0) {
            *puVar3 = 0x12;
            goto switchD_00426b40_caseD_12;
          }
          param_1[6] = (int)"invalid distances set";
        }
        else {
          param_1[6] = (int)"invalid literal/lengths set";
        }
        goto LAB_00427eb9;
      }
      break;
    case 0x12:
switchD_00426b40_caseD_12:
      if ((uVar11 < 6) || (local_20 < 0x102)) {
        uVar6 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar10) * 4);
        if (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff)) {
          do {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            bVar8 = (byte)puVar12;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 8;
            uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar8 & 0x1f));
            _Src = (uint *)((int)_Src + 1);
            uVar6 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar10) * 4)
            ;
            local_2c = uVar11;
          } while (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff));
        }
        cVar4 = (char)uVar6;
        local_28 = uVar6;
        if ((cVar4 != '\0') && ((uVar6 & 0xf0) == 0)) {
          local_8 = uVar6 >> 8;
          local_18 = (undefined1 *)(local_8 & 0xff);
          bVar8 = (byte)(uVar6 >> 8);
          local_28 = *(uint *)(puVar3[0x13] +
                              ((((1 << (cVar4 + bVar8 & 0x1f)) - 1U & uVar10) >> (bVar8 & 0x1f)) +
                              (uVar6 >> 0x10)) * 4);
          if (puVar12 < (undefined1 *)((local_28 >> 8 & 0xff) + (local_8 & 0xff))) {
            do {
              uVar9 = 0;
              if (uVar11 == 0) goto LAB_00427f1d;
              bVar7 = (byte)puVar12;
              uVar11 = uVar11 - 1;
              puVar12 = puVar12 + 8;
              uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar7 & 0x1f));
              local_18 = (undefined1 *)(uVar6 >> 8 & 0xff);
              _Src = (uint *)((int)_Src + 1);
              local_28 = *(uint *)(puVar3[0x13] +
                                  ((((1 << (cVar4 + bVar8 & 0x1f)) - 1U & uVar10) >> (bVar8 & 0x1f))
                                  + (uVar6 >> 0x10)) * 4);
              local_2c = uVar11;
            } while (puVar12 < local_18 + (local_28 >> 8 & 0xff));
          }
          uVar10 = uVar10 >> (bVar8 & 0x1f);
          puVar12 = puVar12 + -(uint)bVar8;
        }
        local_18 = (undefined1 *)(local_28 >> 8 & 0xff);
        uVar10 = uVar10 >> ((byte)(local_28 >> 8) & 0x1f);
        puVar12 = puVar12 + -(int)local_18;
        puVar3[0x10] = local_28 >> 0x10;
        local_24 = uVar10;
        if ((char)local_28 == '\0') {
          *puVar3 = 0x17;
          break;
        }
        uVar9 = uVar11;
        if ((local_28 & 0x20) == 0) {
          if ((local_28 & 0x40) == 0) {
            puVar3[0x12] = local_28 & 0xf;
            *puVar3 = 0x13;
            goto switchD_00426b40_caseD_13;
          }
          param_1[6] = (int)"invalid literal/length code";
          goto LAB_00427eb9;
        }
        goto LAB_00427a49;
      }
      param_1[4] = local_20;
      param_1[3] = (int)local_14;
      *param_1 = (int)_Src;
      param_1[1] = local_2c;
      puVar3[0xe] = uVar10;
      puVar3[0xf] = (uint)puVar12;
      FUN_00428380(param_1,local_10);
      local_20 = param_1[4];
      local_14 = (undefined1 *)param_1[3];
      _Src = (uint *)*param_1;
      uVar10 = puVar3[0xe];
      puVar12 = (undefined1 *)puVar3[0xf];
      uVar11 = param_1[1];
      local_2c = param_1[1];
      local_24 = uVar10;
      break;
    case 0x13:
switchD_00426b40_caseD_13:
      if ((undefined1 *)puVar3[0x12] != (undefined1 *)0x0) {
        if (puVar12 < (undefined1 *)puVar3[0x12]) {
          do {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            uVar6 = *_Src;
            bVar8 = (byte)puVar12;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)(byte)uVar6 << (bVar8 & 0x1f));
            local_2c = uVar11;
          } while (puVar12 < (undefined1 *)puVar3[0x12]);
        }
        bVar8 = (byte)puVar3[0x12];
        puVar3[0x10] = puVar3[0x10] + ((1 << (bVar8 & 0x1f)) - 1U & uVar10);
        uVar10 = uVar10 >> (bVar8 & 0x1f);
        puVar12 = puVar12 + -puVar3[0x12];
      }
      *puVar3 = 0x14;
    case 0x14:
      uVar6 = *(uint *)(puVar3[0x14] + ((1 << ((byte)puVar3[0x16] & 0x1f)) - 1U & uVar10) * 4);
      if (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff)) {
        do {
          uVar9 = 0;
          if (uVar11 == 0) goto LAB_00427f1d;
          bVar8 = (byte)puVar12;
          uVar11 = uVar11 - 1;
          puVar12 = puVar12 + 8;
          uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar8 & 0x1f));
          _Src = (uint *)((int)_Src + 1);
          uVar6 = *(uint *)(puVar3[0x14] + ((1 << ((byte)puVar3[0x16] & 0x1f)) - 1U & uVar10) * 4);
          local_2c = uVar11;
        } while (puVar12 < (undefined1 *)(uVar6 >> 8 & 0xff));
      }
      local_28 = uVar6;
      if ((uVar6 & 0xf0) == 0) {
        local_8 = uVar6 >> 8;
        local_18 = (undefined1 *)(local_8 & 0xff);
        bVar8 = (byte)(uVar6 >> 8);
        local_28 = *(uint *)(puVar3[0x14] +
                            ((((1 << ((char)uVar6 + bVar8 & 0x1f)) - 1U & uVar10) >> (bVar8 & 0x1f))
                            + (uVar6 >> 0x10)) * 4);
        if (puVar12 < (undefined1 *)((local_28 >> 8 & 0xff) + (local_8 & 0xff))) {
          do {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            bVar7 = (byte)puVar12;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 8;
            uVar10 = uVar10 + ((uint)(byte)*_Src << (bVar7 & 0x1f));
            local_18 = (undefined1 *)(uVar6 >> 8 & 0xff);
            _Src = (uint *)((int)_Src + 1);
            local_28 = *(uint *)(puVar3[0x14] +
                                ((((1 << ((char)uVar6 + bVar8 & 0x1f)) - 1U & uVar10) >>
                                 (bVar8 & 0x1f)) + (uVar6 >> 0x10)) * 4);
            local_2c = uVar11;
          } while (puVar12 < local_18 + (local_28 >> 8 & 0xff));
        }
        uVar10 = uVar10 >> (bVar8 & 0x1f);
        puVar12 = puVar12 + -(uint)bVar8;
      }
      local_18 = (undefined1 *)(local_28 >> 8 & 0xff);
      uVar10 = uVar10 >> ((byte)(local_28 >> 8) & 0x1f);
      puVar12 = puVar12 + -(int)local_18;
      local_24 = uVar10;
      if ((local_28 & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00427eb9;
      }
      puVar3[0x11] = local_28 >> 0x10;
      puVar3[0x12] = local_28 & 0xf;
      *puVar3 = 0x15;
switchD_00426b40_caseD_15:
      if ((undefined1 *)puVar3[0x12] != (undefined1 *)0x0) {
        if (puVar12 < (undefined1 *)puVar3[0x12]) {
          do {
            uVar9 = 0;
            if (uVar11 == 0) goto LAB_00427f1d;
            uVar6 = *_Src;
            bVar8 = (byte)puVar12;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 8;
            _Src = (uint *)((int)_Src + 1);
            uVar10 = uVar10 + ((uint)(byte)uVar6 << (bVar8 & 0x1f));
            local_2c = uVar11;
          } while (puVar12 < (undefined1 *)puVar3[0x12]);
        }
        bVar8 = (byte)puVar3[0x12];
        puVar3[0x11] = puVar3[0x11] + ((1 << (bVar8 & 0x1f)) - 1U & uVar10);
        uVar10 = uVar10 >> (bVar8 & 0x1f);
        puVar12 = puVar12 + -puVar3[0x12];
        local_24 = uVar10;
      }
      if ((puVar3[0xb] - local_20) + local_10 < puVar3[0x11]) {
        param_1[6] = (int)"invalid distance too far back";
        goto LAB_00427eb9;
      }
      *puVar3 = 0x16;
      uVar9 = uVar11;
switchD_00426b40_caseD_16:
      if (local_20 != 0) {
        local_28 = puVar3[0x11];
        if (local_10 - local_20 < local_28) {
          local_28 = local_28 - (local_10 - local_20);
          if (puVar3[0xc] < local_28) {
            local_28 = local_28 - puVar3[0xc];
            local_18 = (undefined1 *)((puVar3[0xd] + puVar3[10]) - local_28);
          }
          else {
            local_18 = (undefined1 *)((puVar3[0xd] - local_28) + puVar3[0xc]);
          }
          local_8 = puVar3[0x10];
          if (local_8 < local_28) goto LAB_00427d02;
        }
        else {
          local_18 = local_14 + -local_28;
          local_8 = puVar3[0x10];
LAB_00427d02:
          local_28 = local_8;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        local_20 = local_20 - local_28;
        puVar3[0x10] = local_8 - local_28;
        do {
          uVar2 = *local_18;
          local_18 = local_18 + 1;
          *local_14 = uVar2;
          local_14 = local_14 + 1;
          local_28 = local_28 - 1;
        } while (local_28 != 0);
        uVar11 = uVar9;
        if (puVar3[0x10] == 0) {
          *puVar3 = 0x12;
        }
        break;
      }
      goto LAB_00427f1d;
    case 0x15:
      goto switchD_00426b40_caseD_15;
    case 0x16:
      goto switchD_00426b40_caseD_16;
    case 0x17:
      if (local_20 == 0) goto LAB_00427f1d;
      *local_14 = (char)puVar3[0x10];
      local_14 = local_14 + 1;
      local_20 = local_20 - 1;
      *puVar3 = 0x12;
      break;
    case 0x18:
      if (puVar3[2] != 0) {
        for (; puVar12 < (undefined1 *)0x20; puVar12 = puVar12 + 8) {
          uVar9 = 0;
          if (uVar11 == 0) goto LAB_00427f1d;
          uVar6 = *_Src;
          uVar11 = uVar11 - 1;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
          local_2c = uVar11;
          local_24 = uVar10;
        }
        local_10 = local_10 - local_20;
        param_1[5] = param_1[5] + local_10;
        puVar3[7] = puVar3[7] + local_10;
        if (local_10 != 0) {
          if (puVar3[4] == 0) {
            uVar11 = FUN_00428100(puVar3[6],local_14 + -local_10);
          }
          else {
            uVar11 = FUN_004265e0(puVar3[6],(uint *)(local_14 + -local_10),local_10);
          }
          puVar3[6] = uVar11;
          param_1[0xc] = uVar11;
          uVar11 = local_2c;
        }
        uVar6 = uVar10;
        if (puVar3[4] == 0) {
          uVar6 = ((uVar10 & 0xff00) + uVar10 * 0x10000) * 0x100 + (local_24 >> 0x10 & 0xff) * 0x100
                  + (uVar10 >> 0x18);
        }
        local_10 = local_20;
        if (uVar6 != puVar3[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00427eb9;
        }
        uVar10 = 0;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      *puVar3 = 0x19;
    case 0x19:
      if ((puVar3[2] != 0) && (puVar3[4] != 0)) {
        for (; puVar12 < (undefined1 *)0x20; puVar12 = puVar12 + 8) {
          uVar9 = 0;
          if (uVar11 == 0) goto LAB_00427f1d;
          uVar6 = *_Src;
          uVar11 = uVar11 - 1;
          _Src = (uint *)((int)_Src + 1);
          uVar10 = uVar10 + ((uint)(byte)uVar6 << ((byte)puVar12 & 0x1f));
          local_2c = uVar11;
          local_24 = uVar10;
        }
        if (uVar10 != puVar3[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00427eb9;
        }
        uVar10 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      *puVar3 = 0x1a;
switchD_00426b40_caseD_1a:
      local_c = 1;
      uVar9 = uVar11;
      goto LAB_00427f1d;
    case 0x1a:
      goto switchD_00426b40_caseD_1a;
    case 0x1b:
      local_c = -3;
      goto LAB_00427f1d;
    case 0x1c:
      goto switchD_00426b40_caseD_1c;
    }
    uVar6 = *puVar3;
  } while( true );
}

