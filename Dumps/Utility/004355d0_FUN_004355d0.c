// Address: 0x004355d0
// Name: FUN_004355d0
// Category: Utility


undefined4 __thiscall
FUN_004355d0(void *this,HDC param_1,int param_2,int param_3,DWORD param_4,DWORD param_5,
            RECT *param_6)

{
  undefined1 *puVar1;
  float fVar2;
  int *piVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  HRGN pHVar7;
  HDC hdc;
  HBITMAP pHVar8;
  float *pfVar9;
  HGDIOBJ pvVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar13;
  uint uVar14;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 uVar15;
  LONG LVar16;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  DWORD cy;
  int iVar17;
  void *lpvBits;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined4 unaff_EDI;
  bool bVar20;
  float10 fVar21;
  ulonglong uVar22;
  undefined4 local_fc;
  void *local_f8;
  char local_f2;
  char local_f1;
  DWORD local_f0;
  uint local_ec;
  int local_e8;
  float local_e4;
  DWORD local_e0;
  float local_dc;
  HDC local_d8;
  undefined4 local_d4;
  DWORD local_d0;
  HDC local_cc;
  HGDIOBJ local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  BITMAPINFO local_a4;
  int local_78;
  HGDIOBJ local_74;
  tagRECT local_70;
  float local_60;
  int local_5c;
  float local_58;
  undefined1 local_54 [4];
  tagRECT local_50 [4];
  
  if ((((*(int *)((int)this + 4) == 0) || (param_1 == (HDC)0x0)) || (param_4 == 0)) ||
     ((param_5 == 0 || (*(char *)((int)this + 0x182) == '\0')))) {
    return 0;
  }
  if ((int)param_4 < 0) {
    param_4 = *(DWORD *)((int)this + 0xc);
  }
  if ((int)param_5 < 0) {
    param_5 = *(DWORD *)((int)this + 0x10);
  }
  local_f1 = -1 < *(int *)((int)this + 0x14c);
  local_f2 = *(int *)((int)this + 0x1b0) != 0;
  local_5c = SaveDC(param_1);
  if (local_5c == 0) {
    return 0;
  }
  if (param_6 != (RECT *)0x0) {
    GetClipBox(param_1,local_50);
    pHVar7 = CreateRectRgnIndirect(param_6);
    ExtSelectClipRgn(param_1,pHVar7,1);
    DeleteObject(pHVar7);
  }
  GetClipBox(param_1,&local_70);
  iVar12 = local_70.top;
  if (local_70.top <= param_3) {
    iVar12 = param_3;
  }
  if (local_70.bottom < iVar12) {
    local_bc = local_70.bottom;
  }
  else {
    local_bc = local_70.top;
    if (local_70.top <= param_3) {
      local_bc = param_3;
    }
  }
  iVar12 = local_70.left;
  if (local_70.left <= param_2) {
    iVar12 = param_2;
  }
  if (local_70.right < iVar12) {
    local_c0 = local_70.right;
  }
  else {
    local_c0 = local_70.left;
    if (local_70.left <= param_2) {
      local_c0 = param_2;
    }
  }
  iVar12 = param_2 + param_4;
  LVar16 = local_70.right;
  if (iVar12 <= local_70.right) {
    LVar16 = iVar12;
  }
  if ((local_70.left <= LVar16) && (local_70.left = local_70.right, iVar12 <= local_70.right)) {
    local_70.left = iVar12;
  }
  iVar12 = param_5 + param_3;
  LVar16 = local_70.bottom;
  if (iVar12 <= local_70.bottom) {
    LVar16 = iVar12;
  }
  if ((LVar16 < local_70.top) ||
     (local_b4 = local_70.bottom, local_70.top = iVar12, iVar12 <= local_70.bottom)) {
    local_b4 = local_70.top;
  }
  local_f0 = local_70.left - local_c0;
  cy = local_b4 - local_bc;
  local_e0 = cy;
  if (((local_f1 == '\0') && (local_f2 == '\0')) && (*(char *)((int)this + 0x181) == '\0')) {
    if ((param_4 == *(DWORD *)((int)this + 0xc)) && (param_5 == *(DWORD *)((int)this + 0x10))) {
      SetStretchBltMode(param_1,3);
      SetDIBitsToDevice(param_1,param_2,param_3,param_4,param_5,0,0,0,param_5,
                        *(void **)((int)this + 0x34),*(BITMAPINFO **)((int)this + 4),0);
      goto LAB_004360f5;
    }
    local_a4.bmiHeader.biCompression = 0;
    local_a4.bmiHeader.biSizeImage = 0;
    local_a4.bmiHeader.biXPelsPerMeter = 0;
    local_a4.bmiHeader.biYPelsPerMeter = 0;
    local_a4.bmiHeader.biClrUsed = 0;
    local_a4.bmiHeader.biClrImportant = 0;
    local_a4.bmiHeader.biSize = 0x28;
    local_a4.bmiHeader.biPlanes = 1;
    local_a4.bmiHeader.biBitCount = 0x18;
    local_a4.bmiHeader.biWidth = local_f0;
    local_a4.bmiHeader.biHeight = cy;
    hdc = CreateCompatibleDC(param_1);
    local_d8 = hdc;
    pHVar8 = CreateDIBSection(param_1,&local_a4,0,&local_f8,(HANDLE)0x0,0);
    local_c8 = SelectObject(hdc,pHVar8);
    if (local_f8 != (void *)0x0) {
      iVar12 = local_f0 * 0x18 + 0x1f;
      local_ac = (float)*(int *)((int)this + 0xc) / (float)(int)param_4;
      local_d0 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
      local_b0 = (float)*(int *)((int)this + 0x10) / (float)(int)param_5;
      if (0 < (int)local_e0) {
        local_ec = local_b4 - param_3;
        local_fc = 0.0;
        local_cc = (HDC)local_e0;
        do {
          local_dc = (float)*(int *)((int)this + 0x10) - (float)(int)local_ec * local_b0;
          FUN_00435500(local_dc);
          uVar22 = FUN_00478f90(extraout_ECX,extraout_EDX);
          local_e8 = 0;
          local_e4 = (float)((uint)uVar22 & ((int)(uint)uVar22 < 0) - 1);
          iVar17 = *(int *)((int)this + 0x30) * (int)local_e4;
          iVar12 = *(int *)((int)this + 0x34);
          puVar18 = (undefined1 *)((int)local_fc + (int)local_f8);
          if (0 < (int)local_f0) {
            local_c4 = local_c0 - param_2;
            do {
              local_dc = (float)(int)(local_c4 + local_e8) * local_ac;
              FUN_00435500(local_dc);
              uVar22 = FUN_00478f90(extraout_ECX_00,extraout_EDX_00);
              uVar13 = ((int)(uint)uVar22 < 0) - 1 & (uint)uVar22;
              if (*(int *)((int)this + 0x28) == 0) {
                puVar1 = (undefined1 *)(iVar17 + iVar12 + uVar13 * 3);
                uVar11 = *puVar1;
                uVar15 = puVar1[1];
                uVar5 = puVar1[2];
              }
              else {
                bVar4 = FUN_00436270(this,uVar13,(int)local_e4);
                pfVar9 = (float *)FUN_00436210(this,(undefined1 *)&local_74,bVar4);
                fVar2 = *pfVar9;
                local_d4._2_1_ = (undefined1)((uint)fVar2 >> 0x10);
                local_d4._1_1_ = (undefined1)((uint)fVar2 >> 8);
                local_d4._0_1_ = SUB41(fVar2,0);
                uVar5 = local_d4._2_1_;
                uVar15 = local_d4._1_1_;
                uVar11 = (undefined1)local_d4;
                local_d4 = fVar2;
              }
              *puVar18 = uVar11;
              puVar18[1] = uVar15;
              puVar18[2] = uVar5;
              local_e8 = local_e8 + 1;
              puVar18 = puVar18 + 3;
            } while (local_e8 < (int)local_f0);
          }
          local_fc = (float)((int)local_fc + local_d0);
          local_ec = local_ec - 1;
          local_cc = (HDC)((int)local_cc - 1);
        } while (local_cc != (HDC)0x0);
        local_cc = (HDC)0x0;
        hdc = local_d8;
      }
    }
    SetDIBitsToDevice(param_1,local_c0,local_bc,local_f0,local_e0,0,0,0,local_e0,local_f8,&local_a4,
                      0);
    pvVar10 = SelectObject(hdc,local_c8);
    DeleteObject(pvVar10);
  }
  else {
    local_fc = 0.0;
    FUN_00434e00(this,&local_dc);
    local_ac = (float)FUN_00434e40((int)this);
    local_d4 = 0.0;
    local_a4.bmiHeader.biCompression = 0;
    local_a4.bmiHeader.biSizeImage = 0;
    local_a4.bmiHeader.biXPelsPerMeter = 0;
    local_a4.bmiHeader.biYPelsPerMeter = 0;
    local_a4.bmiHeader.biClrUsed = 0;
    local_a4.bmiHeader.biClrImportant = 0;
    local_a4.bmiHeader.biSize = 0x28;
    local_a4.bmiHeader.biWidth = local_f0;
    local_a4.bmiHeader.biPlanes = 1;
    local_a4.bmiHeader.biBitCount = 0x18;
    local_a4.bmiHeader.biHeight = cy;
    local_cc = CreateCompatibleDC(param_1);
    pHVar8 = CreateDIBSection(param_1,&local_a4,0,&local_c8,(HANDLE)0x0,0);
    local_74 = SelectObject(local_cc,pHVar8);
    BitBlt(local_cc,0,0,local_f0,cy,param_1,local_c0,local_bc,0xcc0020);
    lpvBits = local_c8;
    if (local_c8 != (void *)0x0) {
      iVar12 = local_f0 * 0x18 + 0x1f;
      local_b0 = (float)(((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      local_e4 = *(float *)((int)this + 0xc);
      if (((float)param_4 == local_e4) && (param_5 == *(DWORD *)((int)this + 0x10))) {
        local_e8 = (*(DWORD *)((int)this + 0x10) - local_b4) + param_3;
        if (0 < (int)local_e0) {
          local_c4 = local_c0 - param_2;
          local_f8 = (void *)0x0;
          local_e4 = (float)local_e0;
          do {
            local_a8 = *(int *)((int)this + 0xc) * local_e8;
            pbVar19 = (byte *)((int)local_f8 + (int)lpvBits);
            local_ec = local_c4;
            local_d8 = (HDC)(*(int *)((int)this + 0x30) * local_e8 + local_c4 * 3 +
                            *(int *)((int)this + 0x34));
            if (0 < (int)local_f0) {
              local_d0 = local_f0;
              do {
                if (local_f2 == '\0') {
                  bVar4 = 0xff;
                }
                else {
                  bVar4 = *(byte *)(*(int *)((int)this + 0x1b0) + local_ec + local_a8);
                }
                iVar12 = (*(byte *)((int)this + 0x180) + 1) * (uint)bVar4;
                bVar4 = (byte)((uint)iVar12 >> 8);
                if (*(int *)((int)this + 0x28) == 0) {
                  piVar3 = &local_d8->unused;
                  local_d8 = (HDC)((int)&local_d8->unused + 3);
                  local_fc = (float)CONCAT13(local_fc._3_1_,(int3)*piVar3);
                }
                else {
                  bVar6 = FUN_00436270(this,local_ec,local_e8);
                  local_d4 = (float)(uint)bVar6;
                  pfVar9 = (float *)FUN_00436210(this,(undefined1 *)&local_78,bVar6);
                  local_fc = *pfVar9;
                  if (*(char *)((int)this + 0x181) != '\0') {
                    bVar4 = (byte)((((uint)local_fc >> 0x18) + 1) * (iVar12 >> 8 & 0xffU) >> 8);
                  }
                }
                if (*(int *)((int)this + 0x28) == 0) {
                  bVar20 = local_fc == local_dc;
                }
                else {
                  bVar20 = local_d4 == local_ac;
                }
                if (((!bVar20) || (local_f1 == '\0')) && (bVar4 != 0)) {
                  if (bVar4 == 0xff) {
                    *pbVar19 = (byte)local_fc;
                    pbVar19[1] = local_fc._1_1_;
                    pbVar19[2] = local_fc._2_1_;
                  }
                  else {
                    uVar14 = (uint)bVar4;
                    uVar13 = (uint)(byte)~bVar4;
                    *pbVar19 = (byte)(*pbVar19 * uVar13 + ((uint)local_fc & 0xff) * uVar14 >> 8);
                    pbVar19[1] = (byte)(pbVar19[1] * uVar13 + local_fc._1_1_ * uVar14 >> 8);
                    pbVar19[2] = (byte)(pbVar19[2] * uVar13 + local_fc._2_1_ * uVar14 >> 8);
                  }
                }
                pbVar19 = pbVar19 + 3;
                local_ec = local_ec + 1;
                local_d0 = local_d0 - 1;
              } while (local_d0 != 0);
              local_d0 = 0;
              lpvBits = local_c8;
            }
            local_f8 = (void *)((int)local_f8 + (int)local_b0);
            local_e8 = local_e8 + 1;
            local_e4 = (float)((int)local_e4 - 1);
          } while (local_e4 != 0.0);
          local_e4 = 0.0;
        }
      }
      else {
        local_60 = (float)(int)local_e4 / (float)(int)param_4;
        local_58 = (float)*(int *)((int)this + 0x10) / (float)(int)param_5;
        if (0 < (int)local_e0) {
          local_ec = local_b4 - param_3;
          local_d8 = (HDC)0x0;
          local_d0 = local_e0;
          do {
            local_e4 = (float)*(int *)((int)this + 0x10) - (float)(int)local_ec * local_58;
            FUN_00435500(local_e4);
            uVar22 = FUN_00478f90(extraout_ECX_01,extraout_EDX_01);
            local_e8 = 0;
            local_e4 = (float)(((int)(uint)uVar22 < 0) - 1 & (uint)uVar22);
            local_a8 = *(int *)((int)this + 0xc) * (int)local_e4;
            pbVar19 = (byte *)((int)&local_d8->unused + (int)lpvBits);
            local_78 = *(int *)((int)this + 0x30) * (int)local_e4 + *(int *)((int)this + 0x34);
            if (0 < (int)local_f0) {
              local_c4 = local_c0 - param_2;
              do {
                local_f8 = (void *)((float)(int)(local_c4 + local_e8) * local_60);
                fVar21 = FUN_00479040((double)(float)local_f8,(short)unaff_EDI);
                local_f8 = (void *)(float)fVar21;
                uVar22 = FUN_00478f90(extraout_ECX_02,extraout_EDX_02);
                local_f8 = (void *)((uint)uVar22 & ((int)(uint)uVar22 < 0) - 1);
                if (local_f2 == '\0') {
                  bVar4 = 0xff;
                }
                else {
                  bVar4 = *(byte *)((int)local_f8 + local_a8 + *(int *)((int)this + 0x1b0));
                }
                iVar12 = (*(byte *)((int)this + 0x180) + 1) * (uint)bVar4;
                bVar4 = (byte)((uint)iVar12 >> 8);
                if (*(int *)((int)this + 0x28) == 0) {
                  local_fc = (float)CONCAT13(local_fc._3_1_,
                                             *(undefined3 *)(local_78 + (int)local_f8 * 3));
                }
                else {
                  bVar6 = FUN_00436270(this,(uint)local_f8,(int)local_e4);
                  local_d4 = (float)(uint)bVar6;
                  bVar6 = FUN_00436270(this,(uint)local_f8,(int)local_e4);
                  pfVar9 = (float *)FUN_00436210(this,local_54,bVar6);
                  local_fc = *pfVar9;
                  if (*(char *)((int)this + 0x181) != '\0') {
                    bVar4 = (byte)((((uint)local_fc >> 0x18) + 1) * (iVar12 >> 8 & 0xffU) >> 8);
                  }
                }
                if (*(int *)((int)this + 0x28) == 0) {
                  bVar20 = local_fc == local_dc;
                }
                else {
                  bVar20 = local_d4 == local_ac;
                }
                if (((!bVar20) || (local_f1 == '\0')) && (bVar4 != 0)) {
                  if (bVar4 == 0xff) {
                    *pbVar19 = (byte)local_fc;
                    pbVar19[1] = local_fc._1_1_;
                    pbVar19[2] = local_fc._2_1_;
                  }
                  else {
                    uVar14 = (uint)bVar4;
                    uVar13 = (uint)(byte)~bVar4;
                    *pbVar19 = (byte)(*pbVar19 * uVar13 + ((uint)local_fc & 0xff) * uVar14 >> 8);
                    pbVar19[1] = (byte)(pbVar19[1] * uVar13 + local_fc._1_1_ * uVar14 >> 8);
                    pbVar19[2] = (byte)(pbVar19[2] * uVar13 + local_fc._2_1_ * uVar14 >> 8);
                  }
                }
                pbVar19 = pbVar19 + 3;
                local_e8 = local_e8 + 1;
                lpvBits = local_c8;
              } while (local_e8 < (int)local_f0);
            }
            local_d8 = (HDC)((int)&local_d8->unused + (int)local_b0);
            local_ec = local_ec - 1;
            local_d0 = local_d0 - 1;
          } while (local_d0 != 0);
        }
      }
    }
    SetDIBitsToDevice(param_1,local_c0,local_bc,local_f0,local_e0,0,0,0,local_e0,lpvBits,&local_a4,0
                     );
    hdc = local_cc;
    pvVar10 = SelectObject(local_cc,local_74);
    DeleteObject(pvVar10);
  }
  DeleteDC(hdc);
LAB_004360f5:
  if (param_6 != (RECT *)0x0) {
    pHVar7 = CreateRectRgnIndirect(local_50);
    ExtSelectClipRgn(param_1,pHVar7,2);
    DeleteObject(pHVar7);
  }
  RestoreDC(param_1,local_5c);
  return 1;
}

