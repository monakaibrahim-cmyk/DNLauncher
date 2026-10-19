// Address: 0x00474a24
// Name: CCmdTarget::CallMemberFunc
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    protected: long __thiscall CCmdTarget::CallMemberFunc(struct AFX_DISPMAP_ENTRY const *,unsigned
   short,struct tagVARIANT *,struct tagDISPPARAMS *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
CCmdTarget::CallMemberFunc
          (CCmdTarget *this,AFX_DISPMAP_ENTRY *param_1,ushort param_2,tagVARIANT *param_3,
          tagDISPPARAMS *param_4,uint *param_5)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  CCmdTarget *this_00;
  bool bVar4;
  rsize_t rVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  float10 fVar20;
  undefined4 uStackY_94;
  int aiStackY_90 [3];
  uint uStackY_84;
  byte local_70 [20];
  undefined **local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  __tagBRECORD local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  CCmdTarget *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  byte local_21;
  undefined1 *local_20;
  byte *local_1c;
  undefined1 *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x474a30;
  local_38 = this;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_34,*(AFX_MODULE_STATE **)(this + 0x1c));
  local_1c = *(byte **)(param_1 + 8);
  local_8 = 0;
  local_21 = 0;
  if (local_1c == (byte *)0x0) {
    local_1c = &local_21;
  }
  rVar5 = lstrlenA((LPCSTR)local_1c);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  local_28 = (uint)*(ushort *)(param_1 + 0xc);
  if ((param_2 & 0xc) == 0) {
LAB_00474ae1:
    bVar4 = ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(param_4->cArgs << 4);
    if ((bVar4) && (param_4->cArgs < 0x8000000)) {
      local_14 = local_70;
      local_20 = local_70;
      pbVar10 = local_70;
      _memset(local_70,0,param_4->cArgs * 0x10);
      iVar6 = FUN_00474686(local_1c,(ushort)local_28);
      bVar4 = ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(iVar6 + 0x10U);
      this_00 = local_38;
      if (bVar4) {
        iVar3 = -(iVar6 + 0x10U);
        local_14 = local_70 + iVar3;
        piVar9 = (int *)0x0;
        local_5c = CArray<CVariantBoolPair,CVariantBoolPair_const&>::vftable;
        local_58 = 0;
        local_4c = 0;
        local_50 = 0;
        local_54 = 0;
        *(undefined ****)(&stack0xffffff8c + iVar3) = &local_5c;
        *(undefined1 **)(&stack0xffffff88 + iVar3) = local_20;
        *(uint **)(&stack0xffffff84 + iVar3) = param_5;
        local_8._0_1_ = 1;
        *(tagDISPPARAMS **)(local_70 + iVar3 + -0x10) = param_4;
        *(uint *)((int)&uStackY_84 + iVar3) = local_28;
        *(__tagBRECORD **)((int)aiStackY_90 + iVar3 + 8) = &local_48;
        *(byte **)((int)aiStackY_90 + iVar3 + 4) = local_1c;
        *(byte **)((int)aiStackY_90 + iVar3) = local_70 + iVar3;
        *(undefined4 *)((int)&uStackY_94 + iVar3) = 0x474b90;
        local_1c = (byte *)FUN_004747ac(this_00,*(byte **)((int)aiStackY_90 + iVar3),
                                        *(byte **)((int)aiStackY_90 + iVar3 + 4),
                                        *(VARIANTARG **)((int)aiStackY_90 + iVar3 + 8),
                                        *(short *)((int)&uStackY_84 + iVar3),
                                        *(int **)(local_70 + iVar3 + -0x10),
                                        *(int **)(&stack0xffffff84 + iVar3),
                                        *(int *)(&stack0xffffff88 + iVar3),
                                        *(CArray<CVariantBoolPair,CVariantBoolPair_const&> **)
                                         (&stack0xffffff8c + iVar3));
        if (local_1c == (byte *)0x0) {
          uVar7 = local_28 & 0xffff;
          *(int *)(&stack0xffffff8c + iVar3) = iVar6;
          *(byte **)(&stack0xffffff88 + iVar3) = local_70 + iVar3;
          pbVar10 = &stack0xffffff84;
          *(undefined4 *)(pbVar10 + iVar3) = local_2c;
          local_8 = CONCAT31(local_8._1_3_,2);
          if (uVar7 == 4) {
            pbVar14 = local_70 + iVar3 + -0x10;
            pbVar14[0] = 0xe0;
            pbVar14[1] = 0x4b;
            pbVar14[2] = 0x47;
            pbVar14[3] = 0;
            fVar20 = (float10)__AfxDispatchCall_12
                                        (*(undefined **)(pbVar10 + iVar3),
                                         *(int *)(&stack0xffffff88 + iVar3),
                                         *(int *)(&stack0xffffff8c + iVar3));
            local_38 = (CCmdTarget *)(float)fVar20;
            local_48.pvRecord = (CCmdTarget *)(float)fVar20;
          }
          else if ((uVar7 == 5) || (uVar7 == 7)) {
            pbVar13 = local_70 + iVar3 + -0x10;
            pbVar13[0] = 0xd6;
            pbVar13[1] = 0x4b;
            pbVar13[2] = 0x47;
            pbVar13[3] = 0;
            fVar20 = (float10)__AfxDispatchCall_12
                                        (*(undefined **)(pbVar10 + iVar3),
                                         *(int *)(&stack0xffffff88 + iVar3),
                                         *(int *)(&stack0xffffff8c + iVar3));
            local_48 = (__tagBRECORD)(double)fVar20;
          }
          else if (uVar7 - 0x14 < 2) {
            pbVar11 = local_70 + iVar3 + -0x10;
            pbVar11[0] = 0xc0;
            pbVar11[1] = 0x4b;
            pbVar11[2] = 0x47;
            pbVar11[3] = 0;
            local_48 = (__tagBRECORD)
                       __AfxDispatchCall_12
                                 (*(undefined **)(pbVar10 + iVar3),
                                  *(int *)(&stack0xffffff88 + iVar3),
                                  *(int *)(&stack0xffffff8c + iVar3));
          }
          else {
            pbVar12 = local_70 + iVar3 + -0x10;
            pbVar12[0] = 0xcd;
            pbVar12[1] = 0x4b;
            pbVar12[2] = 0x47;
            pbVar12[3] = 0;
            piVar9 = (int *)__AfxDispatchCall_12
                                      (*(undefined **)(pbVar10 + iVar3),
                                       *(int *)(&stack0xffffff88 + iVar3),
                                       *(int *)(&stack0xffffff8c + iVar3));
          }
          local_8._0_1_ = 1;
          local_8._1_3_ = 0;
        }
        puVar16 = pbVar10 + iVar3;
        uVar7 = 0;
        if (param_4->cArgs != 0) {
          puVar15 = pbVar10 + iVar3;
          do {
            *(undefined1 **)(puVar15 + -4) = local_20;
            puVar16 = puVar15 + -8;
            *(undefined4 *)(puVar15 + -8) = 0x474c09;
            VariantClear(*(VARIANTARG **)(puVar15 + -4));
            local_20 = local_20 + 0x10;
            uVar7 = uVar7 + 1;
            puVar15 = puVar16;
          } while (uVar7 < param_4->cArgs);
        }
        if (local_1c != (byte *)0x0) {
          local_8 = (uint)local_8._1_3_ << 8;
          *(undefined4 *)(puVar16 + -4) = 0x474c25;
          FUN_00473163((undefined4 *)&local_5c);
          local_8 = 0xffffffff;
          if (local_30 != 0) {
            *(undefined4 *)(puVar16 + -4) = local_34;
            *(undefined4 *)(puVar16 + -8) = 0;
            *(undefined4 *)(puVar16 + -0xc) = 0x474c39;
            FUN_00453641();
          }
          goto LAB_00474d1e;
        }
        *(undefined4 *)(puVar16 + -4) = 0x474c6c;
        CVariantBoolConverter::CopyBOOLsIntoVarBools((CVariantBoolConverter *)&local_5c);
        if (param_3 == (tagVARIANT *)0x0) {
          uVar7 = local_28 & 0xffff;
          if (uVar7 == 8) {
            *(int **)(puVar16 + -4) = piVar9;
            puVar19 = puVar16 + -8;
            *(undefined4 *)(puVar16 + -8) = 0x474cfc;
            SysFreeString(*(BSTR *)(puVar16 + -4));
            puVar16 = puVar19;
          }
          else if (uVar7 == 9) {
LAB_00474cdd:
            if (piVar9 != (int *)0x0) {
              iVar6 = *piVar9;
              *(int **)(puVar16 + -4) = piVar9;
              pcVar2 = *(code **)(iVar6 + 8);
              puVar17 = puVar16 + -8;
              *(undefined4 *)(puVar16 + -8) = 0x474ce7;
              (*pcVar2)();
              puVar16 = puVar17;
            }
          }
          else if (uVar7 == 0xc) {
            *(__tagBRECORD **)(puVar16 + -4) = &local_48;
            puVar18 = puVar16 + -8;
            *(undefined4 *)(puVar16 + -8) = 0x474cf3;
            VariantClear(*(VARIANTARG **)(puVar16 + -4));
            puVar16 = puVar18;
          }
          else if (uVar7 == 0xd) goto LAB_00474cdd;
        }
        else {
          (param_3->n1).n2.vt = (VARTYPE)local_28;
          switch(local_28 & 0xffff) {
          case 3:
          case 8:
          case 9:
          case 10:
          case 0xd:
          case 0x13:
            *(int **)((int)&param_3->n1 + 8) = piVar9;
            break;
          case 4:
            *(PVOID *)((int)&param_3->n1 + 8) = local_48.pvRecord;
            break;
          case 5:
          case 7:
            (param_3->n1).n2.n3.brecVal = local_48;
            break;
          case 6:
          case 0x14:
          case 0x15:
            *(PVOID *)((int)&param_3->n1 + 8) = local_48.pvRecord;
            *(IRecordInfo **)((int)&param_3->n1 + 0xc) = local_48.pRecInfo;
            break;
          case 0xb:
            piVar9 = (int *)-(uint)((short)piVar9 != 0);
          case 2:
          case 0x12:
            *(short *)((int)&param_3->n1 + 8) = (short)piVar9;
            break;
          case 0xc:
            *(PVOID *)&param_3->n1 = local_48.pvRecord;
            (param_3->n1).decVal.Hi32 = (ULONG)local_48.pRecInfo;
            *(undefined4 *)((int)&param_3->n1 + 8) = uStack_40;
            *(undefined4 *)((int)&param_3->n1 + 0xc) = uStack_3c;
            break;
          case 0x10:
          case 0x11:
            *(char *)((int)&param_3->n1 + 8) = (char)piVar9;
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)(puVar16 + -4) = 0x474d08;
        FUN_00473163(&local_5c);
        local_8 = 0xffffffff;
        if (local_30 != 0) {
          *(undefined4 *)(puVar16 + -4) = local_34;
          *(undefined4 *)(puVar16 + -8) = 0;
          *(undefined4 *)(puVar16 + -0xc) = 0x474d1c;
          FUN_00453641();
        }
        goto LAB_00474d1e;
      }
    }
  }
  else {
    bVar4 = ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(rVar5 + 3);
    if (bVar4) {
      local_14 = local_70;
      uStackY_84 = 0x474abe;
      FUN_004527b0(local_70,rVar5 + 3,local_1c,rVar5);
      uVar1 = *(undefined2 *)(param_1 + 0xc);
      local_28 = 0;
      local_70[rVar5] = 0xff;
      local_70[rVar5 + 1] = (byte)uVar1;
      local_70[rVar5 + 2] = 0;
      local_2c = *(undefined4 *)(param_1 + 0x14);
      local_1c = local_70;
      goto LAB_00474ae1;
    }
  }
  local_8 = 0xffffffff;
  if (local_30 != 0) {
    local_8 = 0xffffffff;
    FUN_00453641();
  }
LAB_00474d1e:
  lVar8 = FUN_0047b7b5();
  return lVar8;
}

