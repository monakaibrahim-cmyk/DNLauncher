// Address: 0x00412dd0
// Name: FUN_00412dd0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00412dd0(void)

{
  CStringData *pCVar1;
  LPCWSTR pWVar2;
  WCHAR WVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  HANDLE hFindFile;
  CStringData *pCVar9;
  CStringData *pCVar10;
  WCHAR *pWVar11;
  undefined4 uVar12;
  BOOL BVar13;
  void *this;
  void *this_00;
  void *extraout_ECX;
  void *pvVar14;
  int unaff_EBX;
  undefined1 auStack_228c [4];
  LPCWSTR pWStack_2288;
  CStringData *pCStack_2284;
  undefined4 *puStack_2280;
  undefined4 local_227c;
  int iStack_2278;
  HANDLE pvStack_2274;
  undefined4 auStack_2270 [2];
  undefined4 auStack_2268 [2];
  _WIN32_FIND_DATAW _Stack_2260;
  CHAR CStack_2010;
  undefined1 auStack_200f [8191];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a328;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)auStack_228c;
  uVar5 = DAT_004c3750 ^ (uint)&stack0xffffdd68;
  ExceptionList = &local_c;
  FUN_00418fd0(L"GetPackingFile");
  local_227c = 1;
  piVar6 = (int *)FUN_00453ed1();
  if (piVar6 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar6 + 0xc))(uVar5);
    pWStack_2288 = (LPCWSTR)(iVar7 + 0x10);
    uStack_4 = 0;
    FUN_0040a2b0();
    puVar8 = (undefined4 *)FUN_00416370();
    uStack_4._0_1_ = 1;
    FID_conflict_operator_(&pWStack_2288,puVar8);
    uStack_4 = (uint)uStack_4._1_3_ << 8;
    piVar6 = puStack_2280 + -1;
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(*(int *)puStack_2280[-4] + 4))(puStack_2280 + -4);
    }
    FUN_004019b0("Resource*.pak");
    if (1 < *(int *)(pWStack_2288 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_2288,*(int *)(pWStack_2288 + -6));
    }
    hFindFile = FindFirstFileW(pWStack_2288,&_Stack_2260);
    pvStack_2274 = hFindFile;
    if (hFindFile == (HANDLE)0xffffffff) {
LAB_004132c0:
      FindClose(hFindFile);
      uStack_4 = 0xffffffff;
      pWVar2 = pWStack_2288 + -2;
      LOCK();
      iVar7 = *(int *)pWVar2;
      *(int *)pWVar2 = *(int *)pWVar2 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(**(int **)(pWStack_2288 + -8) + 4))(pWStack_2288 + -8);
      }
    }
    else {
      do {
        if (((byte)_Stack_2260.dwFileAttributes & 0x10) == 0) {
          piVar6 = (int *)FUN_00453ed1();
          if (piVar6 == (int *)0x0) goto LAB_00412e34;
          pCVar9 = (CStringData *)(**(code **)(*piVar6 + 0xc))();
          pCStack_2284 = pCVar9 + 0x10;
          if ((DAT_004cc218 & 1) == 0) {
            DAT_004cc218 = DAT_004cc218 | 1;
            uStack_4._0_1_ = 3;
            FUN_00409d50();
            _atexit((_func_4879 *)&LAB_0049b250);
          }
          uStack_4._0_1_ = 2;
          puVar8 = (undefined4 *)FUN_00416370();
          uStack_4._0_1_ = 4;
          pvVar14 = (void *)*puVar8;
          pCVar10 = (CStringData *)((int)pvVar14 + -0x10);
          if (pCVar10 != pCVar9) {
            pCVar1 = pCVar9 + 0xc;
            if ((*(int *)(pCVar9 + 0xc) < 0) || (*(int *)pCVar10 != *(int *)pCVar9)) {
              FUN_00403520(&pCStack_2284,pvVar14,*(int *)((int)pvVar14 + -0xc));
            }
            else {
              pCVar10 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar10);
              LOCK();
              iVar7 = *(int *)pCVar1;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              UNLOCK();
              if (iVar7 == 1 || iVar7 + -1 < 0) {
                (**(code **)(**(int **)pCVar9 + 4))(pCVar9);
              }
              pCStack_2284 = pCVar10 + 0x10;
            }
          }
          uStack_4._0_1_ = 2;
          piVar6 = (int *)(iStack_2278 + -4);
          LOCK();
          iVar7 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar7 == 1 || iVar7 + -1 < 0) {
            (**(code **)(**(int **)(iStack_2278 + -0x10) + 4))((undefined4 *)(iStack_2278 + -0x10));
          }
          pWVar11 = _Stack_2260.cFileName;
          do {
            WVar3 = *pWVar11;
            pWVar11 = pWVar11 + 1;
          } while (WVar3 != L'\0');
          FUN_00403380(&pCStack_2284,_Stack_2260.cFileName,
                       (int)pWVar11 - (int)(_Stack_2260.cFileName + 1) >> 1);
          puStack_2280 = FUN_00452728(0x2c0);
          uStack_4._0_1_ = 5;
          if (puStack_2280 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_00428ee0(puStack_2280);
          }
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          CStack_2010 = '\0';
          puStack_2280 = puVar8;
          _memset(auStack_200f,0,0x1fff);
          if (1 < *(int *)(pCStack_2284 + -4)) {
            ATL::CSimpleStringT<wchar_t,0>::Fork
                      ((CSimpleStringT<wchar_t,0> *)&pCStack_2284,*(int *)(pCStack_2284 + -0xc));
          }
          pCVar9 = pCStack_2284;
          WideCharToMultiByte(0,0,(LPCWSTR)pCStack_2284,-1,&CStack_2010,0x2000,(LPCSTR)0x0,
                              (LPBOOL)0x0);
          uVar12 = FUN_004295b0(this,&CStack_2010,0);
          if ((char)uVar12 == '\0') {
            uVar12 = FUN_004295b0(this_00,&CStack_2010,0);
            if ((char)uVar12 == '\0') {
              FUN_00418f70(L"%s Packing File System Open Failed!");
              if (puVar8 != (undefined4 *)0x0) {
                (**(code **)*puVar8)(1);
              }
              local_227c = 0;
            }
            else {
              puVar4 = *(undefined4 **)(unaff_EBX + 0x50);
              if ((puVar4 == (undefined4 *)0x0) ||
                 ((uint)(*(int *)(unaff_EBX + 0x58) - (int)puVar4 >> 2) <=
                  (uint)(*(int *)(unaff_EBX + 0x54) - (int)puVar4 >> 2))) {
                puVar8 = *(undefined4 **)(unaff_EBX + 0x54);
                if (puVar8 < puVar4) {
                  FUN_00475b26();
                }
                FUN_00401e30(auStack_2270,&puStack_2280,(void *)(unaff_EBX + 0x4c),puVar8);
              }
              else {
                puVar4 = *(undefined4 **)(unaff_EBX + 0x54);
                *puVar4 = puVar8;
                *(undefined4 **)(unaff_EBX + 0x54) = puVar4 + 1;
              }
            }
          }
          else {
            puVar4 = *(undefined4 **)(unaff_EBX + 0x50);
            if ((puVar4 == (undefined4 *)0x0) ||
               ((uint)(*(int *)(unaff_EBX + 0x58) - (int)puVar4 >> 2) <=
                (uint)(*(int *)(unaff_EBX + 0x54) - (int)puVar4 >> 2))) {
              puVar8 = *(undefined4 **)(unaff_EBX + 0x54);
              if (puVar8 < puVar4) {
                FUN_00475b26();
              }
              FUN_00401e30(auStack_2268,&puStack_2280,(void *)(unaff_EBX + 0x4c),puVar8);
            }
            else {
              puVar4 = *(undefined4 **)(unaff_EBX + 0x54);
              *puVar4 = puVar8;
              *(undefined4 **)(unaff_EBX + 0x54) = puVar4 + 1;
            }
          }
          pCVar10 = pCVar9 + -0x10;
          uStack_4 = uStack_4 & 0xffffff00;
          pCVar9 = pCVar9 + -4;
          LOCK();
          iVar7 = *(int *)pCVar9;
          *(int *)pCVar9 = *(int *)pCVar9 + -1;
          UNLOCK();
          if (iVar7 == 1 || iVar7 + -1 < 0) {
            (**(code **)(**(int **)pCVar10 + 4))(pCVar10);
          }
        }
        hFindFile = pvStack_2274;
        BVar13 = FindNextFileW(pvStack_2274,&_Stack_2260);
        if (BVar13 == 0) goto LAB_004132c0;
      } while (*(int *)(unaff_EBX + 0x48) == 0);
      uVar5 = 0;
      while( true ) {
        pvVar14 = *(void **)(unaff_EBX + 0x50);
        if (pvVar14 == (void *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(unaff_EBX + 0x54) - (int)pvVar14 >> 2;
        }
        if (iVar7 <= (int)uVar5) break;
        if ((pvVar14 == (void *)0x0) ||
           ((uint)(*(int *)(unaff_EBX + 0x54) - (int)pvVar14 >> 2) <= uVar5)) {
          FUN_00475b26();
          pvVar14 = extraout_ECX;
        }
        FUN_00429370(pvVar14,*(int *)(*(int *)(unaff_EBX + 0x50) + uVar5 * 4));
        if ((*(int *)(unaff_EBX + 0x50) == 0) ||
           ((uint)(*(int *)(unaff_EBX + 0x54) - *(int *)(unaff_EBX + 0x50) >> 2) <= uVar5)) {
          FUN_00475b26();
        }
        iVar7 = *(int *)(unaff_EBX + 0x50);
        if (*(int *)(iVar7 + uVar5 * 4) != 0) {
          if ((iVar7 == 0) || ((uint)(*(int *)(unaff_EBX + 0x54) - iVar7 >> 2) <= uVar5)) {
            FUN_00475b26();
          }
          puVar8 = *(undefined4 **)(*(int *)(unaff_EBX + 0x50) + uVar5 * 4);
          if (puVar8 != (undefined4 *)0x0) {
            (**(code **)*puVar8)(1);
          }
          if ((*(int *)(unaff_EBX + 0x50) == 0) ||
             ((uint)(*(int *)(unaff_EBX + 0x54) - *(int *)(unaff_EBX + 0x50) >> 2) <= uVar5)) {
            FUN_00475b26();
          }
          *(undefined4 *)(*(int *)(unaff_EBX + 0x50) + uVar5 * 4) = 0;
        }
        uVar5 = uVar5 + 1;
      }
      uStack_4 = 0xffffffff;
      pWVar2 = pWStack_2288 + -2;
      LOCK();
      iVar7 = *(int *)pWVar2;
      *(int *)pWVar2 = *(int *)pWVar2 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(**(int **)(pWStack_2288 + -8) + 4))(pWStack_2288 + -8);
      }
    }
    ExceptionList = local_c;
    __security_check_cookie(local_10 ^ (uint)auStack_228c);
    return;
  }
LAB_00412e34:
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80004005);
}

