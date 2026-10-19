// Address: 0x00410c30
// Name: FUN_00410c30
// Category: Launcher


int __fastcall FUN_00410c30(void *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  LPCWSTR pWVar6;
  CSimpleStringT<wchar_t,0> *pCVar7;
  undefined4 uVar8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *pCVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  wchar_t *pwVar13;
  int local_38;
  undefined *local_34;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  int local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049aab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00418fd0(L"BeginPatch - Start");
  local_2c = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 1;
  if (*(HWND *)((int)param_1 + 0x44) != (HWND)0x0) {
    PostMessageW(*(HWND *)((int)param_1 + 0x44),0x8065,1,0);
  }
  puVar1 = FUN_0040a2b0();
  iVar3 = *(int *)(puVar1 + 0x4c);
  puVar1 = FUN_0040a2b0();
  iVar11 = *(int *)(puVar1 + 0x50);
  local_1c = iVar11;
  FUN_00418f70(L"Patch Check Version (Client Ver:%d, Server Ver:%d)");
  if ((iVar3 == -1) || (iVar11 == -1)) {
    FUN_00418fd0(L"Version Check Failed Run Fullpatch Process");
    *(undefined4 *)((int)param_1 + 0x40) = 2;
    if (*(HWND *)((int)param_1 + 0x44) != (HWND)0x0) {
      PostMessageW(*(HWND *)((int)param_1 + 0x44),0x8065,2,0);
    }
  }
  else {
    if (iVar3 == iVar11) {
      ExceptionList = local_c;
      return 1;
    }
    if (iVar3 <= iVar11) {
      iVar11 = iVar3 + 1;
      iVar5 = local_2c;
      if (iVar11 <= local_1c) {
        local_20 = iVar3 + 2;
        local_24 = local_1c - iVar3;
        local_38 = iVar11 - iVar3;
        local_28 = local_1c - iVar11;
        do {
          DAT_004cbeb8 = 0;
          DAT_004cbebc = 0;
          DAT_004cbec0 = 100;
          DAT_004cbec4 = 0;
          DAT_004cbec8 = local_38;
          DAT_004cbecc = local_24;
          puVar1 = FUN_0040a2b0();
          piVar2 = *(int **)(puVar1 + 0x20);
          if (piVar2 < *(int **)(puVar1 + 0x1c)) {
            FUN_00475b26();
          }
          puVar1 = FUN_0040a2b0();
          piVar12 = *(int **)(puVar1 + 0x1c);
          local_34 = puVar1 + 0x18;
          if (*(int **)(puVar1 + 0x20) < piVar12) {
            FUN_00475b26();
          }
          for (; (piVar12 != piVar2 && (*piVar12 != iVar11)); piVar12 = piVar12 + 1) {
          }
          puVar1 = FUN_0040a2b0();
          local_10 = *(int **)(puVar1 + 0x20);
          if (local_10 < *(int **)(puVar1 + 0x1c)) {
            FUN_00475b26();
          }
          if (local_34 != puVar1 + 0x18) {
            FUN_00475b26();
          }
          if (piVar12 == local_10) {
            *(undefined4 *)((int)param_1 + 0x40) = 3;
            if (*(HWND *)((int)param_1 + 0x44) != (HWND)0x0) {
              PostMessageW(*(HWND *)((int)param_1 + 0x44),0x8065,3,0);
            }
            iVar3 = 0;
            iVar5 = FUN_00411230(param_1,iVar11);
            while (iVar5 == 0) {
              iVar3 = iVar3 + 1;
              if (2 < iVar3) {
                if (iVar11 != local_1c) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                             &local_38);
                  local_4 = 2;
                  FUN_0040a2b0();
                  pCVar7 = (CSimpleStringT<wchar_t,0> *)FUN_00416350();
                  local_4._0_1_ = 3;
                  FUN_004060b0(pCVar7);
                  FUN_00403f30(&local_38,L"%s%08d/Patch%08d.txt");
                  local_4._0_1_ = 2;
                  FUN_00410090(&local_24);
                  uVar8 = FUN_004060b0((CSimpleStringT<wchar_t,0> *)&local_38);
                  DeleteUrlCacheEntryW(uVar8);
                  FUN_0040a2b0();
                  pCVar7 = (CSimpleStringT<wchar_t,0> *)FUN_00416370();
                  pwVar13 = L"DownTest.tmp";
                  local_4._0_1_ = 4;
                  pCVar9 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                           FUN_004060b0(pCVar7);
                  psVar10 = (short *)FUN_004060b0((CSimpleStringT<wchar_t,0> *)&local_38);
                  iVar3 = FUN_00411950(param_1,psVar10,pCVar9,pwVar13);
                  local_4 = CONCAT31(local_4._1_3_,2);
                  FUN_00410090(&local_24);
                  if (iVar3 == 0) {
                    FUN_00416610(L"DownTest.tmp");
                    FUN_00418fd0(L"Patch Version too Old Run Fullpatch Process");
                    FUN_00410090(&local_38);
                    ExceptionList = local_c;
                    return 3;
                  }
                  local_4 = 0xffffffff;
                  FUN_00410090(&local_38);
                }
                FUN_00418fd0(L"%d Version Patch Download Failed!");
                ExceptionList = local_c;
                return 0;
              }
              *(undefined4 *)((int)param_1 + 0x40) = 3;
              if (*(HWND *)((int)param_1 + 0x44) != (HWND)0x0) {
                PostMessageW(*(HWND *)((int)param_1 + 0x44),0x8065,3,0);
              }
              if (*(int *)((int)param_1 + 0x48) != 0) {
                ExceptionList = local_c;
                return 4;
              }
              iVar5 = FUN_00411230(param_1,iVar11);
            }
            if (*(int *)((int)param_1 + 0x48) != 0) {
              ExceptionList = local_c;
              return 4;
            }
            iVar3 = FUN_00412af0();
            if (iVar3 != 1) {
              ExceptionList = local_c;
              return iVar3;
            }
            DAT_004cbeb8 = 0;
            DAT_004cbebc = 0;
            DAT_004cbec0 = 100;
            DAT_004cbec4 = 0;
            *(undefined4 *)((int)param_1 + 0x40) = 7;
            if (*(int *)((int)param_1 + 0x44) != 0) {
              FUN_00410a50();
            }
            iVar5 = FUN_00412b90((int)param_1);
            local_2c = iVar5;
            if (iVar5 == 4) break;
            pWVar6 = (LPCWSTR)FUN_004060b0((CSimpleStringT<wchar_t,0> *)((int)param_1 + 0x34));
            FUN_00416610(pWVar6);
            if ((iVar5 != 1) && (iVar5 != 2)) {
              *(undefined4 *)((int)param_1 + 0x40) = 8;
              if (*(int *)((int)param_1 + 0x44) != 0) {
                FUN_00410a50();
              }
              FUN_00418fd0(L"%d Version Patch Apply Failed!");
              ExceptionList = local_c;
              return 3;
            }
            pWVar6 = (LPCWSTR)FUN_004060b0((CSimpleStringT<wchar_t,0> *)((int)param_1 + 0x30));
            FUN_00416610(pWVar6);
            FUN_00418fd0(L"%d Version Patch Apply Success!");
            puVar1 = FUN_0040a2b0();
            *(int *)(puVar1 + 0x4c) = iVar11;
            *(undefined4 *)((int)param_1 + 0x40) = 9;
            if (*(int *)((int)param_1 + 0x44) != 0) {
              FUN_00410a50();
            }
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
            CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>(local_30);
            local_4 = 5;
            FUN_0040a2b0();
            puVar4 = (undefined4 *)FUN_00416370();
            local_4._0_1_ = 6;
            FID_conflict_operator_(local_30,puVar4);
            local_4 = CONCAT31(local_4._1_3_,5);
            FUN_00410090(&local_14);
            FID_conflict_operator_(local_30,L"Version.cfg");
            iVar3 = FUN_00414dc0(iVar11);
            if ((iVar3 == 0) || (iVar3 = FUN_00415060(local_30,iVar11), iVar3 == 0)) {
              local_2c = 0;
              local_4 = 0xffffffff;
              FUN_00410090((int *)local_30);
              iVar5 = local_2c;
              break;
            }
            local_4 = 0xffffffff;
            FUN_00410090((int *)local_30);
            if (iVar5 == 2) break;
          }
          else {
            piVar2 = (int *)FUN_00453ed1();
            if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00403200((undefined4 *)0x80004005);
            }
            iVar3 = (**(code **)(*piVar2 + 0xc))();
            local_34 = (undefined *)(iVar3 + 0x10);
            local_4 = 0;
            FUN_0040a2b0();
            puVar4 = (undefined4 *)FUN_00416370();
            local_4._0_1_ = 1;
            FID_conflict_operator_(&local_34,puVar4);
            local_4 = (uint)local_4._1_3_ << 8;
            piVar2 = (int *)(iStack_18 + -4);
            LOCK();
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1 || iVar3 + -1 < 0) {
              (**(code **)(**(int **)(iStack_18 + -0x10) + 4))((undefined4 *)(iStack_18 + -0x10));
            }
            FID_conflict_operator_(&local_34,L"Version.cfg");
            puVar1 = FUN_0040a2b0();
            iVar3 = local_20;
            if (local_28 < 1) {
              *(int *)(puVar1 + 0x4c) = iVar11;
              iVar3 = FUN_00414dc0(iVar11);
              if (iVar3 != 0) {
                FUN_00415060(&local_34,iVar11);
              }
            }
            else {
              *(int *)(puVar1 + 0x4c) = local_20;
              iVar5 = FUN_00414dc0(local_20);
              if (iVar5 != 0) {
                FUN_00415060(&local_34,iVar3);
              }
              local_38 = local_38 + 1;
              local_28 = local_28 + -1;
              iVar11 = iVar11 + 1;
              local_20 = iVar3 + 1;
            }
            local_4 = 0xffffffff;
            piVar2 = (int *)(local_34 + -4);
            LOCK();
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            iVar5 = local_2c;
            if (iVar3 == 1 || iVar3 + -1 < 0) {
              (**(code **)(**(int **)(local_34 + -0x10) + 4))(local_34 + -0x10);
              iVar5 = local_2c;
            }
          }
          local_38 = local_38 + 1;
          local_28 = local_28 + -1;
          local_20 = local_20 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= local_1c);
      }
      FUN_00418fd0(L"BeginPatch - End");
      ExceptionList = local_c;
      return iVar5;
    }
  }
  ExceptionList = local_c;
  return 3;
}

