// Address: 0x00436770
// Name: FUN_00436770
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00436770(void *this,undefined4 param_1)

{
  ushort uVar1;
  size_t sVar2;
  byte bVar3;
  double dVar4;
  void *this_00;
  char *pcVar5;
  uint uVar6;
  byte *_Src;
  size_t _Size;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *pbVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  uint uVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined2 uVar16;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  void *local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  byte *local_20;
  void *local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  uint *local_c;
  char local_6 [2];
  
  local_20 = (byte *)0x0;
  local_3c = this;
  local_1c = this;
  if (this != (void *)0x0) {
    local_40 = (void *)FUN_00434b20(this,0);
  }
  local_4c = 0;
  local_50 = 0;
  local_44 = 0;
  local_48 = 0;
  local_6[1] = 0;
  local_10 = (int *)FUN_00448860("1.2.24",0,0,0);
  if (local_10 == (int *)0x0) {
    iVar7 = 0x1f;
    pcVar5 = (char *)0x0;
    bVar14 = true;
    pcVar9 = "Failed to create PNG structure";
    ppuVar12 = &PTR_004b2d68;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar14 = *pcVar9 == *(char *)ppuVar12;
      pcVar9 = pcVar9 + 1;
      ppuVar12 = (undefined **)((int)ppuVar12 + 1);
    } while (bVar14);
    local_6[1] = '\x01';
    if (!bVar14) {
      pcVar5 = _strncpy((char *)((int)this + 0x44),"Failed to create PNG structure",0xff);
    }
LAB_00436de0:
    local_6[0] = '\0';
    if (local_6[1] != '\0') {
      iVar7 = 1;
      bVar14 = true;
      pcVar9 = local_6;
      ppuVar12 = &PTR_004b2d68;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar14 = *pcVar9 == *(char *)ppuVar12;
        pcVar9 = pcVar9 + 1;
        ppuVar12 = (undefined **)((int)ppuVar12 + 1);
      } while (bVar14);
      if (!bVar14) {
        pcVar5 = _strncpy((char *)((int)this + 0x44),local_6,0xff);
      }
      if ((*(int *)((int)this + 0x148) != -1) || (*(int *)((int)this + 0x40) != 4)) {
        return (uint)pcVar5 & 0xffffff00;
      }
    }
    return CONCAT31((int3)((uint)pcVar5 >> 8),1);
  }
  local_c = (uint *)FUN_00445a40((int)local_10);
  if (local_c == (uint *)0x0) {
    FUN_00448890((int *)&local_10,(undefined4 *)0x0,(undefined4 *)0x0);
    pcVar9 = "AFailed to initialize PNG info structure";
    iVar7 = 0x28;
    pcVar5 = (char *)0x0;
    bVar14 = true;
    ppuVar12 = &PTR_004b2d68;
    do {
      pcVar9 = pcVar9 + 1;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar14 = *pcVar9 == *(char *)ppuVar12;
      ppuVar12 = (undefined **)((int)ppuVar12 + 1);
    } while (bVar14);
    local_6[1] = '\x01';
    if (!bVar14) {
      pcVar5 = _strncpy((char *)((int)this + 0x44),"Failed to initialize PNG info structure",0xff);
    }
    goto LAB_00436de0;
  }
  iVar7 = __setjmp3(local_10,0,unaff_EDI,unaff_ESI);
  uVar16 = SUB42(unaff_EDI,0);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  FUN_0044d6e0((int)local_10,param_1,0x436570);
  this_00 = local_1c;
  puVar13 = (undefined4 *)((int)local_1c + 0x44);
  FUN_004450f0((int)local_10,puVar13,&LAB_004365b0,0);
  FUN_00445d00(local_10,local_c);
  if (*(int *)((int)this_00 + 0x148) == -1) {
    *(uint *)((int)this_00 + 0xc) = *local_c;
    *(uint *)((int)this_00 + 0x10) = local_c[1];
    *(undefined4 *)((int)this_00 + 0x40) = 4;
                    /* WARNING: Subroutine does not return */
    FID_conflict____longjmp_internal(local_10,1);
  }
  switch(*(undefined1 *)((int)local_c + 0x19)) {
  case 0:
  case 3:
    uVar10 = 1;
    break;
  default:
    pcVar9 = "unknown PNG color type";
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = *(undefined2 *)pcVar9;
    *(char *)((int)puVar13 + 2) = pcVar9[2];
                    /* WARNING: Subroutine does not return */
    FID_conflict____longjmp_internal(local_10,1);
  case 2:
    uVar10 = 3;
    break;
  case 4:
    uVar10 = 2;
    break;
  case 6:
    uVar10 = 4;
  }
  uVar6 = (uint)*(byte *)((int)local_c + 0x1e);
  if ((uVar10 == 1) && (8 < uVar6)) {
    uVar6 = 8;
  }
  if (uVar10 == 2) {
    uVar6 = 8;
  }
  if (2 < uVar10) {
    uVar6 = 0x18;
  }
  local_14 = uVar10;
  iVar7 = FUN_00434c60(this_00,*local_c,local_c[1],uVar6,4);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FID_conflict____longjmp_internal(local_10,1);
  }
  if ((char)local_c[0x1e] == '\0') {
    FUN_00434e60(this_00,local_c[0x1c]);
    uVar6 = local_c[0x1d];
  }
  else {
    if ((char)local_c[0x1e] != '\x01') goto LAB_00436a32;
    dVar4 = (double)(int)local_c[0x1c];
    if ((int)local_c[0x1c] < 0) {
      dVar4 = dVar4 + _DAT_0049c9d0;
    }
    FUN_00479040((dVar4 * _DAT_0049c8f0) / _DAT_0049c8f8 + _DAT_004b4728,uVar16);
    uVar15 = FUN_00478f90(extraout_ECX,extraout_EDX);
    FUN_00434e60(this_00,(int)uVar15);
    dVar4 = (double)(int)local_c[0x1d];
    if ((int)local_c[0x1d] < 0) {
      dVar4 = dVar4 + _DAT_0049c9d0;
    }
    FUN_00479040((dVar4 * _DAT_0049c8f0) / _DAT_0049c8f8 + _DAT_004b4728,uVar16);
    uVar15 = FUN_00478f90(extraout_ECX_00,extraout_EDX_00);
    uVar6 = (uint)uVar15;
  }
  FUN_00434ec0(this_00,uVar6);
LAB_00436a32:
  if ((ushort)local_c[5] == 0) {
    if ((char)local_c[6] == '\x02') {
      FUN_004361a0(this_00,0,0,0,0,0);
      FUN_004361a0(this_00,1,0x55,0x55,0x55,0);
      FUN_004361a0(this_00,2,0xaa,0xaa,0xaa,0);
      FUN_004361a0(this_00,3,0xff,0xff,0xff,0);
    }
    else {
      FUN_004364c0((int)this_00);
    }
  }
  else {
    FUN_00436460(this_00,local_c[4],(uint)(ushort)local_c[5]);
    FUN_00436510(this_00,(uint)(ushort)local_c[5]);
  }
  uVar6 = (byte)((byte)local_c[6] >> 3) - 1;
  local_2c = (uVar6 & ((int)uVar6 < 0) - 1) * 8;
  if (*(short *)((int)local_c + 0x16) != 0) {
    if (*(short *)((int)local_c + 0x16) == 1) {
      if (*(char *)((int)local_c + 0x19) == '\x03') {
        *(uint *)((int)this_00 + 0x14c) = (uint)(byte)local_c[0x14];
      }
      else {
        *(uint *)((int)this_00 + 0x14c) =
             (uint)(ushort)((ushort)local_c[0x16] >> ((byte)local_2c & 0x1f));
      }
    }
    if ((1 < *(ushort *)((int)local_c + 0x16)) &&
       (local_18 = FUN_004361f0((int)this_00), local_18 != 0)) {
      uVar10 = 0;
      puVar11 = (undefined1 *)(local_18 + 3);
      while( true ) {
        uVar6 = *(uint *)((int)this_00 + 0x28);
        if ((uint)*(ushort *)((int)local_c + 0x16) <= *(uint *)((int)this_00 + 0x28)) {
          uVar6 = (uint)*(ushort *)((int)local_c + 0x16);
        }
        if (uVar6 <= uVar10) break;
        *puVar11 = *(undefined1 *)(uVar10 + local_c[0x13]);
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 4;
      }
      uVar10 = (uint)*(ushort *)((int)local_c + 0x16);
      if (uVar10 < *(uint *)((int)this_00 + 0x28)) {
        puVar11 = (undefined1 *)(local_18 + 3 + uVar10 * 4);
        do {
          *puVar11 = 0xff;
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 4;
        } while (uVar10 < *(uint *)((int)this_00 + 0x28));
      }
      *(undefined1 *)((int)this_00 + 0x181) = 1;
      uVar10 = local_14;
    }
  }
  if ((uVar10 == 3) &&
     (iVar7 = FUN_0044d600((int)local_10,(int)local_c,&local_38,&local_34,&local_30), iVar7 != 0)) {
    bVar3 = (byte)local_2c;
    *(char *)((int)this_00 + 0x152) = (char)(*(ushort *)((int)local_c + 0x52) >> (bVar3 & 0x1f));
    *(char *)((int)this_00 + 0x151) = (char)((ushort)local_c[0x15] >> (bVar3 & 0x1f));
    uVar1 = *(ushort *)((int)local_c + 0x56);
    *(undefined1 *)((int)this_00 + 0x153) = 0;
    *(undefined4 *)((int)this_00 + 0x14c) = 0;
    *(char *)((int)this_00 + 0x150) = (char)(uVar1 >> (bVar3 & 0x1f));
    uVar10 = local_14;
  }
  uVar10 = uVar10 - 1 & 0x80000001;
  bVar14 = uVar10 == 0;
  if ((int)uVar10 < 0) {
    bVar14 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar14) {
    FUN_00448e70((int)local_10);
  }
  if ((*(byte *)((int)local_c + 0x19) & 2) != 0) {
    FUN_00448960((int)local_10);
  }
  if (*(int *)((int)this_00 + 0x148) != 0) {
LAB_00436c25:
                    /* WARNING: Subroutine does not return */
    FID_conflict____longjmp_internal(local_10,1);
  }
  _Src = FUN_00452728(local_c[3] + 8);
  local_20 = _Src;
  iVar7 = FUN_00448970((int)local_10);
  local_2c = iVar7;
  FUN_00435020((uint)(1 < iVar7),0);
  local_24 = (uint)(byte)((byte)local_c[6] >> 3);
  local_18 = 0;
  if (0 < iVar7) {
    do {
      FUN_004365e0(&local_50);
      local_28 = 0;
      do {
        if (*(int *)((int)this_00 + 0x148) != 0) goto LAB_00436c25;
        if (((((char)local_c[7] != '\0') && (0 < local_18)) &&
            (FUN_00436680(&local_50,_Src,local_c[3]), 8 < (byte)local_c[6])) &&
           (iVar7 = *(int *)((int)this_00 + 0xc) * local_14 + -1, -1 < iVar7)) {
          pbVar8 = _Src + iVar7 * local_24;
          do {
            *pbVar8 = _Src[iVar7];
            iVar7 = iVar7 + -1;
            pbVar8 = pbVar8 + -local_24;
          } while (-1 < iVar7);
        }
        FUN_00446fa0(local_10,_Src,(byte *)0x0);
        if ((8 < (byte)local_c[6]) &&
           (iVar7 = 0, pbVar8 = _Src, 0 < (int)(*(int *)((int)this_00 + 0xc) * local_14))) {
          do {
            _Src[iVar7] = *pbVar8;
            iVar7 = iVar7 + 1;
            pbVar8 = pbVar8 + local_24;
          } while (iVar7 < (int)(*(int *)((int)this_00 + 0xc) * local_14));
        }
        sVar2 = local_c[3];
        _Size = FUN_00434f30((int)local_3c);
        if ((-1 < (int)sVar2) && (bVar14 = (int)_Size <= (int)sVar2, _Size = sVar2, bVar14)) {
          _Size = FUN_00434f30((int)local_3c);
        }
        if (((local_40 != (void *)0x0) && (_Src != (byte *)0x0)) && (0 < (int)_Size)) {
          _memcpy(local_40,_Src,_Size);
        }
        if (((char)local_c[6] == '\x02') && (local_18 == local_2c + -1)) {
          FUN_004366e0(this_00,(int)local_40);
        }
        local_4c = local_4c + -1;
        if (-1 < local_4c) {
          iVar7 = FUN_00434f30((int)local_3c);
          local_40 = (void *)((int)local_40 - iVar7);
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)((int)this_00 + 0x10));
      local_18 = local_18 + 1;
    } while (local_18 < local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Src);
}

