// Address: 0x00413c80
// Name: FUN_00413c80
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00413c80(int param_1,undefined4 param_2,undefined4 *param_3)

{
  LPCWSTR pWVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  int iVar7;
  CSimpleStringT<wchar_t,0> *this;
  HANDLE hFindFile;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  LPCWSTR lpWideCharStr;
  LPCWSTR pWStack_227c;
  undefined4 *puStack_2278;
  int local_2274;
  uint local_2270;
  undefined4 local_226c;
  undefined4 uStack_2268;
  _WIN32_FIND_DATAW _Stack_2264;
  CHAR CStack_2014;
  undefined1 auStack_2013 [8191];
  uint local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a2b2;
  local_c = ExceptionList;
  uStack_10 = 0x413c98;
  local_14 = DAT_004c3750 ^ (uint)&pWStack_227c;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffdd74;
  ExceptionList = &local_c;
  uVar9 = 0xffffffff;
  local_2274 = param_1;
  uVar11 = 0xffffffff;
  uVar10 = 0;
  while( true ) {
    iVar7 = *(int *)(param_1 + 0x50);
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) - iVar7 >> 2;
    }
    if (iVar4 <= (int)uVar10) break;
    if ((iVar7 == 0) || ((uint)(*(int *)(param_1 + 0x54) - iVar7 >> 2) <= uVar10)) {
      FUN_00475b26();
    }
    DVar5 = FUN_004298d0(*(int *)(*(int *)(param_1 + 0x50) + uVar10 * 4));
    if ((DVar5 < uVar11) && (DVar5 < 0x20000000)) {
      uVar9 = uVar10;
      uVar11 = DVar5;
    }
    uVar10 = uVar10 + 1;
  }
  if (uVar9 == 0xffffffff) {
    piVar6 = (int *)FUN_00453ed1();
    while( true ) {
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      iVar7 = (**(code **)(*piVar6 + 0xc))(uVar3);
      pWStack_227c = (LPCWSTR)(iVar7 + 0x10);
      iStack_4._0_1_ = 0;
      iStack_4._1_3_ = 0;
      CStack_2014 = '\0';
      _memset(auStack_2013,0,0x1fff);
      if ((DAT_004cc218 & 1) == 0) {
        DAT_004cc218 = DAT_004cc218 | 1;
        iStack_4._0_1_ = 1;
        FUN_00409d50();
        _atexit((_func_4879 *)&LAB_0049b250);
        iStack_4._0_1_ = 0;
      }
      this = (CSimpleStringT<wchar_t,0> *)FUN_00416370();
      iStack_4._0_1_ = 2;
      if (1 < *(int *)(*(int *)this + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
      }
      FUN_00403f30(&pWStack_227c,L"%sResource%02d.pak");
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      piVar6 = puStack_2278 + -1;
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(*(int *)puStack_2278[-4] + 4))(puStack_2278 + -4);
      }
      if (1 < *(int *)(pWStack_227c + -2)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&pWStack_227c,*(int *)(pWStack_227c + -6));
      }
      lpWideCharStr = pWStack_227c;
      hFindFile = FindFirstFileW(pWStack_227c,&_Stack_2264);
      if (hFindFile == (HANDLE)0xffffffff) break;
      FindClose(hFindFile);
      iStack_4 = 0xffffffff;
      pWVar1 = lpWideCharStr + -2;
      LOCK();
      iVar7 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(**(int **)(lpWideCharStr + -8) + 4))(lpWideCharStr + -8);
      }
      piVar6 = (int *)FUN_00453ed1();
    }
    if (1 < *(int *)(lpWideCharStr + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_227c,*(int *)(lpWideCharStr + -6));
      lpWideCharStr = pWStack_227c;
    }
    WideCharToMultiByte(0,0,lpWideCharStr,-1,&CStack_2014,0x2000,(LPCSTR)0x0,(LPBOOL)0x0);
    puStack_2278 = FUN_00452728(0x2c0);
    iStack_4._0_1_ = 3;
    if (puStack_2278 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = FUN_00428ee0(puStack_2278);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    puStack_2278 = puVar8;
    FUN_004297c0(&CStack_2014);
    puVar2 = *(undefined4 **)(param_1 + 0x50);
    if ((puVar2 == (undefined4 *)0x0) ||
       ((uint)(*(int *)(param_1 + 0x58) - (int)puVar2 >> 2) <=
        (uint)(*(int *)(param_1 + 0x54) - (int)puVar2 >> 2))) {
      puVar8 = *(undefined4 **)(param_1 + 0x54);
      if (puVar8 < puVar2) {
        FUN_00475b26();
      }
      FUN_00401e30(&local_2270,&puStack_2278,(void *)(param_1 + 0x4c),puVar8);
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 0x54);
      *puVar2 = puVar8;
      *(undefined4 **)(param_1 + 0x54) = puVar2 + 1;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2;
    }
    uVar9 = iVar7 - 1;
    iStack_4 = 0xffffffff;
    pWVar1 = lpWideCharStr + -2;
    LOCK();
    iVar7 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(lpWideCharStr + -8) + 4))(lpWideCharStr + -8);
    }
    if (uVar9 == 0xffffffff) goto LAB_00413ffb;
  }
  local_226c = param_2;
  local_2270 = uVar9;
  if ((*(int *)(param_1 + 0x50) == 0) ||
     ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar9)) {
    FUN_00475b26();
  }
  uStack_2268 = FUN_0042aa40(param_3);
  FUN_00415460(&local_2270);
LAB_00413ffb:
  ExceptionList = local_c;
  __security_check_cookie(local_14 ^ (uint)&pWStack_227c);
  return;
}

