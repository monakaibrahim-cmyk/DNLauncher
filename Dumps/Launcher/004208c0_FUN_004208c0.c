// Address: 0x004208c0
// Name: FUN_004208c0
// Category: Launcher


void __fastcall FUN_004208c0(CDialog *param_1)

{
  LPCWSTR pWVar1;
  LPCWSTR pWVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  CStringData *pCVar7;
  CSimpleStringT<wchar_t,0> *pCVar8;
  int iVar9;
  LPCWSTR pWVar10;
  char *pcVar11;
  LPCWSTR local_7c;
  LPCWSTR pWStack_78;
  int iStack_74;
  CDialog *local_70;
  int iStack_6c;
  LPCWSTR local_68;
  int iStack_64;
  undefined1 *puStack_60;
  CStringData *pCStack_5c;
  _MEMORYSTATUSEX local_58;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00499ea8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_58.dwLength = 0x40;
  local_70 = param_1;
  BVar3 = GlobalMemoryStatusEx(&local_58);
  if (BVar3 == 0) {
    GetLastError();
    FUN_00418f70(L"Failed to get system memory status. Check your PC. : %08X");
  }
  if ((local_58.ullAvailPhys._4_4_ == 0) && (local_58.ullAvailPhys._0_4_ < 800000000)) {
    FUN_0040a2b0();
    puVar4 = FUN_00416590(&local_68);
    local_c = 0;
    AfxMessageBox((wchar_t *)*puVar4,0,0);
    local_c = 0xffffffff;
    pWVar10 = local_68 + -2;
    LOCK();
    iVar9 = *(int *)pWVar10;
    *(int *)pWVar10 = *(int *)pWVar10 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(**(int **)(local_68 + -8) + 4))();
    }
    FUN_00418f70(L"Warnning! Check Available Memory.");
  }
  FUN_0040a2b0();
  FUN_00416370();
  local_c = 1;
  if (*(int *)(param_1 + 0x84) == 0) {
    pcVar11 = "DragonNest.exe";
  }
  else {
    pcVar11 = "DragonNest_x64.exe";
  }
  FUN_004019b0(pcVar11);
  puVar5 = FUN_00407210();
  FUN_00407280((int)puVar5,*(HWND *)(param_1 + 0x20));
  puVar5 = FUN_0040a2b0();
  FUN_0040a620(puVar5);
  piVar6 = (int *)FUN_00453ed1();
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iStack_74 = (**(code **)(*piVar6 + 0xc))();
  iStack_74 = iStack_74 + 0x10;
  local_c._0_1_ = 2;
  FUN_0040a2b0();
  FUN_00403f30(&iStack_74,L" /patchver:%d");
  pCStack_5c = (CStringData *)&stack0xffffff68;
  pCVar7 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_74 + -0x10));
  pCVar7 = pCVar7 + 0x10;
  local_c._0_1_ = 3;
  puVar5 = FUN_0040a2b0();
  local_c._0_1_ = 2;
  FUN_004224b0(puVar5,pCVar7);
  FUN_0040a2b0();
  FUN_00416350();
  local_c._0_1_ = 4;
  FUN_00422410((CSimpleStringT<char,0> *)&iStack_6c);
  FUN_00403f30(&iStack_74,L" /patchurl:%s");
  puStack_60 = &stack0xffffff68;
  pCStack_5c = (CStringData *)(iStack_74 + -0x10);
  pCVar7 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCStack_5c);
  pCVar7 = pCVar7 + 0x10;
  local_c._0_1_ = 5;
  puVar5 = FUN_0040a2b0();
  local_c._0_1_ = 4;
  FUN_004224b0(puVar5,pCVar7);
  if (param_1[0x4124] == (CDialog)0x0) {
    FUN_0040a2b0();
    pCVar8 = (CSimpleStringT<wchar_t,0> *)FUN_00416390();
    local_c = CONCAT31(local_c._1_3_,7);
    if (1 < *(int *)(*(int *)pCVar8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
    }
    pWVar10 = *(LPCWSTR *)pCVar8;
    if (1 < *(int *)(local_7c + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_7c,*(int *)(local_7c + -6));
    }
    ShellExecuteW(*(HWND *)(param_1 + 0x20),(LPCWSTR)0x0,local_7c,pWVar10,(LPCWSTR)0x0,1);
    local_c._0_1_ = 4;
    pWVar10 = local_68 + -2;
    LOCK();
    iVar9 = *(int *)pWVar10;
    *(int *)pWVar10 = *(int *)pWVar10 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(**(int **)(local_68 + -8) + 4))();
    }
    FUN_0040a2b0();
    pCVar8 = (CSimpleStringT<wchar_t,0> *)FUN_00416390();
    local_c._0_1_ = 8;
    if (1 < *(int *)(*(int *)pCVar8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
    }
    FUN_00418f70(L"DX9 Param: %s");
    pWVar10 = local_68 + -2;
    LOCK();
    iVar9 = *(int *)pWVar10;
    *(int *)pWVar10 = *(int *)pWVar10 + -1;
    UNLOCK();
    pWVar10 = local_68;
  }
  else {
    FUN_0040a2b0();
    FUN_00416390();
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_004019b0(" /bgfx");
    if (1 < *(int *)(pWStack_78 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_78,*(int *)(pWStack_78 + -6));
    }
    pWVar10 = pWStack_78;
    if (1 < *(int *)(local_7c + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_7c,*(int *)(local_7c + -6));
    }
    ShellExecuteW(*(HWND *)(param_1 + 0x20),(LPCWSTR)0x0,local_7c,pWVar10,(LPCWSTR)0x0,1);
    if (1 < *(int *)(pWVar10 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_78,*(int *)(pWVar10 + -6));
      pWVar10 = pWStack_78;
    }
    FUN_00418f70(L"DX11 Param: %s");
    pWVar1 = pWVar10 + -2;
    LOCK();
    iVar9 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
  }
  local_c._0_1_ = 4;
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)(pWVar10 + -8) + 4))();
  }
  puVar5 = FUN_0040a2b0();
  iVar9 = *(int *)(puVar5 + 0x58);
  FUN_0040a2b0();
  FUN_00418f70(L"Check Next Version Ver:%d, Server Ver:%d");
  if ((0 < iVar9) && (puVar5 = FUN_0040a2b0(), *(int *)(puVar5 + 0x50) < iVar9)) {
    piVar6 = (int *)FUN_00453ed1();
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    iVar9 = (**(code **)(*piVar6 + 0xc))();
    local_68 = (LPCWSTR)(iVar9 + 0x10);
    local_c._0_1_ = 9;
    FUN_0040a2b0();
    FUN_00416370();
    local_c._0_1_ = 10;
    FUN_0040a2b0();
    FUN_00416350();
    local_c._0_1_ = 0xb;
    FUN_0040a2b0();
    FUN_00403f30(&local_68,L"%s|%s|%d-%d");
    local_c._0_1_ = 10;
    piVar6 = (int *)(iStack_64 + -4);
    LOCK();
    iVar9 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar9 + -1 < 1) {
      (**(code **)(**(int **)(iStack_64 + -0x10) + 4))();
    }
    local_c = CONCAT31(local_c._1_3_,9);
    puVar4 = (undefined4 *)(puStack_60 + -0x10);
    piVar6 = (int *)(puStack_60 + -4);
    LOCK();
    iVar9 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(*(int *)*puVar4 + 4))();
    }
    FUN_0040a2b0();
    FUN_00416370();
    local_c = CONCAT31(local_c._1_3_,0xc);
    FUN_004019b0("DnAutoUpdate.exe");
    pWVar10 = pWStack_78;
    if ((int)(*(uint *)(pWStack_78 + -4) | 1U - *(int *)(pWStack_78 + -2)) < 0) {
      ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT<char,0> *)&pWStack_78,0);
      pWVar10 = pWStack_78;
    }
    FUN_00418f70(L"Execute AutoUpdate.exe %s");
    pWVar2 = local_68;
    ShellExecuteW(*(HWND *)(local_70 + 0x20),(LPCWSTR)0x0,pWVar10,local_68,(LPCWSTR)0x0,1);
    local_c._0_1_ = 9;
    pWVar1 = pWVar10 + -2;
    LOCK();
    iVar9 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar9 + -1 < 1) {
      (**(code **)(**(int **)(pWVar10 + -8) + 4))();
    }
    local_c._0_1_ = 4;
    pWVar10 = pWVar2 + -2;
    LOCK();
    iVar9 = *(int *)pWVar10;
    *(int *)pWVar10 = *(int *)pWVar10 + -1;
    UNLOCK();
    param_1 = local_70;
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(**(int **)(pWVar2 + -8) + 4))();
      param_1 = local_70;
    }
  }
  Sleep(1000);
  CDialog::OnOK(param_1);
  local_c._0_1_ = 2;
  piVar6 = (int *)(iStack_6c + -4);
  LOCK();
  iVar9 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar9 + -1 < 1) {
    (**(code **)(**(int **)(iStack_6c + -0x10) + 4))();
  }
  local_c = CONCAT31(local_c._1_3_,1);
  pCVar7 = pCStack_5c + 0xc;
  LOCK();
  iVar9 = *(int *)pCVar7;
  *(int *)pCVar7 = *(int *)pCVar7 + -1;
  UNLOCK();
  if (iVar9 + -1 < 1) {
    (**(code **)(**(int **)pCStack_5c + 4))();
  }
  local_c = 0xffffffff;
  pWVar10 = local_7c + -2;
  LOCK();
  iVar9 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)(local_7c + -8) + 4))();
  }
  ExceptionList = local_14;
  return;
}

