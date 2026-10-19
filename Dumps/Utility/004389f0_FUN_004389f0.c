// Address: 0x004389f0
// Name: FUN_004389f0
// Category: Utility


uint __thiscall FUN_004389f0(void *this,byte *param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 extraout_var;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte *local_4;
  
  *(undefined4 *)(*(int *)this + 0x78) = 0;
  *(undefined1 *)(*(int *)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  uVar7 = 6;
  pbVar4 = (byte *)&DAT_0049cbf0;
  pbVar6 = param_1;
  do {
    if (*(int *)pbVar6 != *(int *)pbVar4) goto LAB_00438a38;
    uVar7 = uVar7 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar6 = pbVar6 + 4;
  } while (3 < uVar7);
  if (uVar7 == 0) {
LAB_00438a95:
    iVar5 = 0;
  }
  else {
LAB_00438a38:
    iVar8 = (uint)*pbVar6 - (uint)*pbVar4;
    if (iVar8 == 0) {
      if (uVar7 == 1) goto LAB_00438a95;
      iVar8 = (uint)pbVar6[1] - (uint)pbVar4[1];
      if (iVar8 == 0) {
        if (uVar7 == 2) goto LAB_00438a95;
        iVar8 = (uint)pbVar6[2] - (uint)pbVar4[2];
        if (iVar8 == 0) {
          if ((uVar7 == 3) || (iVar8 = (uint)pbVar6[3] - (uint)pbVar4[3], iVar8 == 0))
          goto LAB_00438a95;
        }
      }
    }
    iVar5 = 1;
    if (iVar8 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 != 0) {
    *(undefined4 *)((int)this + 4) = s_Incorrect_Exif_header_0049cbd8._0_4_;
    *(undefined4 *)((int)this + 8) = s_Incorrect_Exif_header_0049cbd8._4_4_;
    *(undefined4 *)((int)this + 0xc) = s_Incorrect_Exif_header_0049cbd8._8_4_;
    uVar2 = s_Incorrect_Exif_header_0049cbd8._12_4_;
    *(undefined4 *)((int)this + 0x10) = s_Incorrect_Exif_header_0049cbd8._12_4_;
    *(undefined4 *)((int)this + 0x14) = s_Incorrect_Exif_header_0049cbd8._16_4_;
    *(undefined2 *)((int)this + 0x18) = s_Incorrect_Exif_header_0049cbd8._20_2_;
    return uVar2 & 0xffffff00;
  }
  pbVar6 = param_1 + 6;
  iVar8 = *pbVar6 - 0x49;
  if ((iVar8 == 0) && (iVar8 = param_1[7] - 0x49, iVar8 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
    if (iVar8 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 == 0) {
    *(undefined4 *)((int)this + 0x108) = 0;
  }
  else {
    uVar7 = *pbVar6 - 0x4d;
    if ((uVar7 == 0) && (uVar7 = param_1[7] - 0x4d, uVar7 == 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = 1;
      if ((int)uVar7 < 1) {
        iVar8 = -1;
      }
    }
    if (iVar8 != 0) {
      pcVar9 = "Invalid Exif alignment marker.";
      for (iVar8 = 7; puVar10 = (undefined4 *)((int)this + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        this = puVar10;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)pcVar9;
      *(char *)((int)this + 6) = pcVar9[2];
      goto LAB_00438c19;
    }
    *(undefined4 *)((int)this + 0x108) = 1;
  }
  local_4 = this;
  uVar3 = FUN_00437cb0(this,(undefined2 *)(param_1 + 8));
  if (CONCAT22(extraout_var,uVar3) != 0x2a) {
    pcVar9 = "Invalid Exif start (1)";
    for (iVar8 = 5; puVar10 = (undefined4 *)((int)this + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      this = puVar10;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar9;
    *(char *)((int)this + 6) = pcVar9[2];
    return CONCAT22(extraout_var,uVar3) & 0xffffff00;
  }
  iVar8 = thunk_FUN_00437ce0(this,(undefined4 *)(param_1 + 10));
  local_4 = param_1;
  uVar7 = FUN_00437fe0(this,(undefined2 *)(param_1 + 0xe),(undefined2 *)pbVar6,param_2 - 6U,
                       *(char **)this,(uint *)&local_4,0);
  if ((char)uVar7 != '\0') {
    if (8 < iVar8) {
      uVar7 = FUN_00437fe0(this,(undefined2 *)(param_1 + iVar8 + 6),(undefined2 *)pbVar6,
                           param_2 - 6U,*(char **)this,(uint *)&local_4,0);
      if ((char)uVar7 == '\0') goto LAB_00438c19;
    }
    iVar8 = *(int *)this;
    fVar1 = *(float *)(iVar8 + 0xa8);
    if (fVar1 != 0.0) {
      *(float *)(iVar8 + 0x8c) =
           (*(float *)(iVar8 + 0xb0) * (float)*(int *)((int)this + 0x104)) /
           *(float *)(iVar8 + 0xa8);
    }
    return CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),
                                    (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 0.0) << 0xe) >> 8),1);
  }
LAB_00438c19:
  return uVar7 & 0xffffff00;
}

