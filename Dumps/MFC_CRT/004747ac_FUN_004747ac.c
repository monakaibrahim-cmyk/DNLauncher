// Address: 0x004747ac
// Name: FUN_004747ac
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HRESULT __thiscall
FUN_004747ac(void *this,byte *param_1,byte *param_2,VARIANTARG *param_3,short param_4,int *param_5,
            int *param_6,int param_7,CArray<CVariantBoolPair,CVariantBoolPair_const&> *param_8)

{
  VARIANTARG *pvarSrc;
  byte bVar1;
  short sVar2;
  ushort vt;
  VARIANTARG *pvargDest;
  CVariantBoolPair *pCVar3;
  uint uVar4;
  HRESULT HVar5;
  _union_2685 *p_Var6;
  void *local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4747b8;
  *(void **)param_1 = this;
  p_Var6 = (_union_2685 *)(param_1 + 4);
  if ((param_4 == 6) || (param_4 == 0xc)) {
    p_Var6->punkVal = (IUnknown *)param_3;
    p_Var6 = (_union_2685 *)(param_1 + 8);
  }
  local_1c = *param_5;
  local_18 = 0;
  _param_4 = param_5[2];
  local_14 = param_5[3];
  param_1 = param_2;
  do {
    if (*param_1 == 0) {
LAB_0047499d:
      if (_param_4 < 1) {
        if (*param_1 == 0) {
          HVar5 = 0;
        }
        else {
          *param_6 = param_5[2];
          HVar5 = -0x7ffdfff1;
        }
      }
      else {
        HVar5 = -0x7ffdfff2;
LAB_004749a8:
        *param_6 = _param_4;
      }
      return HVar5;
    }
    bVar1 = *param_1;
    vt = (ushort)bVar1;
    _param_4 = _param_4 + -1;
    if ((bVar1 != 0xff) && ((bVar1 & 0x40) != 0)) {
      vt = vt & 0xffbf | 0x4000;
    }
    if (_param_4 < local_14) {
      if (vt == 0xff) {
        _param_4 = param_5[3];
        local_14 = 0;
        local_18 = 1;
        goto switchD_0047493f_caseD_e;
      }
      if ((local_18 == 0) && (vt == 0xc)) {
        _DAT_004cadf0 = 10;
        DAT_004cadf8 = &DAT_80020004;
        pvargDest = (VARIANTARG *)&DAT_004cadf0;
        goto LAB_004748b0;
      }
      goto LAB_0047499d;
    }
    if (vt == 0xff) goto LAB_0047499d;
    pvarSrc = (VARIANTARG *)(_param_4 * 0x10 + local_1c);
    pvargDest = pvarSrc;
    if ((vt != 0xc) && (vt != (pvarSrc->n1).n2.vt)) {
      pvargDest = (VARIANTARG *)(_param_4 * 0x10 + param_7);
      HVar5 = VariantChangeType(pvargDest,pvarSrc,0,vt);
      if (HVar5 < 0) goto LAB_004749a8;
    }
LAB_004748b0:
    if ((vt & 0x4000) != 0) {
      if ((vt == 0x400b) && (param_8 != (CArray<CVariantBoolPair,CVariantBoolPair_const&> *)0x0)) {
        sVar2 = **(short **)((int)&pvargDest->n1 + 8);
        param_3 = FUN_00452728(4);
        if (param_3 == (VARIANTARG *)0x0) {
          param_3 = (VARIANTARG *)0x0;
        }
        else {
          *(uint *)&param_3->n1 = (uint)(sVar2 != 0);
        }
        pCVar3 = (CVariantBoolPair *)
                 CVariantBoolPair::CVariantBoolPair
                           ((CVariantBoolPair *)local_28,(int *)param_3,
                            *(short **)((int)&pvargDest->n1 + 8),1);
        local_8 = 0;
        CArray<CVariantBoolPair,CVariantBoolPair_const&>::SetAtGrow
                  (param_8,*(int *)(param_8 + 8),pCVar3);
        local_8 = 0xffffffff;
        if (local_20 != 0) {
                    /* WARNING: Subroutine does not return */
          _free(local_28[0]);
        }
      }
      else {
        param_3 = *(VARIANTARG **)((int)&pvargDest->n1 + 8);
      }
switchD_0047493f_caseD_c:
      p_Var6->lVal = (LONG)param_3;
      goto LAB_0047498c;
    }
    param_3 = pvargDest;
    switch(vt) {
    case 2:
      uVar4 = (uint)*(short *)((int)&pvargDest->n1 + 8);
      break;
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0x13:
      uVar4 = *(uint *)((int)&pvargDest->n1 + 8);
      break;
    case 4:
      p_Var6->lVal = *(LONG *)((int)&pvargDest->n1 + 8);
      goto LAB_0047498c;
    case 5:
    case 7:
      *p_Var6 = (pvargDest->n1).n2.n3;
      goto LAB_00474969;
    case 6:
    case 0x14:
    case 0x15:
      p_Var6->lVal = *(LONG *)((int)&pvargDest->n1 + 8);
      (&p_Var6->lVal)[1] = *(LONG *)((int)&pvargDest->n1 + 0xc);
LAB_00474969:
      p_Var6 = (_union_2685 *)(&p_Var6->lVal + 2);
      goto switchD_0047493f_caseD_e;
    case 0xb:
      uVar4 = (uint)(*(short *)((int)&pvargDest->n1 + 8) != 0);
      break;
    case 0xc:
      goto switchD_0047493f_caseD_c;
    default:
      goto switchD_0047493f_caseD_e;
    case 0x10:
      uVar4 = (uint)*(char *)((int)&pvargDest->n1 + 8);
      break;
    case 0x11:
      uVar4 = (uint)*(byte *)((int)&pvargDest->n1 + 8);
      break;
    case 0x12:
      uVar4 = (uint)*(ushort *)((int)&pvargDest->n1 + 8);
    }
    p_Var6->lVal = uVar4;
LAB_0047498c:
    p_Var6 = (_union_2685 *)(&p_Var6->lVal + 1);
switchD_0047493f_caseD_e:
    param_1 = param_1 + 1;
  } while( true );
}

