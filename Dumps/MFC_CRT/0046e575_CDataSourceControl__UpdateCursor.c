// Address: 0x0046e575
// Name: CDataSourceControl::UpdateCursor
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CDataSourceControl::UpdateCursor(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CDataSourceControl::UpdateCursor(CDataSourceControl *this)

{
  int *piVar1;
  ushort uVar2;
  CDynamicAccessor *this_00;
  undefined4 *puVar3;
  void **ppvVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  ULONG *pUVar8;
  LPSTR lpMultiByteStr;
  wchar_t *_Dst;
  errno_t eVar9;
  int iVar10;
  void *pvVar11;
  LPCSTR lpDefaultChar;
  size_t sVar12;
  void *pvVar13;
  LPBOOL lpUsedDefaultChar;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  tagDEC *local_4c;
  tagDEC local_48;
  tagVARIANT *local_38;
  VARIANTARG *local_34;
  __POSITION *local_30;
  BSTR local_2c;
  int local_28;
  int local_24;
  int local_20;
  ulong local_1c;
  uint local_18;
  undefined1 local_11 [9];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x46e581;
  local_1c = 0;
  local_20 = 0;
  if (*(int *)(this + 0x48) == 0) {
    if ((*(int *)(this + 0xc) != 0) ||
       (iVar10 = (**(code **)**(undefined4 **)(this + 8))
                           (*(undefined4 **)(this + 8),&DAT_004ab5ec,this + 0xc), -1 < iVar10)) {
      local_2c = (BSTR)0x0;
      if (0 < *(int *)(this + 0x10)) {
        local_28 = 0;
        do {
          local_30 = *(__POSITION **)(*(int *)(*(int *)(this + 0x14) + 0x24 + local_28) + 4);
          if (local_30 != (__POSITION *)0x0) {
            local_18 = local_1c * 0x30;
            do {
              ppvVar4 = CPtrList::GetNext(*(CPtrList **)(*(int *)(this + 0x14) + 0x24 + local_28),
                                          &local_30);
              pvVar6 = *ppvVar4;
              if (*(int *)((int)pvVar6 + 0xa8) != 0) {
                local_20 = local_20 + 1;
                *(int *)((int)pvVar6 + 0xa8) = 0;
                if (local_20 == 1) {
                  iVar10 = (**(code **)(**(int **)(this + 0xc) + 0x18))
                                     (*(int **)(this + 0xc),&local_34);
                  if (iVar10 < 0) {
                    return iVar10;
                  }
                  if ((local_34 == (VARIANTARG *)&DAT_00000001) &&
                     (iVar10 = (**(code **)(**(int **)(this + 0xc) + 0xc))(*(int **)(this + 0xc),1),
                     iVar10 < 0)) {
                    return iVar10;
                  }
                  *(undefined4 *)(this + 0x44) = 1;
                }
                local_24 = 0x10;
                FUN_0045fe88(&local_48);
                local_38 = (tagVARIANT *)((int)pvVar6 + 0xac);
                uVar2 = (local_38->n1).n2.vt;
                local_8 = 2;
                if (uVar2 < 2) {
LAB_0046ea7e:
                  local_24 = 0xffffffff;
LAB_0046ea82:
                  COleVariant::operator=((COleVariant *)&local_48,local_38);
                }
                else {
                  if (uVar2 != 8) {
                    if (uVar2 == 10) goto LAB_0046ea7e;
                    goto LAB_0046ea82;
                  }
                  if (**(short **)((int)pvVar6 + 0xb4) != 0) goto LAB_0046ea82;
                  local_24 = 0xffffffff;
                }
                local_60 = 0;
                local_5c = 1;
                local_58 = *(undefined4 *)(*(int *)(this + 0x3c) + local_18 + 0x2c);
                local_50 = local_24;
                local_4c = &local_48;
                local_54 = 0;
                (**(code **)(**(int **)(this + 0xc) + 0x10))
                          (*(int **)(this + 0xc),*(int *)(this + 0x3c) + local_18,&local_60);
                VariantClear(local_38);
                local_8 = 0xffffffff;
                VariantClear((VARIANTARG *)&local_48);
              }
              local_1c = local_1c + 1;
              local_18 = local_18 + 0x30;
            } while (local_30 != (__POSITION *)0x0);
          }
          local_2c = (BSTR)((int)local_2c + 1);
          local_28 = local_28 + 0x28;
        } while ((int)local_2c < *(int *)(this + 0x10));
      }
      local_30 = *(__POSITION **)(this + 0x1c);
      while (local_30 != (__POSITION *)0x0) {
        ppvVar4 = CPtrList::GetNext((CPtrList *)(this + 0x18),&local_30);
        piVar1 = *ppvVar4;
        iVar10 = *piVar1;
        if ((*(int *)(iVar10 + 0x50) != 0) &&
           (puVar3 = *(undefined4 **)(iVar10 + 0x50),
           iVar10 = (**(code **)*puVar3)(puVar3,&DAT_004ab5cc,&local_2c), -1 < iVar10)) {
          iVar10 = (**(code **)(*(int *)local_2c + 0x10))(local_2c,piVar1[2]);
          if ((iVar10 == 0) && (local_20 = local_20 + 1, local_20 == 1)) {
            iVar10 = (**(code **)(**(int **)(this + 0xc) + 0x18))(*(int **)(this + 0xc),&local_38);
            if (iVar10 < 0) {
              return iVar10;
            }
            if ((local_38 == (VARIANTARG *)&DAT_00000001) &&
               (iVar10 = (**(code **)(**(int **)(this + 0xc) + 0xc))(*(int **)(this + 0xc),1),
               iVar10 < 0)) {
              return iVar10;
            }
            *(undefined4 *)(this + 0x44) = 1;
          }
          (**(code **)(*(int *)local_2c + 8))(local_2c);
        }
      }
      if (0 < local_20) {
        iVar10 = (**(code **)(**(int **)(this + 0xc) + 0x1c))(*(int **)(this + 0xc),0,0,0);
        *(undefined4 *)(this + 0x44) = 0;
        if (iVar10 < 0) {
          (**(code **)(*(int *)this + 0x10))();
          return iVar10;
        }
      }
    }
  }
  else {
    if (*(int *)(this + 0x54) == 0) {
      return 0;
    }
    local_1c = 1;
    if (0 < *(int *)(this + 0x10)) {
      local_24 = 0x30;
      local_28 = 0x28;
      do {
        iVar10 = *(int *)(local_28 + -4 + *(int *)(this + 0x14));
        if (iVar10 != 0) {
          local_30 = *(__POSITION **)(iVar10 + 4);
          while (local_30 != (__POSITION *)0x0) {
            ppvVar4 = CPtrList::GetNext(*(CPtrList **)(local_28 + -4 + *(int *)(this + 0x14)),
                                        &local_30);
            pvVar6 = *ppvVar4;
            piVar1 = (int *)((int)pvVar6 + 0xa8);
            if (*piVar1 != 0) {
              local_20 = local_20 + 1;
              *piVar1 = 0;
              if (local_20 == 1) {
                *(undefined4 *)(this + 0x44) = 1;
              }
              uVar5 = FUN_0046b256(*(void **)(this + 0x54),local_1c,(undefined2 *)&local_18);
              if ((char)uVar5 != '\0') {
                local_34 = (VARIANTARG *)((int)pvVar6 + 0xac);
                COleVariant::COleVariant((COleVariant *)&local_48,local_34);
                iVar10 = local_24;
                local_78 = 0;
                local_74 = 0;
                local_70 = 0;
                local_6c = 0;
                local_5c = 0;
                local_54 = 0;
                local_68 = 0;
                local_4c = (tagDEC *)0x0;
                sVar12 = *(size_t *)
                          (*(int *)(*(CDynamicAccessor **)(this + 0x54) + 0x14) + 0x10 + local_24);
                local_8 = 1;
                pvVar6 = ATL::CDynamicAccessor::GetValue
                                   (*(CDynamicAccessor **)(this + 0x54),local_1c);
                FUN_00469fcc(&local_78,1,pvVar6,sVar12);
                pvVar13 = (void *)0x0;
                pvVar11 = (void *)0x0;
                iVar10 = iVar10 + *(int *)(*(CDynamicAccessor **)(this + 0x54) + 0x14);
                pvVar6 = ATL::CDynamicAccessor::GetValue
                                   (*(CDynamicAccessor **)(this + 0x54),local_1c);
                ATL::CManualAccessor::AddBindEntry
                          ((CManualAccessor *)&local_78,*(ulong *)(iVar10 + 8),
                           *(ushort *)(iVar10 + 0x14),*(ulong *)(iVar10 + 0x10),pvVar6,pvVar11,
                           pvVar13);
                ATL::CManualAccessor::BindColumns
                          ((CManualAccessor *)&local_78,(IUnknown *)**(undefined4 **)(this + 0x50));
                uVar7 = local_18 & 0xffff;
                if (uVar7 < 0x82) {
                  if (uVar7 == 0x81) {
                    COleVariant::ChangeType((COleVariant *)&local_48,8,(tagVARIANT *)0x0);
                    lpUsedDefaultChar = (LPBOOL)0x0;
                    lpDefaultChar = (LPCSTR)0x0;
                    iVar10 = *(int *)(*(int *)(*(CDynamicAccessor **)(this + 0x54) + 0x14) + 0x10 +
                                     local_24);
                    lpMultiByteStr =
                         ATL::CDynamicAccessor::GetValue
                                   (*(CDynamicAccessor **)(this + 0x54),local_1c);
                    WideCharToMultiByte(0,0,(LPCWSTR)local_48.u2.s2.Lo32,-1,lpMultiByteStr,iVar10,
                                        lpDefaultChar,lpUsedDefaultChar);
                  }
                  else if (uVar7 < 9) {
                    if (uVar7 == 8) {
                      COleVariant::ChangeType((COleVariant *)&local_48,8,(tagVARIANT *)0x0);
                      local_2c = (BSTR)0x0;
                      FUN_0046cd52(*(void **)(this + 0x54),local_1c,&local_2c);
                      SysFreeString(local_2c);
                      local_2c = SysAllocString((OLECHAR *)local_48.u2.s2.Lo32);
                      SetValue<>(*(void **)(this + 0x54),local_1c,&local_2c);
                    }
                    else {
                      if (uVar7 == 2) {
                        COleVariant::ChangeType((COleVariant *)&local_48,2,(tagVARIANT *)0x0);
                        goto LAB_0046e78c;
                      }
                      if (uVar7 == 3) {
                        COleVariant::ChangeType((COleVariant *)&local_48,3,(tagVARIANT *)0x0);
                        SetValue<>(*(void **)(this + 0x54),local_1c,(undefined4 *)&local_48.u2);
                      }
                      else if (uVar7 == 4) {
                        COleVariant::ChangeType((COleVariant *)&local_48,4,(tagVARIANT *)0x0);
                        ATL::CDynamicAccessor::SetValue<float>
                                  (*(CDynamicAccessor **)(this + 0x54),local_1c,
                                   (float *)&local_48.u2.Lo64);
                      }
                      else if (uVar7 == 5) {
                        COleVariant::ChangeType((COleVariant *)&local_48,5,(tagVARIANT *)0x0);
LAB_0046e72f:
                        ATL::CDynamicAccessor::SetValue<double>
                                  (*(CDynamicAccessor **)(this + 0x54),local_1c,&local_48.u2.Lo64);
                      }
                      else if (uVar7 == 6) {
                        COleVariant::ChangeType((COleVariant *)&local_48,6,(tagVARIANT *)0x0);
                        pUVar8 = ATL::CDynamicAccessor::GetValue
                                           (*(CDynamicAccessor **)(this + 0x54),local_1c);
                        *pUVar8 = local_48.u2.s2.Lo32;
                        pUVar8[1] = local_48.u2.s2.Mid32;
                      }
                      else if (uVar7 == 7) {
                        COleVariant::ChangeType((COleVariant *)&local_48,7,(tagVARIANT *)0x0);
                        goto LAB_0046e72f;
                      }
                    }
                  }
                  else if (uVar7 == 0xb) {
                    COleVariant::ChangeType((COleVariant *)&local_48,0xb,(tagVARIANT *)0x0);
LAB_0046e78c:
                    SetValue<>(*(void **)(this + 0x54),local_1c,(undefined2 *)&local_48.u2);
                  }
                  else if (uVar7 == 0xe) {
                    COleVariant::ChangeType((COleVariant *)&local_48,0xe,(tagVARIANT *)0x0);
                    ATL::CDynamicAccessor::SetValue<tagDEC>
                              (*(CDynamicAccessor **)(this + 0x54),local_1c,&local_48);
                  }
                  else if (uVar7 == 0x10) {
                    COleVariant::ChangeType((COleVariant *)&local_48,0x10,(tagVARIANT *)0x0);
                    local_11[0] = local_48.u2.s2.Lo32._0_1_;
                    SetValue<>(*(void **)(this + 0x54),local_1c,local_11);
                  }
                  else if (uVar7 == 0x11) {
                    COleVariant::ChangeType((COleVariant *)&local_48,0x11,(tagVARIANT *)0x0);
                    SetValue<>(*(void **)(this + 0x54),local_1c,(undefined1 *)&local_48.u2);
                  }
                  else if (uVar7 == 0x12) {
                    COleVariant::ChangeType((COleVariant *)&local_48,0x12,(tagVARIANT *)0x0);
                    SetValue<>(*(void **)(this + 0x54),local_1c,(undefined2 *)&local_48.u2);
                  }
                  else if (uVar7 == 0x13) {
                    COleVariant::ChangeType((COleVariant *)&local_48,0x13,(tagVARIANT *)0x0);
                    SetValue<>(*(void **)(this + 0x54),local_1c,(undefined4 *)&local_48.u2);
                  }
                }
                else if (uVar7 == 0x82) {
                  COleVariant::ChangeType((COleVariant *)&local_48,8,(tagVARIANT *)0x0);
                  this_00 = *(CDynamicAccessor **)(this + 0x54);
                  _Dst = ATL::CDynamicAccessor::GetValue(this_00,local_1c);
                  uVar7 = *(uint *)(*(int *)(this_00 + 0x14) + 0x10 + local_24) >> 1;
                  eVar9 = _wcsncpy_s(_Dst,uVar7,(wchar_t *)local_48.u2.s2.Lo32,uVar7 - 1);
                  ATL::AtlCrtErrorCheck(eVar9);
                }
                *(undefined4 **)(*(int *)(this + 0x50) + 8) = &local_78;
                ATL::CRowset<ATL::CAccessorBase>::SetData
                          (*(CRowset<ATL::CAccessorBase> **)(this + 0x50));
                *(undefined4 *)(*(int *)(this + 0x50) + 8) = *(undefined4 *)(this + 0x54);
                VariantClear(local_34);
                local_8 = local_8 & 0xffffff00;
                FUN_00469fb5((int)&local_78);
                local_8 = 0xffffffff;
                VariantClear((VARIANTARG *)&local_48);
              }
            }
          }
        }
        local_1c = local_1c + 1;
        local_28 = local_28 + 0x28;
        local_24 = local_24 + 0x30;
      } while ((int)local_1c <= *(int *)(this + 0x10));
      if (0 < local_20) {
        *(undefined4 *)(this + 0x44) = 0;
      }
    }
  }
  return 0;
}

