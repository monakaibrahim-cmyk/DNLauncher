// Address: 0x0046f5f6
// Name: CDataSourceControl::ToVariant
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: class COleVariant __thiscall CDataSourceControl::ToVariant(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDataSourceControl::ToVariant(CDataSourceControl *this,int param_1)

{
  CDynamicAccessor *this_00;
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  _union_2685 *p_Var4;
  undefined4 *puVar5;
  uint *puVar6;
  long *plVar7;
  tagVARIANT *ptVar8;
  short *psVar9;
  undefined1 *puVar10;
  _union_2683 *pvarg;
  LPCSTR pCVar11;
  int *piVar12;
  ulong uVar13;
  ulong in_stack_00000008;
  COleDateTime local_148 [12];
  VARIANTARG local_13c;
  VARIANTARG local_12c;
  _union_2683 local_11c;
  _union_2683 local_10c;
  _union_2683 local_fc;
  _union_2683 local_ec;
  _union_2683 local_dc;
  _union_2683 local_cc;
  _union_2683 local_bc;
  _union_2683 local_ac;
  _union_2683 local_9c;
  _union_2683 local_8c;
  void *local_7c;
  uint local_74;
  _union_2683 local_70;
  _union_2683 local_60;
  _union_2683 local_50;
  uint local_40;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  tagVARIANT local_34;
  COleVariant *local_24;
  ulong local_20;
  undefined2 local_1c;
  char local_1a;
  undefined1 uStack_19;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&local_70;
  pvarg = &local_70;
  local_70._0_4_ = 0xcc;
  local_74 = 0x46f617;
  local_24 = (COleVariant *)param_1;
  local_40 = 0;
  if ((*(int *)(this + 0x48) == 0) || (*(int *)(this + 0x54) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  FUN_0045fe88(&local_34);
  local_74 = 0;
  local_20 = 3;
  ATL::CDynamicAccessor::GetStatus(*(CDynamicAccessor **)(this + 0x54),in_stack_00000008,&local_20);
  if (local_20 != 3) {
    this_00 = *(CDynamicAccessor **)(this + 0x54);
    uVar2 = FUN_0046b256(this_00,in_stack_00000008,(undefined2 *)&local_20);
    if ((char)uVar2 != '\0') {
      uVar3 = local_20 & 0xffff;
      if (uVar3 < 0x82) {
        if (uVar3 != 0x81) {
          if (uVar3 < 9) {
            if (uVar3 == 8) goto LAB_0046fa8e;
            if (uVar3 == 2) {
LAB_0046f7ff:
              psVar9 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
              ptVar8 = (tagVARIANT *)
                       COleVariant::COleVariant((COleVariant *)&local_11c.n2,*psVar9,2);
              local_74 = CONCAT31(local_74._1_3_,7);
              COleVariant::operator=((COleVariant *)&local_34,ptVar8);
              pvarg = &local_11c;
            }
            else if (uVar3 == 3) {
LAB_0046f7d4:
              plVar7 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
              ptVar8 = (tagVARIANT *)COleVariant::COleVariant((COleVariant *)&local_ec.n2,*plVar7,3)
              ;
              local_74 = CONCAT31(local_74._1_3_,8);
              COleVariant::operator=((COleVariant *)&local_34,ptVar8);
              pvarg = &local_ec;
            }
            else if (uVar3 == 4) {
              puVar6 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
              local_60._8_4_ = *puVar6;
              local_60.n2.vt = 4;
              local_74 = CONCAT31(local_74._1_3_,9);
              local_20 = local_60._8_4_;
              COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_60.n2);
              pvarg = &local_60;
            }
            else if (uVar3 == 5) {
              p_Var4 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
              local_9c.n2.n3 = *p_Var4;
              local_9c.n2.vt = 5;
              local_74 = CONCAT31(local_74._1_3_,10);
              COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_9c.n2);
              pvarg = &local_9c;
            }
            else if (uVar3 == 6) {
              puVar5 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
              local_50._8_4_ = *puVar5;
              local_50._12_4_ = puVar5[1];
              local_50.n2.vt = 6;
              local_74 = CONCAT31(local_74._1_3_,0xd);
              COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_50.n2);
              pvarg = &local_50;
            }
            else {
              if (uVar3 != 7) goto LAB_0046fad9;
              p_Var4 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
              local_dc.n2.n3 = *p_Var4;
              local_dc.n2.vt = 7;
              local_74 = CONCAT31(local_74._1_3_,0xc);
              COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_dc.n2);
              pvarg = &local_dc;
            }
          }
          else if (uVar3 == 0xb) {
            psVar9 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
            ptVar8 = (tagVARIANT *)
                     COleVariant::COleVariant((COleVariant *)&local_10c.n2,*psVar9,0xb);
            local_74 = CONCAT31(local_74._1_3_,0xb);
            COleVariant::operator=((COleVariant *)&local_34,ptVar8);
            pvarg = &local_10c;
          }
          else {
            if (uVar3 != 0xc) {
              if (0xf < uVar3) {
                if (uVar3 < 0x12) {
                  puVar10 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
                  local_cc._8_1_ = *puVar10;
                  local_cc.n2.vt = 0x11;
                  local_74 = CONCAT31(local_74._1_3_,6);
                  COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_cc.n2);
                  pvarg = &local_cc;
                  goto LAB_0046f882;
                }
                if (uVar3 == 0x12) goto LAB_0046f7ff;
                if (uVar3 == 0x13) goto LAB_0046f7d4;
              }
              goto LAB_0046fad9;
            }
            ptVar8 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
            ptVar8 = (tagVARIANT *)COleVariant::COleVariant((COleVariant *)&local_fc.n2,ptVar8);
            local_74 = CONCAT31(local_74._1_3_,1);
            COleVariant::operator=((COleVariant *)&local_34,ptVar8);
            pvarg = &local_fc;
          }
          goto LAB_0046f882;
        }
        pCVar11 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
        piVar12 = FUN_00416180(&local_20,pCVar11);
        local_74._0_1_ = 2;
        ptVar8 = (tagVARIANT *)
                 COleVariant::COleVariant((COleVariant *)&local_12c,(wchar_t *)*piVar12,8);
        local_74 = CONCAT31(local_74._1_3_,3);
        COleVariant::operator=((COleVariant *)&local_34,ptVar8);
        VariantClear(&local_12c);
        uVar13 = local_20;
LAB_0046face:
        local_74 = local_74 & 0xffffff00;
        FUN_004031b0((undefined4 *)(uVar13 - 0x10));
      }
      else {
        if (uVar3 == 0x82) {
LAB_0046fa8e:
          psVar9 = ATL::CDynamicAccessor::GetValue(this_00,in_stack_00000008);
          piVar12 = FUN_004035c0(&local_40,psVar9);
          local_74._0_1_ = 4;
          ptVar8 = (tagVARIANT *)
                   COleVariant::COleVariant((COleVariant *)&local_13c,(wchar_t *)*piVar12,8);
          local_74 = CONCAT31(local_74._1_3_,5);
          COleVariant::operator=((COleVariant *)&local_34,ptVar8);
          VariantClear(&local_13c);
          uVar13 = local_40;
          goto LAB_0046face;
        }
        if (uVar3 == 0x83) {
          uVar2 = FUN_0046cc3e(this_00,in_stack_00000008,(tagDB_NUMERIC *)&local_1c);
          if ((char)uVar2 != '\0') {
            local_8c.n2.n3 =
                 (_union_2685)
                 (double)CONCAT17(uStack_12,
                                  CONCAT25(uStack_14,
                                           CONCAT23(uStack_16,CONCAT21(uStack_18,uStack_19))));
            sVar1 = local_1c;
            while (local_1c._1_1_ != '\0') {
              local_1c._1_1_ = (char)((ushort)sVar1 >> 8);
              local_1c._1_1_ = local_1c._1_1_ + -1;
              local_1c._0_1_ = SUB21(sVar1,0);
              local_8c.n2.n3 = (_union_2685)((double)local_8c.n2.n3 / _DAT_004a4270);
              sVar1 = local_1c;
            }
            if (local_1a == '\0') {
              local_8c.n2.n3 = (_union_2685)-(double)local_8c.n2.n3;
            }
            local_8c.n2.vt = 5;
            local_74 = CONCAT31(local_74._1_3_,0xe);
            local_1c = sVar1;
            COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_8c.n2);
            pvarg = &local_8c;
            goto LAB_0046f882;
          }
        }
        else if (uVar3 == 0x85) {
          uVar3 = FUN_0046cc6f(this_00,in_stack_00000008,(undefined4 *)&local_3c);
          if ((char)uVar3 != '\0') {
            uStack_18 = 0;
            uStack_16 = 0;
            uStack_14 = 0;
            uStack_12 = 0;
            uStack_11 = 0;
            local_10 = 0;
            ATL::COleDateTime::SetDateTime
                      ((COleDateTime *)&uStack_18,(int)(short)local_3c,(uint)local_3a,(uint)local_38
                       ,0,0,0);
            local_70.n2.vt = 7;
            local_70._10_2_ = uStack_16;
            local_70._8_2_ = uStack_18;
            local_70._12_2_ = uStack_14;
            local_70._14_1_ = uStack_12;
            local_70._15_1_ = uStack_11;
            local_74 = CONCAT31(local_74._1_3_,0xf);
            COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_70.n2);
            goto LAB_0046f882;
          }
        }
        else if (uVar3 == 0x86) {
          uVar3 = FUN_0046cc6f(this_00,in_stack_00000008,(undefined4 *)&local_3c);
          if ((char)uVar3 != '\0') {
            uStack_18 = 0;
            uStack_16 = 0;
            uStack_14 = 0;
            uStack_12 = 0;
            uStack_11 = 0;
            local_10 = 0;
            ATL::COleDateTime::SetTime
                      ((COleDateTime *)&uStack_18,(uint)local_3c,(uint)local_3a,(uint)local_38);
            local_bc.n2.vt = 7;
            local_bc._10_2_ = uStack_16;
            local_bc._8_2_ = uStack_18;
            local_bc._12_2_ = uStack_14;
            local_bc._14_1_ = uStack_12;
            local_bc._15_1_ = uStack_11;
            local_74 = CONCAT31(local_74._1_3_,0x10);
            COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_bc.n2);
            pvarg = &local_bc;
            goto LAB_0046f882;
          }
        }
        else if ((uVar3 == 0x87) &&
                (uVar3 = FUN_0046ccab(this_00,in_stack_00000008,(undefined4 *)&local_1c),
                (char)uVar3 != '\0')) {
          p_Var4 = (_union_2685 *)
                   ATL::COleDateTime::COleDateTime
                             (local_148,(int)local_1c,(uint)CONCAT11(uStack_19,local_1a),
                              (uint)uStack_18,(uint)uStack_16,(uint)uStack_14,
                              (uint)CONCAT11(uStack_11,uStack_12));
          local_ac.n2.vt = 7;
          local_ac.n2.n3 = *p_Var4;
          local_74 = CONCAT31(local_74._1_3_,0x11);
          COleVariant::operator=((COleVariant *)&local_34,(tagVARIANT *)&local_ac.n2);
          pvarg = &local_ac;
LAB_0046f882:
          local_74 = local_74 & 0xffffff00;
          VariantClear((VARIANTARG *)&pvarg->n2);
        }
      }
LAB_0046fad9:
      COleVariant::COleVariant(local_24,&local_34);
      VariantClear(&local_34);
      goto LAB_0046faeb;
    }
  }
  COleVariant::COleVariant(local_24,&local_34);
  VariantClear(&local_34);
LAB_0046faeb:
  ExceptionList = local_7c;
  __security_check_cookie(local_8 ^ (uint)&local_70);
  return;
}

