// Address: 0x00405510
// Name: FUN_00405510
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00405510(void)

{
  CStringData *pCVar1;
  int *piVar2;
  int *piVar3;
  LPCWSTR pWVar4;
  WCHAR WVar5;
  HANDLE pvVar6;
  int *piVar7;
  int iVar8;
  CStringData *pCVar9;
  CStringData *pCVar10;
  WCHAR *pWVar11;
  BOOL BVar12;
  undefined4 *puVar13;
  short *psVar14;
  int iVar15;
  void *pvVar16;
  uint uVar17;
  undefined1 auStack_1504 [4];
  CStringData *pCStack_1500;
  HANDLE pvStack_14fc;
  undefined1 auStack_14f8 [4];
  int *piStack_14f4;
  int *piStack_14f0;
  int iStack_14ec;
  LPCWSTR pWStack_14e8;
  void *pvStack_14e4;
  undefined1 auStack_14e0 [4];
  int *piStack_14dc;
  int *piStack_14d8;
  undefined4 uStack_14d4;
  uint auStack_14d0 [3];
  int aiStack_14c4 [2];
  tm tStack_14bc;
  _WIN32_FIND_DATAW _Stack_1498;
  wchar_t local_1248;
  undefined1 local_1246 [518];
  WCHAR local_1040;
  undefined1 local_103e [518];
  wchar_t local_e38;
  undefined1 local_e36 [518];
  wchar_t local_c30;
  undefined1 local_c2e [518];
  wchar_t local_a28;
  undefined1 local_a26 [518];
  wchar_t awStack_820 [1026];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c._0_1_ = 0xff;
  iStack_c._1_3_ = 0xffffff;
  puStack_10 = &LAB_0049a642;
  local_14 = ExceptionList;
  local_1c = DAT_004c3750 ^ (uint)auStack_1504;
  ExceptionList = &local_14;
  local_1040 = L'\0';
  _memset(local_103e,0,0x206);
  GetModuleFileNameW((HMODULE)0x0,&local_1040,0x104);
  local_e38 = L'\0';
  _memset(local_e36,0,0x206);
  local_1248 = L'\0';
  _memset(local_1246,0,0x206);
  local_c30 = L'\0';
  _memset(local_c2e,0,0x206);
  local_a28 = L'\0';
  _memset(local_a26,0,0x206);
  FID_conflict___splitpath(&local_1040,&local_e38,&local_1248,&local_c30,&local_a28);
  piVar7 = (int *)FUN_00453ed1();
  if (piVar7 != (int *)0x0) {
    iVar8 = (**(code **)(*piVar7 + 0xc))();
    pvStack_14e4 = (void *)(iVar8 + 0x10);
    iStack_c = 0;
    FUN_00403f30(&pvStack_14e4,L"%s%s\\Log\\");
    piVar7 = (int *)FUN_00453ed1();
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    iVar8 = (**(code **)(*piVar7 + 0xc))();
    pWStack_14e8 = (LPCWSTR)(iVar8 + 0x10);
    iStack_c = CONCAT31(iStack_c._1_3_,1);
    FID_conflict_operator_(&pWStack_14e8,&pvStack_14e4);
    FUN_004019b0("DNLauncher_*_Log.txt");
    if (1 < *(int *)(pWStack_14e8 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_14e8,*(int *)(pWStack_14e8 + -6));
    }
    pvStack_14fc = FindFirstFileW(pWStack_14e8,&_Stack_1498);
    piStack_14f4 = (int *)0x0;
    piStack_14f0 = (int *)0x0;
    iStack_14ec = 0;
    iStack_c._0_1_ = 2;
    pvVar16 = pvStack_14e4;
    if (pvStack_14fc != (HANDLE)0xffffffff) {
      do {
        if (((byte)_Stack_1498.dwFileAttributes & 0x10) == 0) {
          piVar7 = (int *)FUN_00453ed1();
          if (piVar7 == (int *)0x0) goto LAB_00405641;
          pCVar9 = (CStringData *)(**(code **)(*piVar7 + 0xc))();
          pCStack_1500 = pCVar9 + 0x10;
          pCVar10 = (CStringData *)((int)pvVar16 + -0x10);
          iStack_c = CONCAT31(iStack_c._1_3_,3);
          if (pCVar10 != pCVar9) {
            pCVar1 = pCVar9 + 0xc;
            if ((*(int *)(pCVar9 + 0xc) < 0) || (*(int *)pCVar10 != *(int *)pCVar9)) {
              FUN_00403520(&pCStack_1500,pvVar16,*(int *)((int)pvVar16 + -0xc));
            }
            else {
              pCVar10 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar10);
              LOCK();
              iVar8 = *(int *)pCVar1;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              UNLOCK();
              if (iVar8 == 1 || iVar8 + -1 < 0) {
                (**(code **)(**(int **)pCVar9 + 4))(pCVar9);
              }
              pCStack_1500 = pCVar10 + 0x10;
              pvVar16 = pvStack_14e4;
            }
          }
          pWVar11 = _Stack_1498.cFileName;
          do {
            WVar5 = *pWVar11;
            pWVar11 = pWVar11 + 1;
          } while (WVar5 != L'\0');
          FUN_00403380(&pCStack_1500,_Stack_1498.cFileName,
                       (int)pWVar11 - (int)(_Stack_1498.cFileName + 1) >> 1);
          piVar7 = piStack_14f0;
          if ((piStack_14f4 == (int *)0x0) ||
             ((uint)(iStack_14ec - (int)piStack_14f4 >> 2) <=
              (uint)((int)piStack_14f0 - (int)piStack_14f4 >> 2))) {
            if (piStack_14f0 < piStack_14f4) {
              FUN_00475b26();
            }
            FUN_004063b0(aiStack_14c4,(CStringData *)&pCStack_1500,(int)auStack_14f8,piVar7);
          }
          else {
            auStack_14d0[0] = auStack_14d0[0] & 0xffffff00;
            FUN_00406d80(&DAT_00000001,piStack_14f0,(int *)&pCStack_1500);
            piStack_14f0 = piVar7 + 1;
          }
          iStack_c._0_1_ = 2;
          pCVar10 = pCStack_1500 + -4;
          LOCK();
          iVar8 = *(int *)pCVar10;
          *(int *)pCVar10 = *(int *)pCVar10 + -1;
          UNLOCK();
          if (iVar8 == 1 || iVar8 + -1 < 0) {
            (**(code **)(**(int **)(pCStack_1500 + -0x10) + 4))(pCStack_1500 + -0x10);
          }
        }
        BVar12 = FindNextFileW(pvStack_14fc,&_Stack_1498);
      } while (BVar12 != 0);
    }
    FindClose(pvStack_14fc);
    piStack_14dc = (int *)0x0;
    piStack_14d8 = (int *)0x0;
    uStack_14d4 = 0;
    iStack_c = CONCAT31(iStack_c._1_3_,4);
    pvStack_14fc = (HANDLE)0x0;
    while( true ) {
      pvVar6 = pvStack_14fc;
      if (piStack_14f4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)piStack_14f0 - (int)piStack_14f4 >> 2;
      }
      if (iVar8 <= (int)pvStack_14fc) break;
      if ((piStack_14f4 == (int *)0x0) ||
         ((uint)((int)piStack_14f0 - (int)piStack_14f4 >> 2) <= pvStack_14fc)) {
        FUN_00475b26();
      }
      pvVar16 = (void *)piStack_14f4[(int)pvVar6];
      piVar7 = (int *)((int)pvVar16 + -0x10);
      puVar13 = (undefined4 *)(**(code **)(**(int **)((int)pvVar16 + -0x10) + 0x10))();
      if ((*(int *)((int)pvVar16 + -4) < 0) || (puVar13 != (undefined4 *)*piVar7)) {
        piVar7 = (int *)(**(code **)*puVar13)(*(undefined4 *)((int)pvVar16 + -0xc),2);
        if (piVar7 == (int *)0x0) {
          FUN_0040fef0();
          return;
        }
        piVar7[1] = *(int *)((int)pvVar16 + -0xc);
        _memcpy_s(piVar7 + 4,*(int *)((int)pvVar16 + -0xc) * 2 + 2,pvVar16,
                  *(int *)((int)pvVar16 + -0xc) * 2 + 2);
      }
      else {
        LOCK();
        *(int *)((int)pvVar16 + -4) = *(int *)((int)pvVar16 + -4) + 1;
        UNLOCK();
      }
      pCStack_1500 = (CStringData *)(piVar7 + 4);
      iStack_c = CONCAT31(iStack_c._1_3_,5);
      if (-1 < piVar7[1]) {
        FUN_00476135((short *)pCStack_1500,(short *)&DAT_004b03b4);
      }
      FUN_00406000((void *)0x0,(CSimpleStringT<wchar_t,0> *)&pCStack_1500);
      pCVar10 = pCStack_1500;
      if (*(int *)(pCStack_1500 + -0xc) < 0) {
        pvVar16 = (void *)0xffffffff;
      }
      else {
        psVar14 = FUN_00476135((short *)pCStack_1500,(short *)&DAT_004b03b4);
        if (psVar14 == (short *)0x0) {
          pvVar16 = (void *)0xffffffff;
        }
        else {
          pvVar16 = (void *)((int)psVar14 - (int)pCVar10 >> 1);
        }
      }
      FUN_00406000(pvVar16,(CSimpleStringT<wchar_t,0> *)&pCStack_1500);
      if (1 < *(int *)(pCStack_1500 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&pCStack_1500,*(int *)(pCStack_1500 + -0xc));
      }
      pCVar10 = pCStack_1500;
      iVar8 = thunk_FUN_0047642d((wchar_t *)pCStack_1500);
      __time64((__time64_t *)auStack_14d0);
      FUN_00476e2d(&tStack_14bc,auStack_14d0);
      FUN_00406c70(awStack_820,0x400,awStack_820,L"%04d%02d%02d");
      iVar15 = thunk_FUN_0047642d(awStack_820);
      if (iVar8 < iVar15) {
        if ((piStack_14f4 == (int *)0x0) ||
           ((uint)((int)piStack_14f0 - (int)piStack_14f4 >> 2) <= pvStack_14fc)) {
          FUN_00475b26();
        }
        FUN_00406240();
      }
      pCVar9 = pCVar10 + -0x10;
      iStack_c = CONCAT31(iStack_c._1_3_,4);
      pCVar10 = pCVar10 + -4;
      LOCK();
      iVar8 = *(int *)pCVar10;
      *(int *)pCVar10 = *(int *)pCVar10 + -1;
      UNLOCK();
      if (iVar8 == 1 || iVar8 + -1 < 0) {
        (**(code **)(**(int **)pCVar9 + 4))(pCVar9);
      }
      pvStack_14fc = (HANDLE)((int)pvStack_14fc + 1);
    }
    uVar17 = 0;
    while( true ) {
      piVar7 = piStack_14f0;
      if (piStack_14dc == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)piStack_14d8 - (int)piStack_14dc >> 2;
      }
      if (iVar8 <= (int)uVar17) break;
      if ((piStack_14dc == (int *)0x0) ||
         ((uint)((int)piStack_14d8 - (int)piStack_14dc >> 2) <= uVar17)) {
        FUN_00475b26();
      }
      FUN_00416610((LPCWSTR)piStack_14dc[uVar17]);
      uVar17 = uVar17 + 1;
    }
    if (piStack_14f0 < piStack_14f4) {
      FUN_00475b26();
    }
    piVar2 = piStack_14f4;
    if (piStack_14f0 < piStack_14f4) {
      FUN_00475b26();
    }
    FUN_00406440((int)auStack_14f8,aiStack_14c4,(int)auStack_14f8,piVar2,(int)auStack_14f8,piVar7);
    piVar7 = piStack_14d8;
    if (piStack_14d8 < piStack_14dc) {
      FUN_00475b26();
    }
    piVar2 = piStack_14dc;
    if (piStack_14d8 < piStack_14dc) {
      FUN_00475b26();
    }
    FUN_00406440((int)auStack_14e0,aiStack_14c4,(int)auStack_14e0,piVar2,(int)auStack_14e0,piVar7);
    piVar3 = piStack_14d8;
    piVar2 = piStack_14f0;
    iStack_c = CONCAT31(iStack_c._1_3_,2);
    piVar7 = piStack_14dc;
    if (piStack_14dc == (int *)0x0) {
      iStack_c = CONCAT31(iStack_c._1_3_,1);
      piStack_14dc = (int *)0x0;
      piStack_14d8 = (int *)0x0;
      uStack_14d4 = 0;
      piVar7 = piStack_14f4;
      if (piStack_14f4 == (int *)0x0) {
        iStack_c = (uint)iStack_c._1_3_ << 8;
        piStack_14f4 = (int *)0x0;
        piStack_14f0 = (int *)0x0;
        iStack_14ec = 0;
        pWVar4 = pWStack_14e8 + -2;
        LOCK();
        iVar8 = *(int *)pWVar4;
        *(int *)pWVar4 = *(int *)pWVar4 + -1;
        UNLOCK();
        if (iVar8 + -1 < 1) {
          (**(code **)(**(int **)(pWStack_14e8 + -8) + 4))(pWStack_14e8 + -8);
        }
        iStack_c = 0xffffffff;
        piVar7 = (int *)((int)pvStack_14e4 + -4);
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 1 || iVar8 + -1 < 0) {
          (**(code **)(**(int **)((int)pvStack_14e4 + -0x10) + 4))
                    ((undefined4 *)((int)pvStack_14e4 + -0x10));
        }
        ExceptionList = local_14;
        __security_check_cookie(local_1c ^ (uint)auStack_1504);
        return;
      }
      for (; piVar7 != piVar2; piVar7 = piVar7 + 1) {
        puVar13 = (undefined4 *)(*piVar7 + -0x10);
        piVar3 = (int *)(*piVar7 + -4);
        LOCK();
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 + -1 < 1) {
          (**(code **)(*(int *)*puVar13 + 4))(puVar13);
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(piStack_14f4);
    }
    for (; piVar7 != piVar3; piVar7 = piVar7 + 1) {
      puVar13 = (undefined4 *)(*piVar7 + -0x10);
      piVar2 = (int *)(*piVar7 + -4);
      LOCK();
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 + -1 < 1) {
        (**(code **)(*(int *)*puVar13 + 4))(puVar13);
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(piStack_14dc);
  }
LAB_00405641:
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80004005);
}

