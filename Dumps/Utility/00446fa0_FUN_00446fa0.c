// Address: 0x00446fa0
// Name: FUN_00446fa0
// Category: Utility


void __cdecl FUN_00446fa0(int *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  byte *local_50;
  byte *local_4c;
  undefined1 local_48 [4];
  uint local_44 [14];
  undefined4 local_c;
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_50;
  local_50 = param_2;
  local_4c = param_3;
  local_c._0_1_ = 0x49;
  local_c._1_1_ = 0x44;
  local_c._2_1_ = 0x41;
  local_c._3_1_ = 0x54;
  local_8 = 0;
  local_44[0] = 0xff;
  local_44[1] = 0xf;
  local_44[2] = 0xff;
  local_44[3] = 0x33;
  local_44[4] = 0xff;
  local_44[5] = 0x55;
  local_44[6] = 0xff;
  local_44[7] = 0x80;
  local_44[8] = 8;
  local_44[9] = 0x88;
  local_44[10] = 0x22;
  local_44[0xb] = 0xaa;
  local_44[0xc] = 0x55;
  local_44[0xd] = 0xff;
  if (param_1 == (int *)0x0) goto LAB_004474bf;
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_0044e860(param_1);
  }
  if ((*(char *)((int)param_1 + 0x123) != '\0') && ((*(byte *)(param_1 + 0x1c) & 2) != 0)) {
    switch((char)param_1[0x49]) {
    case '\0':
      if ((*(byte *)(param_1 + 0x39) & 7) != 0) {
        bVar9 = param_3 == (byte *)0x0;
LAB_00447091:
        if (bVar9) goto LAB_0044709e;
        uVar3 = 0xff;
LAB_00447094:
        FUN_0044def0((int)param_1,param_3,uVar3);
LAB_0044709e:
        FUN_00450f70(param_1);
        __security_check_cookie(local_4 ^ (uint)&local_50);
        return;
      }
      break;
    case '\x01':
      if (((*(byte *)(param_1 + 0x39) & 7) != 0) || ((uint)param_1[0x32] < 5)) {
        if (param_3 == (byte *)0x0) goto LAB_0044709e;
        uVar3 = 0xf;
        goto LAB_00447094;
      }
      break;
    case '\x02':
      if (((byte)param_1[0x39] & 7) != 4) {
        if (param_3 == (byte *)0x0) goto LAB_0044709e;
        bVar9 = (param_1[0x39] & 4U) == 0;
        goto LAB_00447091;
      }
      break;
    case '\x03':
      if (((*(byte *)(param_1 + 0x39) & 3) != 0) || ((uint)param_1[0x32] < 3)) {
        if (param_3 == (byte *)0x0) goto LAB_0044709e;
        uVar3 = 0x33;
        goto LAB_00447094;
      }
      break;
    case '\x04':
      if (((byte)param_1[0x39] & 3) != 2) {
        if (param_3 == (byte *)0x0) goto LAB_0044709e;
        bVar9 = (param_1[0x39] & 2U) == 0;
        goto LAB_00447091;
      }
      break;
    case '\x05':
      if (((*(byte *)(param_1 + 0x39) & 1) != 0) || ((uint)param_1[0x32] < 2)) {
        if (param_3 == (byte *)0x0) goto LAB_0044709e;
        uVar3 = 0x55;
        goto LAB_00447094;
      }
      break;
    case '\x06':
      if ((*(byte *)(param_1 + 0x39) & 1) == 0) goto LAB_0044709e;
    }
  }
  if ((*(byte *)(param_1 + 0x1a) & 4) == 0) {
    FUN_00445110(param_1,"Invalid attempt to read row data");
  }
  param_1[0x20] = param_1[0x3b];
  param_1[0x21] = param_1[0x37];
  do {
    if (param_1[0x1e] == 0) {
      if (param_1[0x43] == 0) {
        do {
          FUN_0044eb90(param_1,0);
          FUN_0044d680(param_1);
          uVar3 = FUN_0044eb60(param_1,local_48);
          param_1[0x43] = uVar3;
          FUN_00445460((int)param_1);
          FUN_0044da60(param_1,(uint *)(param_1 + 0x47),4);
          uVar3 = 4;
          puVar6 = &local_c;
          puVar7 = (uint *)(param_1 + 0x47);
          do {
            if (*puVar7 != *puVar6) goto LAB_0044720b;
            uVar3 = uVar3 - 4;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (3 < uVar3);
          if (uVar3 == 0) {
LAB_00447270:
            iVar4 = 0;
          }
          else {
LAB_0044720b:
            iVar8 = (uint)(byte)*puVar7 - (uint)(byte)*puVar6;
            param_3 = local_4c;
            if (iVar8 == 0) {
              if (uVar3 == 1) goto LAB_00447270;
              iVar8 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar6 + 1);
              if (iVar8 == 0) {
                if (uVar3 == 2) goto LAB_00447270;
                iVar8 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar6 + 2);
                if (iVar8 == 0) {
                  if ((uVar3 == 3) ||
                     (iVar8 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar6 + 3),
                     iVar8 == 0)) goto LAB_00447270;
                }
              }
            }
            iVar4 = 1;
            if (iVar8 < 1) {
              iVar4 = -1;
            }
          }
          if (iVar4 != 0) {
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
    iVar8 = FUN_00426ac0(param_1 + 0x1d,1);
    if (iVar8 == 1) {
      if (((param_1[0x21] != 0) || (param_1[0x1e] != 0)) || (param_1[0x43] != 0)) {
        FUN_00445110(param_1,"Extra compressed data");
      }
      param_1[0x1a] = param_1[0x1a] | 8;
      param_1[0x1b] = param_1[0x1b] | 0x20;
      break;
    }
    if (iVar8 != 0) {
      pcVar5 = (char *)param_1[0x23];
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Decompression error";
      }
      FUN_00445110(param_1,pcVar5);
    }
  } while (param_1[0x21] != 0);
  iVar8 = param_1[0x38];
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)((int)param_1 + 0x126);
  *(undefined1 *)((int)param_1 + 0x10a) = *(undefined1 *)((int)param_1 + 0x12a);
  bVar2 = *(byte *)((int)param_1 + 0x129);
  piVar1 = param_1 + 0x40;
  *(byte *)((int)param_1 + 0x10b) = bVar2;
  *piVar1 = iVar8;
  *(undefined1 *)((int)param_1 + 0x109) = *(undefined1 *)((int)param_1 + 0x127);
  if (bVar2 < 8) {
    uVar3 = (uint)bVar2 * iVar8 + 7 >> 3;
  }
  else {
    uVar3 = (uint)(bVar2 >> 3) * iVar8;
  }
  param_1[0x41] = uVar3;
  bVar2 = *(byte *)param_1[0x3b];
  if (bVar2 != 0) {
    FUN_0044e660((int)param_1,(int)piVar1,(byte *)param_1[0x3b] + 1,(byte *)(param_1[0x3a] + 1),
                 (byte *)(uint)bVar2);
  }
  FUN_0044d8b0(param_1,(void *)param_1[0x3a],(void *)param_1[0x3b],param_1[0x36] + 1);
  if (((*(byte *)(param_1 + 0x8c) & 4) != 0) && ((char)param_1[0x8e] == '@')) {
    FUN_0044c330(piVar1,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] != 0) || ((param_1[0x1b] & 0x400000U) != 0)) {
    FUN_0044d130(param_1);
  }
  if ((*(char *)((int)param_1 + 0x123) == '\0') || ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    if (local_50 != (byte *)0x0) {
      FUN_0044def0((int)param_1,local_50,0xff);
    }
    if (param_3 != (byte *)0x0) {
      uVar3 = 0xff;
      goto LAB_0044748e;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x49) < 6) {
      FUN_0044e1f0((int)param_1);
    }
    if (param_3 != (byte *)0x0) {
      FUN_0044def0((int)param_1,param_3,local_44[*(byte *)(param_1 + 0x49)]);
    }
    if (local_50 != (byte *)0x0) {
      uVar3 = local_44[*(byte *)(param_1 + 0x49) + 7];
      param_3 = local_50;
LAB_0044748e:
      FUN_0044def0((int)param_1,param_3,uVar3);
    }
  }
  FUN_00450f70(param_1);
  if ((code *)param_1[0x66] != (code *)0x0) {
    (*(code *)param_1[0x66])(param_1,param_1[0x39],(char)param_1[0x49]);
  }
LAB_004474bf:
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}

