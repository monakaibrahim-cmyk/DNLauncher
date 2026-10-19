// Address: 0x0040c120
// Name: FUN_0040c120
// Category: Launcher


void FUN_0040c120(int param_1)

{
  LPCWSTR pWVar1;
  void *_Src;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  LPCWSTR pWVar8;
  wchar_t *pwVar9;
  void *pvStack_18;
  LPCWSTR pWStack_14;
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a4d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  pWStack_14 = (LPCWSTR)(iVar3 + 0x10);
  uStack_4 = 0;
  FID_conflict_operator_(&pWStack_14,(undefined4 *)(param_1 + 100));
  FUN_00403380(&pWStack_14,L"PatchInfoServer.cfg",0x13);
  iVar3 = 0;
  pWVar8 = pWStack_14;
  do {
    FUN_00401ae0((CSimpleStringT<char,0> *)&pvStack_18,(int *)(param_1 + 0x34),
                 L"PatchInfoServer.cfg");
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (1 < *(int *)((int)pvStack_18 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pvStack_18,*(int *)((int)pvStack_18 + -0xc));
    }
    DeleteUrlCacheEntryW();
    if (1 < *(int *)(pWVar8 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_14,*(int *)(pWVar8 + -6));
      pWVar8 = pWStack_14;
    }
    if (1 < *(int *)((int)pvStack_18 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pvStack_18,*(int *)((int)pvStack_18 + -0xc));
    }
    iVar4 = FUN_00417cc0(pvStack_18,pWVar8);
    uStack_4 = uStack_4 & 0xffffff00;
    if (iVar4 == 0) {
      piVar2 = (int *)((int)pvStack_18 + -4);
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)((int)pvStack_18 + -0x10) + 4))();
      }
      piVar2 = (int *)FUN_00453ed1();
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      iVar3 = (**(code **)(*piVar2 + 0xc))();
      pvStack_18 = (void *)(iVar3 + 0x10);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      FUN_00403520(&pvStack_18,L"Version",7);
      _Src = pvStack_18;
      puStack_10 = &stack0xffffffcc;
      piVar2 = (int *)((int)pvStack_18 + -0x10);
      puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvStack_18 + -0x10) + 0x10))();
      if ((*(int *)((int)_Src + -4) < 0) || (puVar5 != (undefined4 *)*piVar2)) {
        piVar6 = (int *)(**(code **)*puVar5)(*(undefined4 *)((int)_Src + -0xc),2);
        if (piVar6 == (int *)0x0) {
          FUN_0040fef0();
        }
        piVar6[1] = *(int *)((int)_Src + -0xc);
        _memcpy_s(piVar6 + 4,*(int *)((int)_Src + -0xc) * 2 + 2,_Src,
                  *(int *)((int)_Src + -0xc) * 2 + 2);
      }
      else {
        LOCK();
        *(int *)((int)_Src + -4) = *(int *)((int)_Src + -4) + 1;
        UNLOCK();
        piVar6 = piVar2;
      }
      uVar7 = FUN_0040c440(&pWStack_14,(LPCWSTR)(piVar6 + 4));
      pWVar8 = pWStack_14;
      *(undefined4 *)(param_1 + 0x50) = uVar7;
      DeleteFileW(pWStack_14);
      uStack_4 = uStack_4 & 0xffffff00;
      piVar6 = (int *)((int)_Src + -4);
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      pwVar9 = extraout_ECX_01;
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(*(int *)*piVar2 + 4))();
        pwVar9 = extraout_ECX_02;
      }
      goto LAB_0040c261;
    }
    piVar2 = (int *)((int)pvStack_18 + -4);
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)((int)pvStack_18 + -0x10) + 4))();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_00418f70(L"PatchInfoServer.cfg download Failed!");
  pwVar9 = extraout_ECX;
LAB_0040c261:
  if ((*(int *)(param_1 + 0x4c) < 1) || (*(int *)(param_1 + 0x50) < 1)) {
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      uStack_4._0_1_ = 3;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      uStack_4 = (uint)uStack_4._1_3_ << 8;
      pwVar9 = extraout_ECX_00;
    }
    puStack_10 = &stack0xffffffcc;
    FUN_00416590(&stack0xffffffcc);
    FUN_00416510(pwVar9);
    if (*(int *)(param_1 + 0x4c) == -1) {
      pwVar9 = L"Client Version is %d - Error";
    }
    else {
      if (*(int *)(param_1 + 0x50) != -1) goto LAB_0040c3fb;
      pwVar9 = L"Server Version is %d - Error";
    }
    FUN_00418f70(pwVar9);
  }
LAB_0040c3fb:
  uStack_4 = 0xffffffff;
  pWVar1 = pWVar8 + -2;
  LOCK();
  iVar3 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(pWVar8 + -8) + 4))();
  }
  ExceptionList = local_c;
  return;
}

