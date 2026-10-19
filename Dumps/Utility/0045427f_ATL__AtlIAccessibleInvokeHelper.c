// Address: 0x0045427f
// Name: ATL::AtlIAccessibleInvokeHelper
// Category: Utility


/* Library Function - Single Match
    long __stdcall ATL::AtlIAccessibleInvokeHelper(struct IAccessible *,long,struct _GUID const
   &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlIAccessibleInvokeHelper
               (IAccessible *param_1,long param_2,_GUID *param_3,ulong param_4,ushort param_5,
               tagDISPPARAMS *param_6,tagVARIANT *param_7,tagEXCEPINFO *param_8,uint *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ushort uVar27;
  IAccessible *pIVar28;
  VARIANTARG **ppVVar29;
  IAccessible *pIVar30;
  tagDISPPARAMS *ptVar31;
  VARIANTARG *pVVar32;
  _union_2685 *p_Var33;
  int iVar34;
  int *piVar35;
  undefined2 in_stack_00000016;
  _union_2683 *local_48 [4];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  LONG LStack_2c;
  IRecordInfo *pIStack_28;
  _union_2683 local_24;
  _union_2683 local_14;
  
  ptVar31 = param_6;
  pIVar30 = param_1;
  iVar34 = 0;
  local_24.n2.vt = 0;
  if (param_1 == (IAccessible *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_6 == (tagDISPPARAMS *)0x0) {
    return -0x7ffdfff8;
  }
  pIVar28 = (IAccessible *)param_6->cArgs;
  if ((IAccessible *)0x5 < pIVar28) {
    return -0x7ffdfff2;
  }
  param_1 = (IAccessible *)0x0;
  if (param_6->cNamedArgs != 0) {
    param_6 = (tagDISPPARAMS *)param_6->rgdispidNamedArgs;
    do {
      ppVVar29 = &param_6->rgvarg;
      if (pIVar28 <= (IAccessible *)*ppVVar29) {
        return -0x7ffdfff2;
      }
      param_6 = (tagDISPPARAMS *)&param_6->rgdispidNamedArgs;
      param_1 = param_1 + 1;
      local_48[(int)*ppVVar29] = (_union_2683 *)((int)&ptVar31->rgvarg->n1 + iVar34);
      iVar34 = iVar34 + 0x10;
    } while (param_1 < (IAccessible *)ptVar31->cNamedArgs);
  }
  if (param_1 < pIVar28) {
    pVVar32 = ptVar31->rgvarg + (int)param_1;
    iVar34 = (int)pIVar28 - (int)param_1;
    piVar35 = (int *)(&stack0xffffffb4 + ((int)pIVar28 - (int)param_1) * 4);
    do {
      *piVar35 = (int)pVVar32;
      pVVar32 = pVVar32 + 1;
      piVar35 = piVar35 + -1;
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
  }
  iVar34 = -0x7ffdfffd;
  if (param_9 == (uint *)0x0) {
    param_9 = (uint *)&param_5;
  }
  if (param_7 == (tagVARIANT *)0x0) {
    param_7 = (tagVARIANT *)&local_24;
  }
  VariantInit((VARIANTARG *)&local_14.n2);
  switch(param_2) {
  case -0x139a:
    if (ptVar31->cArgs == 1) {
      uVar1._0_2_ = *(VARTYPE *)local_48[0];
      uVar1._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar2._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar2._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 100))
                         (pIVar30,uVar1,uVar2,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo);
      goto switchD_00454355_default;
    }
    break;
  case -0x1399:
    if (ptVar31->cArgs == 2) {
      if ((local_48[0]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[0]->n2,0,3);
        if (iVar34 < 0) goto LAB_00454575;
        local_48[0] = &local_14;
      }
      _param_5 = (local_48[0]->n2).n3.lVal;
      if ((local_48[1]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[1]->n2,0,3);
        if (iVar34 < 0) {
LAB_00454761:
          *param_9 = 1;
          goto switchD_00454355_default;
        }
        local_48[1] = &local_14;
      }
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x60))
                         (pIVar30,_param_5,(local_48[1]->n2).n3.lVal,param_7);
      goto switchD_00454355_default;
    }
    break;
  case -0x1398:
    if (ptVar31->cArgs == 2) {
      if ((local_48[0]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[0]->n2,0,3);
        if (iVar34 < 0) goto LAB_00454575;
        local_48[0] = &local_14;
      }
      uVar3._0_2_ = *(VARTYPE *)local_48[1];
      uVar3._2_2_ = *(WORD *)((int)local_48[1] + 2);
      uVar4._0_2_ = *(WORD *)((int)local_48[1] + 4);
      uVar4._2_2_ = *(WORD *)((int)local_48[1] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x5c))
                         (pIVar30,(local_48[0]->n2).n3.lVal,uVar3,uVar4,(local_48[1]->n2).n3.lVal,
                          (local_48[1]->n2).n3.brecVal.pRecInfo,param_7);
      goto switchD_00454355_default;
    }
    break;
  case -0x1397:
    if (ptVar31->cArgs == 5) {
      while ((uVar27 = (local_48[0]->n2).vt, (uVar27 & 0x4000) != 0 && ((uVar27 & 0xf) != 0))) {
        if ((uVar27 & 0xc) == 0) {
          local_14._0_4_ = (local_48[0]->n2).n3.lVal;
        }
        else {
          VariantClear((VARIANTARG *)(local_48[0]->n2).n3.punkVal);
          *(local_48[0]->n2).n3.bstrVal = L'\x03';
          local_14._0_4_ = &((local_48[0]->n2).n3.parray)->cLocks;
        }
      }
      *param_9 = 0;
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x58))
                         (pIVar30,local_14._0_4_,local_14.decVal.Hi32,local_14._8_4_,local_14._12_4_
                          ,*local_38,local_38[1],local_38[2],local_38[3]);
      goto switchD_00454355_default;
    }
    break;
  case -0x1396:
    if (ptVar31->cArgs == 2) {
      if ((local_48[0]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[0]->n2,0,3);
        if (iVar34 < 0) goto LAB_00454575;
        local_48[0] = &local_14;
      }
      uVar5._0_2_ = *(VARTYPE *)local_48[1];
      uVar5._2_2_ = *(WORD *)((int)local_48[1] + 2);
      uVar6._0_2_ = *(WORD *)((int)local_48[1] + 4);
      uVar6._2_2_ = *(WORD *)((int)local_48[1] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x54))
                         (pIVar30,(local_48[0]->n2).n3.lVal,uVar5,uVar6,(local_48[1]->n2).n3.lVal,
                          (local_48[1]->n2).n3.brecVal.pRecInfo);
      goto switchD_00454355_default;
    }
    break;
  case -0x1395:
    if (ptVar31->cArgs == 1) {
      uVar7._0_2_ = *(VARTYPE *)local_48[0];
      uVar7._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar8._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar8._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x50))
                         (pIVar30,uVar7,uVar8,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
LAB_00454718:
      if (-1 < iVar34) {
        (param_7->n1).n2.vt = 8;
      }
      goto switchD_00454355_default;
    }
    break;
  case -0x1394:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x4c))(pIVar30,param_7);
    goto switchD_00454355_default;
  case -0x1393:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x48))(pIVar30,param_7);
    goto switchD_00454355_default;
  case -0x1392:
    if (ptVar31->cArgs == 1) {
      uVar9._0_2_ = *(VARTYPE *)local_48[0];
      uVar9._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar10._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar10._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x44))
                         (pIVar30,uVar9,uVar10,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_00454718;
    }
    break;
  case -0x1391:
    if (ptVar31->cArgs == 2) {
      uVar27 = (local_48[0]->n2).vt;
      if (((uVar27 & 0x4000) != 0) && ((uVar27 & 0xc) == 0)) {
        iVar34 = -0x7ffdfffb;
LAB_00454575:
        *param_9 = 0;
        goto switchD_00454355_default;
      }
      if (uVar27 == 0x400c) {
        VariantClear((VARIANTARG *)(local_48[0]->n2).n3.punkVal);
        *(local_48[0]->n2).n3.bstrVal = L'\b';
        p_Var33 = (_union_2685 *)&((local_48[0]->n2).n3.parray)->cLocks;
      }
      else if (uVar27 == 0x4008) {
        p_Var33 = (_union_2685 *)(local_48[0]->n2).n3.lVal;
      }
      else {
        VariantClear((VARIANTARG *)&local_48[0]->n2);
        p_Var33 = &(local_48[0]->n2).n3;
        (local_48[0]->n2).vt = 8;
      }
      uVar11._0_2_ = *(VARTYPE *)local_48[1];
      uVar11._2_2_ = *(WORD *)((int)local_48[1] + 2);
      uVar12._0_2_ = *(WORD *)((int)local_48[1] + 4);
      uVar12._2_2_ = *(WORD *)((int)local_48[1] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x40))
                         (pIVar30,p_Var33,uVar11,uVar12,(local_48[1]->n2).n3.lVal,
                          (local_48[1]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_004547be;
    }
    break;
  case -0x1390:
    if (ptVar31->cArgs == 1) {
      uVar13._0_2_ = *(VARTYPE *)local_48[0];
      uVar13._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar14._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar14._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x3c))
                         (pIVar30,uVar13,uVar14,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_00454718;
    }
    break;
  case -0x138f:
    if (ptVar31->cArgs == 1) {
      uVar15._0_2_ = *(VARTYPE *)local_48[0];
      uVar15._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar16._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar16._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x38))
                         (pIVar30,uVar15,uVar16,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,param_7);
      goto switchD_00454355_default;
    }
    break;
  case -0x138e:
    if (ptVar31->cArgs == 1) {
      uVar17._0_2_ = *(VARTYPE *)local_48[0];
      uVar17._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar18._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar18._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x34))
                         (pIVar30,uVar17,uVar18,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,param_7);
      goto switchD_00454355_default;
    }
    break;
  case -0x138d:
    if (ptVar31->cArgs == 1) {
      uVar19._0_2_ = *(VARTYPE *)local_48[0];
      uVar19._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar20._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar20._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x30))
                         (pIVar30,uVar19,uVar20,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_00454718;
    }
    break;
  case -0x138c:
    if ((_param_5 & 2) == 0) {
      if ((_param_5 & 4) == 0) goto switchD_00454355_caseD_ffffec75;
      if (ptVar31->cArgs == 2) {
        local_34._0_2_ = *(VARTYPE *)local_48[0];
        local_34._2_2_ = *(WORD *)((int)local_48[0] + 2);
        uStack_30._0_2_ = *(WORD *)((int)local_48[0] + 4);
        uStack_30._2_2_ = *(WORD *)((int)local_48[0] + 6);
        LStack_2c = (local_48[0]->n2).n3.lVal;
        pIStack_28 = (local_48[0]->n2).n3.brecVal.pRecInfo;
        if ((local_48[1]->n2).vt != 8) {
          iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[1]->n2,0,3);
          if (iVar34 < 0) goto LAB_00454761;
          local_48[1] = &local_14;
        }
        iVar34 = (**(code **)(*(int *)pIVar30 + 0x6c))
                           (pIVar30,local_34,uStack_30,LStack_2c,pIStack_28,
                            (local_48[1]->n2).n3.lVal);
        goto switchD_00454355_default;
      }
    }
    else if (ptVar31->cArgs == 1) {
      uVar21._0_2_ = *(VARTYPE *)local_48[0];
      uVar21._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar22._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar22._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x2c))
                         (pIVar30,uVar21,uVar22,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_00454718;
    }
    break;
  case -0x138b:
switchD_00454355_caseD_ffffec75:
    if ((_param_5 & 2) == 0) {
      if ((_param_5 & 4) == 0) goto switchD_00454355_caseD_ffffec76;
      if (ptVar31->cArgs == 2) {
        local_34._0_2_ = *(VARTYPE *)local_48[0];
        local_34._2_2_ = *(WORD *)((int)local_48[0] + 2);
        uStack_30._0_2_ = *(WORD *)((int)local_48[0] + 4);
        uStack_30._2_2_ = *(WORD *)((int)local_48[0] + 6);
        LStack_2c = (local_48[0]->n2).n3.lVal;
        pIStack_28 = (local_48[0]->n2).n3.brecVal.pRecInfo;
        if ((local_48[1]->n2).vt != 8) {
          iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[1]->n2,0,3);
          if (iVar34 < 0) goto LAB_00454761;
          local_48[1] = &local_14;
        }
        iVar34 = (**(code **)(*(int *)pIVar30 + 0x68))
                           (pIVar30,local_34,uStack_30,LStack_2c,pIStack_28,
                            (local_48[1]->n2).n3.lVal);
        goto switchD_00454355_default;
      }
    }
    else if (ptVar31->cArgs == 1) {
      uVar23._0_2_ = *(VARTYPE *)local_48[0];
      uVar23._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar24._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar24._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x28))
                         (pIVar30,uVar23,uVar24,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_00454718;
    }
    break;
  case -0x138a:
switchD_00454355_caseD_ffffec76:
    if (ptVar31->cArgs == 1) {
      uVar25._0_2_ = *(VARTYPE *)local_48[0];
      uVar25._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar26._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar26._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x24))
                         (pIVar30,uVar25,uVar26,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_004547db;
    }
    break;
  case -0x1389:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x20))(pIVar30,(undefined1 *)((int)&param_7->n1 + 8));
LAB_004547be:
    if (-1 < iVar34) {
      (param_7->n1).n2.vt = 3;
    }
    goto switchD_00454355_default;
  case -5000:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x1c))(pIVar30,(undefined1 *)((int)&param_7->n1 + 8));
LAB_004547db:
    if (-1 < iVar34) {
      (param_7->n1).n2.vt = 9;
    }
  default:
    goto switchD_00454355_default;
  }
  iVar34 = -0x7ffdfff2;
switchD_00454355_default:
  VariantClear((VARIANTARG *)&local_14.n2);
  return iVar34;
}

