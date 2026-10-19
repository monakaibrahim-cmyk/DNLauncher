// Address: 0x00428870
// Name: FUN_00428870
// Category: Launcher


void __fastcall
FUN_00428870(int param_1,uint *param_2,int param_3,uint param_4,int *param_5,ushort *param_6)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  ushort *puVar13;
  undefined4 local_8c;
  uint local_88;
  ushort *local_84;
  int local_80;
  uint local_7c;
  ushort *local_78;
  uint local_74;
  uint local_70;
  ushort *local_6c;
  ushort *local_68;
  int local_64;
  int *local_60;
  uint local_5c;
  uint local_58;
  ushort *local_54;
  uint local_50;
  uint *local_4c;
  int local_48;
  ushort local_44 [32];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_8c;
  local_84 = param_6;
  uVar5 = 0;
  local_60 = param_5;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  local_44[9] = 0;
  local_44[10] = 0;
  local_44[0xb] = 0;
  local_44[0xc] = 0;
  local_44[0xd] = 0;
  local_44[0xe] = 0;
  local_44[0xf] = 0;
  if (param_4 != 0) {
    do {
      local_44[*(ushort *)(param_1 + uVar5 * 2)] = local_44[*(ushort *)(param_1 + uVar5 * 2)] + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
  }
  local_7c = 0xf;
  do {
    if (local_44[local_7c] != 0) break;
    local_7c = local_7c - 1;
  } while (local_7c != 0);
  local_88 = *param_2;
  if (local_7c < *param_2) {
    local_88 = local_7c;
  }
  uVar5 = local_58;
  if (local_7c == 0) {
    local_8c = 0x140;
    *(undefined4 *)*param_5 = 0x140;
    *param_5 = *param_5 + 4;
    *(undefined4 *)*param_5 = 0x140;
    *param_5 = *param_5 + 4;
    *param_2 = 1;
  }
  else {
    uVar3 = 1;
    do {
      if (local_44[uVar3] != 0) break;
      if (local_44[uVar3 + 1] != 0) {
        uVar3 = uVar3 + 1;
        break;
      }
      if (local_44[uVar3 + 2] != 0) {
        uVar3 = uVar3 + 2;
        break;
      }
      if (local_44[uVar3 + 3] != 0) {
        uVar3 = uVar3 + 3;
        break;
      }
      if (local_44[uVar3 + 4] != 0) {
        uVar3 = uVar3 + 4;
        break;
      }
      uVar3 = uVar3 + 5;
    } while (uVar3 < 0x10);
    if (local_88 < uVar3) {
      local_88 = uVar3;
    }
    iVar10 = 1;
    uVar6 = 1;
    do {
      iVar10 = iVar10 * 2 - (uint)local_44[uVar6];
      if (iVar10 < 0) goto LAB_00428d36;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    if ((iVar10 < 1) || ((param_3 != 0 && (local_7c == 1)))) {
      local_44[0x11] = 0;
      uVar5 = 2;
      do {
        uVar6 = uVar5 + 2;
        *(short *)((int)local_44 + uVar5 + 0x22) =
             *(short *)((int)local_44 + uVar5 + 0x20) + *(short *)((int)local_44 + uVar5);
        uVar5 = uVar6;
      } while (uVar6 < 0x1e);
      uVar5 = 0;
      if (param_4 != 0) {
        do {
          if (*(short *)(param_1 + uVar5 * 2) != 0) {
            param_6[local_44[*(ushort *)(param_1 + uVar5 * 2) + 0x10]] = (ushort)uVar5;
            local_44[*(ushort *)(param_1 + uVar5 * 2) + 0x10] =
                 local_44[*(ushort *)(param_1 + uVar5 * 2) + 0x10] + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_4);
      }
      uVar6 = 0;
      if (param_3 == 0) {
        local_68 = param_6;
        local_6c = param_6;
        local_64 = 0x13;
      }
      else if (param_3 == 1) {
        local_6c = (ushort *)&DAT_004ad67e;
        local_68 = (ushort *)&DAT_004ad6be;
        local_64 = 0x100;
      }
      else {
        local_6c = (ushort *)&DAT_004ad900;
        local_68 = (ushort *)&DAT_004ad940;
        local_64 = -1;
      }
      local_80 = *param_5;
      local_84 = (ushort *)0xffffffff;
      bVar4 = (byte)local_88;
      local_74 = 1 << (bVar4 & 0x1f);
      local_70 = 0;
      local_5c = local_74 - 1;
      if ((param_3 != 1) || (uVar5 = local_74, local_74 < 0x5b0)) {
        local_78 = param_6;
        local_58 = local_74;
LAB_00428b04:
        do {
          uVar1 = *local_78;
          cVar2 = (char)uVar3;
          bVar12 = (byte)uVar6;
          bVar9 = cVar2 - bVar12;
          if ((int)(uint)uVar1 < local_64) {
            local_8c = (uint)CONCAT21(uVar1,bVar9) << 8;
          }
          else if (local_64 < (int)(uint)uVar1) {
            local_8c = CONCAT22(local_6c[*local_78],CONCAT11(bVar9,(char)local_68[*local_78]));
          }
          else {
            local_8c = CONCAT31((uint3)bVar9,0x60);
          }
          iVar10 = 1 << (cVar2 - bVar12 & 0x1f);
          puVar7 = (uint *)(local_80 + ((local_70 >> (bVar12 & 0x1f)) + local_58) * 4);
          uVar5 = local_58;
          do {
            uVar5 = uVar5 - iVar10;
            puVar7 = puVar7 + -iVar10;
            *puVar7 = local_8c;
          } while (uVar5 != 0);
          for (uVar5 = 1 << (cVar2 - 1U & 0x1f); (local_70 & uVar5) != 0; uVar5 = uVar5 >> 1) {
          }
          if (uVar5 == 0) {
            local_70 = 0;
          }
          else {
            local_70 = (uVar5 - 1 & local_70) + uVar5;
          }
          local_44[uVar3] = local_44[uVar3] - 1;
          local_78 = local_78 + 1;
          local_50 = local_58;
          if (local_44[uVar3] == 0) {
            if (uVar3 == local_7c) {
              local_8c._0_2_ = CONCAT11(cVar2 - bVar12,0x40);
              local_8c = (uint)(ushort)local_8c;
              uVar5 = local_70;
              iVar10 = local_80;
              goto joined_r0x00428cc2;
            }
            uVar3 = (uint)*(ushort *)(param_1 + (uint)*local_78 * 2);
          }
        } while ((uVar3 <= local_88) ||
                (local_54 = (ushort *)(local_5c & local_70), local_54 == local_84));
        if (uVar6 == 0) {
          uVar6 = local_88;
        }
        local_80 = local_80 + local_58 * 4;
        iVar8 = uVar3 - uVar6;
        uVar5 = uVar6 + iVar8;
        iVar10 = 1 << ((byte)iVar8 & 0x1f);
        if (uVar5 < local_7c) {
          puVar13 = local_44 + uVar5;
          do {
            uVar1 = *puVar13;
            if ((int)(iVar10 - (uint)uVar1) < 1) break;
            uVar5 = uVar5 + 1;
            iVar8 = iVar8 + 1;
            puVar13 = puVar13 + 1;
            iVar10 = (iVar10 - (uint)uVar1) * 2;
          } while (uVar5 < local_7c);
        }
        uVar5 = 1 << ((byte)iVar8 & 0x1f);
        local_74 = local_74 + uVar5;
        if ((param_3 != 1) || (local_74 < 0x5b0)) {
          *(byte *)(*param_5 + (int)local_54 * 4) = (byte)iVar8;
          *(byte *)(*param_5 + 1 + (int)local_54 * 4) = bVar4;
          *(short *)(*param_5 + 2 + (int)local_54 * 4) = (short)(local_80 - *param_5 >> 2);
          local_84 = local_54;
          local_58 = uVar5;
          goto LAB_00428b04;
        }
      }
    }
  }
LAB_00428d36:
  local_58 = uVar5;
  local_4c = param_2;
  local_48 = param_1;
  __security_check_cookie(local_4 ^ (uint)&local_8c);
  return;
joined_r0x00428cc2:
  if (uVar5 == 0) goto LAB_00428d15;
  if ((uVar6 != 0) && ((ushort *)(local_5c & uVar5) != local_84)) {
    iVar10 = *param_5;
    uVar6 = 0;
    local_8c._0_2_ = CONCAT11(bVar4,(undefined1)local_8c);
    local_8c = (uint)(ushort)local_8c;
    uVar3 = local_88;
  }
  *(uint *)(iVar10 + (uVar5 >> ((byte)uVar6 & 0x1f)) * 4) = local_8c;
  for (uVar11 = 1 << ((char)uVar3 - 1U & 0x1f); (uVar5 & uVar11) != 0; uVar11 = uVar11 >> 1) {
  }
  if (uVar11 == 0) goto LAB_00428d15;
  uVar5 = (uVar11 - 1 & uVar5) + uVar11;
  goto joined_r0x00428cc2;
LAB_00428d15:
  *param_5 = *param_5 + local_74 * 4;
  *param_2 = local_88;
  uVar5 = local_58;
  goto LAB_00428d36;
}

