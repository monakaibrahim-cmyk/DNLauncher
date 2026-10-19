// Address: 0x00450f70
// Name: FUN_00450f70
// Category: Utility


void __cdecl FUN_00450f70(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined1 auStack_84 [3];
  undefined1 local_81;
  undefined1 local_80 [4];
  uint local_7c [28];
  undefined4 local_c;
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_84;
  param_1[0x39] = param_1[0x39] + 1;
  local_7c[10] = 2;
  local_7c[4] = 2;
  local_7c[5] = 2;
  local_7c[0x19] = 2;
  local_7c[0x13] = 2;
  local_7c[0x14] = 2;
  local_7c[7] = 0;
  local_7c[8] = 4;
  local_7c[9] = 0;
  local_7c[0xb] = 0;
  local_7c[0xc] = 1;
  local_7c[0xd] = 0;
  local_7c[0] = 8;
  local_7c[1] = 8;
  local_7c[2] = 4;
  local_7c[3] = 4;
  local_7c[6] = 1;
  local_7c[0x15] = 0;
  local_7c[0x16] = 0;
  local_7c[0x17] = 4;
  local_7c[0x18] = 0;
  local_7c[0x1a] = 0;
  local_7c[0x1b] = 1;
  local_7c[0xe] = 8;
  local_7c[0xf] = 8;
  local_7c[0x10] = 8;
  local_7c[0x11] = 4;
  local_7c[0x12] = 4;
  if ((uint)param_1[0x34] <= (uint)param_1[0x39]) {
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      param_1[0x39] = 0;
      FUN_0044d8d0(param_1,(void *)param_1[0x3a],0,param_1[0x36] + 1);
      do {
        *(char *)(param_1 + 0x49) = (char)param_1[0x49] + '\x01';
        bVar1 = *(byte *)(param_1 + 0x49);
        if (6 < bVar1) goto LAB_004510f6;
        uVar3 = ((param_1[0x32] - local_7c[bVar1 + 7]) + -1 + local_7c[bVar1]) / local_7c[bVar1];
        bVar2 = *(byte *)((int)param_1 + 0x129);
        param_1[0x38] = uVar3;
        if (bVar2 < 8) {
          uVar4 = bVar2 * uVar3 + 7 >> 3;
        }
        else {
          uVar4 = (bVar2 >> 3) * uVar3;
        }
        param_1[0x37] = uVar4 + 1;
      } while (((*(byte *)(param_1 + 0x1c) & 2) == 0) &&
              (param_1[0x34] =
                    ((param_1[0x33] - local_7c[bVar1 + 0x15]) + -1 + local_7c[bVar1 + 0xe]) /
                    local_7c[bVar1 + 0xe], uVar3 == 0));
      if (bVar1 < 7) goto LAB_00451303;
    }
LAB_004510f6:
    if ((*(byte *)(param_1 + 0x1b) & 0x20) == 0) {
      local_c._0_1_ = 0x49;
      local_c._1_1_ = 0x44;
      local_c._2_1_ = 0x41;
      local_c._3_1_ = 0x54;
      local_8 = 0;
      param_1[0x20] = (int)&local_81;
      param_1[0x21] = 1;
      do {
        if (param_1[0x1e] == 0) {
          if (param_1[0x43] == 0) {
            do {
              FUN_0044eb90(param_1,0);
              FUN_0044d680(param_1);
              uVar3 = FUN_0044eb60(param_1,local_80);
              param_1[0x43] = uVar3;
              FUN_00445460((int)param_1);
              FUN_0044da60(param_1,(uint *)(param_1 + 0x47),4);
              uVar3 = 4;
              puVar7 = &local_c;
              puVar8 = (uint *)(param_1 + 0x47);
              do {
                if (*puVar8 != *puVar7) goto LAB_004511be;
                uVar3 = uVar3 - 4;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              } while (3 < uVar3);
              if (uVar3 == 0) {
LAB_0045121b:
                iVar5 = 0;
              }
              else {
LAB_004511be:
                iVar9 = (uint)(byte)*puVar8 - (uint)(byte)*puVar7;
                if (iVar9 == 0) {
                  if (uVar3 == 1) goto LAB_0045121b;
                  iVar9 = (uint)*(byte *)((int)puVar8 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                  if (iVar9 == 0) {
                    if (uVar3 == 2) goto LAB_0045121b;
                    iVar9 = (uint)*(byte *)((int)puVar8 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                    if (iVar9 == 0) {
                      if ((uVar3 == 3) ||
                         (iVar9 = (uint)*(byte *)((int)puVar8 + 3) -
                                  (uint)*(byte *)((int)puVar7 + 3), iVar9 == 0)) goto LAB_0045121b;
                    }
                  }
                }
                iVar5 = 1;
                if (iVar9 < 1) {
                  iVar5 = -1;
                }
              }
              if (iVar5 != 0) {
                FUN_00445110(param_1,"Not enough image data");
              }
            } while (param_1[0x43] == 0);
          }
          param_1[0x1e] = param_1[0x2c];
          param_1[0x1d] = param_1[0x2b];
          if ((uint)param_1[0x43] < (uint)param_1[0x2c]) {
            param_1[0x1e] = param_1[0x43];
          }
          FUN_0044da60(param_1,(uint *)param_1[0x2b],param_1[0x1e]);
          param_1[0x43] = param_1[0x43] - param_1[0x1e];
        }
        iVar9 = FUN_00426ac0(param_1 + 0x1d,1);
        if (iVar9 == 1) {
          if (((param_1[0x21] != 0) && (param_1[0x1e] == 0)) && (param_1[0x43] == 0))
          goto LAB_004512c5;
          pcVar6 = "Extra compressed data";
          goto LAB_004512bc;
        }
        if (iVar9 != 0) {
          pcVar6 = (char *)param_1[0x23];
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "Decompression Error";
          }
          FUN_00445110(param_1,pcVar6);
        }
      } while (param_1[0x21] != 0);
      pcVar6 = "Extra compressed data.";
LAB_004512bc:
      FUN_004451d0((int)param_1,pcVar6);
LAB_004512c5:
      param_1[0x1a] = param_1[0x1a] | 8;
      param_1[0x1b] = param_1[0x1b] | 0x20;
      param_1[0x21] = 0;
    }
    if ((param_1[0x43] != 0) || (param_1[0x1e] != 0)) {
      FUN_004451d0((int)param_1,"Extra compression data");
    }
    FUN_004268a0((int)(param_1 + 0x1d));
    param_1[0x1a] = param_1[0x1a] | 8;
  }
LAB_00451303:
  __security_check_cookie(local_4 ^ (uint)auStack_84);
  return;
}

