// Address: 0x00411230
// Name: FUN_00411230
// Category: Launcher


undefined4 FUN_00411230(void *param_1,int param_2)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *pCVar1;
  LPCWSTR pWVar2;
  short *psVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  CSimpleStringT<wchar_t,0> *pCVar8;
  int iVar9;
  DWORD DVar10;
  short *psVar11;
  void *pvVar12;
  int iStack_20;
  short *psStack_1c;
  void *pvStack_18;
  short *psStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a490;
  local_c = ExceptionList;
  uVar4 = DAT_004c3750 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FUN_00418fd0(L"Patch Step 1 - DownloadPatch Start");
  piVar5 = (int *)FUN_00453ed1();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar6 = (**(code **)(*piVar5 + 0xc))(uVar4);
  pvStack_18 = (void *)(iVar6 + 0x10);
  uStack_4 = 0;
  FUN_00403f30(&pvStack_18,L"%08d");
  if (1 < *(int *)((int)pvStack_18 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&pvStack_18,*(int *)((int)pvStack_18 + -0xc));
  }
  pvVar12 = pvStack_18;
  FUN_00418fd0(L"Download Patch Version [%s]");
  piVar5 = (int *)FUN_00453ed1();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iStack_20 = (**(code **)(*piVar5 + 0xc))();
  iStack_20 = iStack_20 + 0x10;
  uStack_4._0_1_ = 1;
  FUN_0040a2b0();
  puVar7 = (undefined4 *)FUN_00416350();
  uStack_4._0_1_ = 2;
  FUN_00403380(&iStack_20,(void *)*puVar7,*(int *)((int)*puVar7 + -0xc));
  uStack_4._0_1_ = 1;
  piVar5 = (int *)((int)pvStack_10 + -4);
  LOCK();
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)((int)pvStack_10 + -0x10) + 4))((undefined4 *)((int)pvStack_10 + -0x10));
  }
  FUN_00403380(&iStack_20,pvVar12,*(int *)((int)pvVar12 + -0xc));
  FUN_00403380(&iStack_20,&DAT_004b16d0,1);
  piVar5 = (int *)FUN_00453ed1();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  psStack_1c = (short *)(iVar6 + 0x10);
  uStack_4._0_1_ = 3;
  piVar5 = (int *)FUN_00453ed1();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  psStack_14 = (short *)(iVar6 + 0x10);
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  if (1 < *(int *)(iStack_20 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&iStack_20,*(int *)(iStack_20 + -0xc));
  }
  FUN_00403f30(&psStack_1c,L"%sPatch%08d.pak");
  FUN_00403f30(&psStack_14,L"Patch%08d.pak");
  if (1 < *(int *)(psStack_1c + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&psStack_1c,*(int *)(psStack_1c + -6));
  }
  psVar11 = psStack_1c;
  FUN_00418fd0(L"Patch PackFile Download Start [%s]");
  if (1 < *(int *)(psVar11 + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&psStack_1c,*(int *)(psVar11 + -6));
    psVar11 = psStack_1c;
  }
  DeleteUrlCacheEntryW(psVar11);
  FUN_0040a2b0();
  pCVar8 = (CSimpleStringT<wchar_t,0> *)FUN_00416370();
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  if (1 < *(int *)(psStack_14 + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&psStack_14,*(int *)(psStack_14 + -6));
  }
  psVar3 = psStack_14;
  if (1 < *(int *)(*(int *)pCVar8 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
  }
  pCVar1 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> **)pCVar8;
  if (1 < *(int *)(psVar11 + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&psStack_1c,*(int *)(psVar11 + -6));
    psVar11 = psStack_1c;
  }
  iVar9 = FUN_00411950(param_1,psVar11,pCVar1,psVar3);
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  piVar5 = (int *)((int)pvStack_10 + -4);
  LOCK();
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)((int)pvStack_10 + -0x10) + 4))((undefined4 *)((int)pvStack_10 + -0x10));
  }
  if (iVar9 == 0) {
    pCVar8 = (CSimpleStringT<wchar_t,0> *)((int)param_1 + 0x30);
    if (1 < *(int *)(*(int *)((int)param_1 + 0x30) + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)((int)param_1 + 0x30) + -0xc));
    }
    DVar10 = GetFileAttributesW(*(LPCWSTR *)pCVar8);
    if (DVar10 == 0xffffffff) {
      if (1 < *(int *)(*(int *)pCVar8 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
      }
      FUN_00418f70(L"Failed! GetFileAttributes=[%s]");
      goto LAB_004114f6;
    }
    FUN_00418fd0(L"Download txt File");
    piVar5 = (int *)FUN_00453ed1();
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    pvStack_10 = (void *)(iVar6 + 0x10);
    uStack_4._0_1_ = 6;
    if (1 < *(int *)(iStack_20 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_20,*(int *)(iStack_20 + -0xc));
    }
    FUN_00403f30(&pvStack_10,L"%sPatch%08d.txt");
    FUN_0040a2b0();
    pCVar8 = (CSimpleStringT<wchar_t,0> *)FUN_00416370();
    uStack_4._0_1_ = 7;
    if (1 < *(int *)(*(int *)pCVar8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
    }
    pCVar8 = (CSimpleStringT<wchar_t,0> *)((int)param_1 + 0x34);
    FUN_00403f30(pCVar8,L"%sPatch%08d.txt");
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    piVar5 = (int *)(param_2 + -4);
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 1 || iVar6 + -1 < 0) {
      (**(code **)(**(int **)(param_2 + -0x10) + 4))((undefined4 *)(param_2 + -0x10));
    }
    if (1 < *(int *)((int)pvStack_10 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pvStack_10,*(int *)((int)pvStack_10 + -0xc));
    }
    pvVar12 = pvStack_10;
    DeleteUrlCacheEntryW(pvStack_10);
    if (1 < *(int *)(*(int *)pCVar8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
    }
    pWVar2 = *(LPCWSTR *)pCVar8;
    if (1 < *(int *)((int)pvVar12 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pvStack_10,*(int *)((int)pvVar12 + -0xc));
      pvVar12 = pvStack_10;
    }
    iVar6 = FUN_00417cc0(pvVar12,pWVar2);
    if (iVar6 == 0) {
      FUN_00418fd0(L"Download txt File Success");
      if (1 < *(int *)(*(int *)pCVar8 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
      }
      DVar10 = GetFileAttributesW(*(LPCWSTR *)pCVar8);
      if (DVar10 != 0xffffffff) {
        FUN_00418fd0(L"Patch Step 1 - DownloadPatch End");
        uStack_4._0_1_ = 4;
        piVar5 = (int *)((int)pvVar12 + -4);
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)((int)pvVar12 + -0x10) + 4))((undefined4 *)((int)pvVar12 + -0x10));
        }
        uStack_4._0_1_ = 3;
        piVar5 = (int *)(psStack_14 + -2);
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(psStack_14 + -8) + 4))(psStack_14 + -8);
        }
        uStack_4._0_1_ = 1;
        piVar5 = (int *)(psStack_1c + -2);
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(psStack_1c + -8) + 4))(psStack_1c + -8);
        }
        uStack_4 = (uint)uStack_4._1_3_ << 8;
        piVar5 = (int *)(iStack_20 + -4);
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(iStack_20 + -0x10) + 4))((undefined4 *)(iStack_20 + -0x10));
        }
        uStack_4 = 0xffffffff;
        piVar5 = (int *)((int)pvStack_18 + -4);
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)((int)pvStack_18 + -0x10) + 4))
                    ((undefined4 *)((int)pvStack_18 + -0x10));
        }
        ExceptionList = local_c;
        return 1;
      }
      if (1 < *(int *)(*(int *)pCVar8 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
      }
      FUN_00418fd0(L"Failed! GetFileAttributes=[%s]");
      uStack_4._0_1_ = 4;
      piVar5 = (int *)((int)pvVar12 + -4);
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)((int)pvVar12 + -0x10) + 4))((undefined4 *)((int)pvVar12 + -0x10));
      }
      uStack_4._0_1_ = 3;
      piVar5 = (int *)(psStack_14 + -2);
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(psStack_14 + -8) + 4))(psStack_14 + -8);
      }
      uStack_4._0_1_ = 1;
      piVar5 = (int *)(psStack_1c + -2);
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(psStack_1c + -8) + 4))(psStack_1c + -8);
      }
      uStack_4 = (uint)uStack_4._1_3_ << 8;
      piVar5 = (int *)(iStack_20 + -4);
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(iStack_20 + -0x10) + 4))((undefined4 *)(iStack_20 + -0x10));
      }
      piVar5 = (int *)((int)pvStack_18 + -4);
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      goto LAB_00411579;
    }
    FUN_00418fd0(L"Download txt File Failed!");
    uStack_4._0_1_ = 4;
    piVar5 = (int *)((int)pvVar12 + -4);
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 + -1 < 1) {
      (**(code **)(**(int **)((int)pvVar12 + -0x10) + 4))((undefined4 *)((int)pvVar12 + -0x10));
    }
    uStack_4._0_1_ = 3;
    piVar5 = (int *)(psStack_14 + -2);
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    psVar11 = psStack_1c;
    if (iVar6 + -1 < 1) {
      (**(code **)(**(int **)(psStack_14 + -8) + 4))(psStack_14 + -8);
      psVar11 = psStack_1c;
    }
  }
  else {
    FUN_00418f70(L"PackFile Download Failed!");
LAB_004114f6:
    piVar5 = (int *)(psVar3 + -2);
    uStack_4._0_1_ = 3;
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 + -1 < 1) {
      (**(code **)(**(int **)(psVar3 + -8) + 4))(psVar3 + -8);
    }
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  piVar5 = (int *)(psVar11 + -2);
  LOCK();
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar6 + -1 < 1) {
    (**(code **)(**(int **)(psVar11 + -8) + 4))(psVar11 + -8);
  }
  uStack_4 = uStack_4 & 0xffffff00;
  piVar5 = (int *)(iStack_20 + -4);
  LOCK();
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar6 + -1 < 1) {
    (**(code **)(**(int **)(iStack_20 + -0x10) + 4))((undefined4 *)(iStack_20 + -0x10));
  }
  piVar5 = (int *)((int)pvStack_18 + -4);
  LOCK();
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
LAB_00411579:
  uStack_4 = 0xffffffff;
  if (iVar6 + -1 < 1) {
    (**(code **)(**(int **)((int)pvStack_18 + -0x10) + 4))((undefined4 *)((int)pvStack_18 + -0x10));
  }
  ExceptionList = local_c;
  return 0;
}

