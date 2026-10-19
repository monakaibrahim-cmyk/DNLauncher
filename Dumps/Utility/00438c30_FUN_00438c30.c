// Address: 0x00438c30
// Name: FUN_00438c30
// Category: Utility


uint __thiscall FUN_00438c30(void *this,int *param_1,byte param_2)

{
  byte *pbVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  void *pvVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint _Size;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  size_t _Size_00;
  undefined1 uStack_10;
  undefined1 uStack_8;
  
  bVar2 = false;
  uVar4 = (**(code **)(*param_1 + 0x2c))();
  if ((uVar4 != 0xff) || (uVar4 = (**(code **)(*param_1 + 0x2c))(), uVar4 != 0xd8)) {
    return uVar4 & 0xffffff00;
  }
  iVar11 = *(int *)((int)this + 0x1fc);
  uVar4 = 0;
  do {
    if (0x13 < iVar11) {
      pcVar10 = "Too many sections in jpg file";
      for (iVar11 = 7; this = (void *)((int)this + 4), iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)this = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
      }
      *(undefined2 *)this = *(undefined2 *)pcVar10;
      return uVar4 & 0xffffff00;
    }
    iVar11 = 0;
    while (iVar5 = (**(code **)(*param_1 + 0x2c))(), iVar5 == 0xff) {
      if (5 < iVar11) {
        uVar4 = FID_conflict__wprintf("too many padding bytes\n");
        return uVar4 & 0xffffff00;
      }
      iVar11 = iVar11 + 1;
      if (6 < iVar11) {
        *(undefined4 *)((int)this + 4) = s_too_many_padding_bytes__0049cce4._0_4_;
        *(undefined4 *)((int)this + 8) = s_too_many_padding_bytes__0049cce4._4_4_;
        *(undefined4 *)((int)this + 0xc) = s_too_many_padding_bytes__0049cce4._8_4_;
        *(undefined4 *)((int)this + 0x10) = s_too_many_padding_bytes__0049cce4._12_4_;
        uVar3 = s_too_many_padding_bytes__0049cce4._16_4_;
        *(undefined4 *)((int)this + 0x14) = s_too_many_padding_bytes__0049cce4._16_4_;
        *(undefined4 *)((int)this + 0x18) = s_too_many_padding_bytes__0049cce4._20_4_;
        return uVar3 & 0xffffff00;
      }
    }
    *(int *)((int)this + *(int *)((int)this + 0x1fc) * 0xc + 0x110) = iVar5;
    iVar11 = (**(code **)(*param_1 + 0x2c))();
    uVar4 = (**(code **)(*param_1 + 0x2c))();
    _Size = iVar11 << 8 | uVar4;
    if ((int)_Size < 2) {
      *(undefined4 *)((int)this + 4) = s_invalid_marker_0049cc94._0_4_;
      uVar3 = s_invalid_marker_0049cc94._4_4_;
      *(undefined4 *)((int)this + 8) = s_invalid_marker_0049cc94._4_4_;
      *(undefined4 *)((int)this + 0xc) = s_invalid_marker_0049cc94._8_4_;
      *(undefined2 *)((int)this + 0x10) = s_invalid_marker_0049cc94._12_2_;
      *(char *)((int)this + 0x12) = s_invalid_marker_0049cc94[0xe];
      return uVar3 & 0xffffff00;
    }
    *(uint *)((int)this + (*(int *)((int)this + 0x1fc) + 0x17) * 0xc) = _Size;
    puVar6 = _malloc(_Size);
    if (puVar6 == (undefined1 *)0x0) {
      pcVar10 = "Could not allocate memory";
      for (iVar11 = 6; this = (void *)((int)this + 4), iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)this = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
      }
      *(undefined2 *)this = *(undefined2 *)pcVar10;
      return 0;
    }
    uStack_8 = (undefined1)uVar4;
    uStack_10 = (undefined1)iVar11;
    *(undefined1 **)((int)this + *(int *)((int)this + 0x1fc) * 0xc + 0x10c) = puVar6;
    puVar6[1] = uStack_8;
    *puVar6 = uStack_10;
    pbVar1 = puVar6 + 2;
    uVar4 = (**(code **)(*param_1 + 8))(pbVar1,1,_Size - 2);
    if (uVar4 != _Size - 2) {
      pcVar10 = "Premature end of file?";
      for (iVar11 = 5; puVar12 = (undefined4 *)((int)this + 4), iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        this = puVar12;
      }
      *(undefined2 *)puVar12 = *(undefined2 *)pcVar10;
      *(char *)((int)this + 6) = pcVar10[2];
      return uVar4 & 0xffffff00;
    }
    *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + 1;
    uVar4 = 0;
    switch(iVar5) {
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      uVar4 = FUN_00437f80((int)puVar6,iVar5);
      break;
    case 0xd9:
      uVar4 = FID_conflict__wprintf("No image in jpeg!\n");
      return uVar4 & 0xffffff00;
    case 0xda:
      if ((param_2 & 2) != 0) {
        iVar11 = (**(code **)(*param_1 + 0x14))();
        (**(code **)(*param_1 + 0x10))(0,2);
        iVar5 = (**(code **)(*param_1 + 0x14))();
        (**(code **)(*param_1 + 0x10))(iVar11,0);
        _Size_00 = iVar5 - iVar11;
        pvVar7 = _malloc(_Size_00);
        if (pvVar7 == (void *)0x0) {
          pcVar10 = "could not allocate data for entire image";
          for (iVar11 = 10; this = (void *)((int)this + 4), iVar11 != 0; iVar11 = iVar11 + -1) {
            *(undefined4 *)this = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          *(char *)this = *pcVar10;
          return 0;
        }
        uVar4 = (**(code **)(*param_1 + 8))(pvVar7,1,_Size_00);
        if (uVar4 != _Size_00) {
          pcVar10 = "could not read the rest of the image";
          for (iVar11 = 9; this = (void *)((int)this + 4), iVar11 != 0; iVar11 = iVar11 + -1) {
            *(undefined4 *)this = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          *(char *)this = *pcVar10;
          return uVar4 & 0xffffff00;
        }
        *(void **)((int)this + *(int *)((int)this + 0x1fc) * 0xc + 0x10c) = pvVar7;
        *(size_t *)((int)this + (*(int *)((int)this + 0x1fc) + 0x17) * 0xc) = _Size_00;
        uVar4 = *(int *)((int)this + 0x1fc) * 3;
        *(undefined4 *)((int)this + *(int *)((int)this + 0x1fc) * 0xc + 0x110) = 0x123;
        *(int *)((int)this + 0x1fc) = *(int *)((int)this + 0x1fc) + 1;
      }
      return CONCAT31((int3)(uVar4 >> 8),1);
    case 0xe0:
switchD_00438dab_caseD_e0:
      iVar11 = *(int *)((int)this + 0x1fc) + -1;
      *(int *)((int)this + 0x1fc) = iVar11;
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + iVar11 * 0xc + 0x10c));
    case 0xe1:
      if ((param_2 & 1) == 0) goto LAB_00438ebe;
      uVar4 = 4;
      pbVar8 = (byte *)&DAT_0049ccdc;
      pbVar9 = pbVar1;
      do {
        if (*(int *)pbVar9 != *(int *)pbVar8) goto LAB_00438e3c;
        uVar4 = uVar4 - 4;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      } while (3 < uVar4);
      if (uVar4 == 0) {
LAB_00438ea1:
        iVar5 = 0;
      }
      else {
LAB_00438e3c:
        iVar11 = (uint)*pbVar9 - (uint)*pbVar8;
        if (iVar11 == 0) {
          if (uVar4 == 1) goto LAB_00438ea1;
          iVar11 = (uint)pbVar9[1] - (uint)pbVar8[1];
          if (iVar11 == 0) {
            if (uVar4 == 2) goto LAB_00438ea1;
            iVar11 = (uint)pbVar9[2] - (uint)pbVar8[2];
            if (iVar11 == 0) {
              if ((uVar4 == 3) || (iVar11 = (uint)pbVar9[3] - (uint)pbVar8[3], iVar11 == 0))
              goto LAB_00438ea1;
            }
          }
        }
        iVar5 = 1;
        if (iVar11 < 1) {
          iVar5 = -1;
        }
      }
      if (iVar5 != 0) {
LAB_00438ebe:
        iVar11 = *(int *)((int)this + 0x1fc) + -1;
        *(int *)((int)this + 0x1fc) = iVar11;
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + iVar11 * 0xc + 0x10c));
      }
      uVar4 = FUN_004389f0(this,pbVar1,_Size);
      *(char *)(*(int *)this + 0x4b4) = (char)uVar4;
      break;
    case 0xfe:
      if ((bVar2) || ((param_2 & 1) == 0)) goto switchD_00438dab_caseD_e0;
      uVar4 = FUN_00437ea0(this,(int)puVar6,_Size);
      bVar2 = true;
    }
    iVar11 = *(int *)((int)this + 0x1fc);
  } while( true );
}

