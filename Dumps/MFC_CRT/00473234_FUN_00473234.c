// Address: 0x00473234
// Name: FUN_00473234
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * __thiscall
FUN_00473234(void *this,undefined4 param_1,uint param_2,short param_3,undefined4 param_4,
            byte *param_5,double *param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ushort uVar4;
  void *_Dst;
  double *pdVar5;
  BSTR pOVar6;
  CVariantBoolPair *pCVar7;
  float *pfVar8;
  double *pdVar9;
  undefined1 *puVar10;
  VARIANTARG *pvarg;
  undefined1 local_88 [32];
  undefined **local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_54;
  undefined4 *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  void *local_34 [2];
  int local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  double *local_1c;
  byte *local_18;
  ushort *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  if (*(int *)this == 0) {
    return &LAB_004976b3;
  }
  local_54 = (void *)0x0;
  local_50 = (undefined4 *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_8 = 0;
  local_24 = this;
  _memset(&local_54,0,0x10);
  if (param_5 != (byte *)0x0) {
    local_4c = lstrlenA((LPCSTR)param_5);
  }
  local_20 = 0xfffffffd;
  if ((param_2 & 0xc) != 0) {
    local_50 = &local_20;
    local_48 = 1;
  }
  local_68 = CArray<CVariantBoolPair,CVariantBoolPair_const&>::vftable;
  local_64 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_4c != 0) {
    _Dst = FUN_00452728(-(uint)((int)((ulonglong)local_4c * 0x10 >> 0x20) != 0) |
                        (uint)((ulonglong)local_4c * 0x10));
    local_54 = _Dst;
    _memset(_Dst,0,local_4c << 4);
    local_14 = (ushort *)((int)_Dst + local_4c * 0x10 + -0x10);
    local_18 = param_5;
    if (*param_5 != 0) {
      pdVar9 = (double *)(local_14 + 4);
      pfVar8 = (float *)((int)param_6 + -4);
      param_6 = param_6 + -1;
      do {
        bVar1 = *local_18;
        *local_14 = (ushort)bVar1;
        if ((bVar1 & 0x40) != 0) {
          *local_14 = bVar1 & 0xffbf | 0x4000;
        }
        uVar4 = *local_14;
        if (0x4002 < uVar4) {
          switch(uVar4) {
          case 0x4003:
          case 0x4004:
          case 0x4005:
          case 0x4006:
          case 0x4007:
          case 0x4008:
          case 0x4009:
          case 0x400a:
          case 0x400c:
          case 0x400d:
          case 0x4010:
          case 0x4011:
          case 0x4012:
          case 0x4013:
          case 0x4014:
          case 0x4015:
            goto switchD_0047334d_caseD_3;
          case 0x400b:
            param_6 = (double *)((int)param_6 + 4);
            pfVar8 = pfVar8 + 1;
            puVar3 = (uint *)*pfVar8;
            *puVar3 = -(uint)(*puVar3 != 0) & 0xffff;
            *(uint **)pdVar9 = puVar3;
            local_1c = pdVar9;
            pCVar7 = (CVariantBoolPair *)
                     CVariantBoolPair::CVariantBoolPair
                               ((CVariantBoolPair *)local_34,(int *)puVar3,(short *)puVar3,0);
            local_8._0_1_ = 2;
            CArray<CVariantBoolPair,CVariantBoolPair_const&>::SetAtGrow
                      ((CArray<CVariantBoolPair,CVariantBoolPair_const&> *)&local_68,local_60,pCVar7
                      );
            local_8 = CONCAT31(local_8._1_3_,1);
            if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
              _free(local_34[0]);
            }
          }
          goto switchD_0047334d_caseD_e;
        }
        if (uVar4 == 0x4002) {
switchD_0047334d_caseD_3:
          param_6 = (double *)((int)param_6 + 4);
          pfVar8 = pfVar8 + 1;
          *(float *)pdVar9 = *pfVar8;
          goto switchD_0047334d_caseD_e;
        }
        switch(uVar4) {
        case 2:
        case 0x12:
          uVar4 = *(ushort *)(pfVar8 + 1);
          goto LAB_004733eb;
        case 3:
        case 9:
        case 10:
        case 0xd:
        case 0x13:
          goto switchD_0047334d_caseD_3;
        case 4:
          param_6 = param_6 + 1;
          pfVar8 = pfVar8 + 2;
          *(float *)pdVar9 = (float)*param_6;
          break;
        case 5:
        case 7:
          param_6 = param_6 + 1;
          pfVar8 = pfVar8 + 2;
          *pdVar9 = *param_6;
          break;
        case 6:
          param_6 = (double *)((int)param_6 + 4);
          pfVar8 = pfVar8 + 1;
          pdVar5 = (double *)*pfVar8;
          goto LAB_00473378;
        case 8:
          param_6 = (double *)((int)param_6 + 4);
          pfVar8 = pfVar8 + 1;
          local_1c = (double *)*pfVar8;
          pOVar6 = SysAllocString((OLECHAR *)local_1c);
          *(BSTR *)pdVar9 = pOVar6;
          if ((local_1c != (double *)0x0) && (pOVar6 == (BSTR)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_004529b4();
          }
          break;
        case 0xb:
          uVar4 = -(ushort)(pfVar8[1] != 0.0);
LAB_004733eb:
          param_6 = (double *)((int)param_6 + 4);
          pfVar8 = pfVar8 + 1;
          *(ushort *)pdVar9 = uVar4;
          break;
        case 0xc:
          param_6 = (double *)((int)param_6 + 4);
          pfVar8 = pfVar8 + 1;
          puVar2 = (undefined4 *)*pfVar8;
          *(undefined4 *)local_14 = *puVar2;
          *(undefined4 *)(local_14 + 2) = puVar2[1];
          *(undefined4 *)(local_14 + 4) = puVar2[2];
          *(undefined4 *)(local_14 + 6) = puVar2[3];
          break;
        case 0x10:
        case 0x11:
          param_6 = (double *)((int)param_6 + 4);
          pfVar8 = pfVar8 + 1;
          *(undefined1 *)pdVar9 = *(undefined1 *)pfVar8;
          break;
        case 0x14:
        case 0x15:
          pdVar5 = param_6 + 1;
          pfVar8 = pfVar8 + 2;
          param_6 = pdVar5;
LAB_00473378:
          *(float *)pdVar9 = *(float *)pdVar5;
          *(float *)((int)pdVar9 + 4) = *(float *)((int)pdVar5 + 4);
        }
switchD_0047334d_caseD_e:
        local_14 = local_14 + -8;
        pdVar9 = pdVar9 + -2;
        local_18 = local_18 + 1;
        local_1c = pdVar9;
      } while (*local_18 != 0);
    }
  }
  puVar10 = (undefined1 *)0x0;
  FUN_0045fe88(local_44);
  if (param_3 != 0) {
    puVar10 = local_44;
  }
  _memset(local_88,0,0x20);
  local_28 = 0xffffffff;
  (**(code **)(*(int *)*local_24 + 0x18))
            ((int *)*local_24,param_1,&DAT_004ab61c,0,param_2,&local_54,puVar10,local_88,&local_28);
  CVariantBoolConverter::CopyVarBoolsIntoBOOLs((CVariantBoolConverter *)&local_68);
  if (local_4c != 0) {
    pvarg = (VARIANTARG *)(local_4c * 0x10 + -0x10 + (int)local_54);
    for (; *param_5 != 0; param_5 = param_5 + 1) {
      if (*param_5 == 8) {
        VariantClear(pvarg);
      }
      pvarg = pvarg + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_54);
}

