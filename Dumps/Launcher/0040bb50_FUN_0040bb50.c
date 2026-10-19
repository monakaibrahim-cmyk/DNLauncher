// Address: 0x0040bb50
// Name: FUN_0040bb50
// Category: Launcher


void FUN_0040bb50(int param_1)

{
  LPCWSTR pWVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *_Str;
  char *_Src;
  long lVar7;
  undefined *puVar8;
  CStringData *pCVar9;
  uint uVar10;
  wchar_t *pwVar11;
  void *this;
  DWORD extraout_ECX;
  int *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  wchar_t *extraout_ECX_03;
  void *this_00;
  undefined4 *puVar12;
  CStringData *pCVar13;
  LPCWSTR pWVar14;
  undefined4 uStack_36c;
  undefined4 *puStack_368;
  char *pcStack_364;
  LPCWSTR pWStack_360;
  char acStack_35c [4];
  char acStack_358 [4];
  char acStack_354 [4];
  char cStack_350;
  undefined4 uStack_34f;
  undefined4 uStack_34b;
  undefined4 uStack_347;
  undefined4 uStack_343;
  undefined2 uStack_33f;
  undefined1 uStack_33d;
  char acStack_33c [4];
  char acStack_338 [4];
  char acStack_334 [4];
  char cStack_330;
  undefined4 uStack_32f;
  undefined4 uStack_32b;
  undefined4 uStack_327;
  undefined4 uStack_323;
  undefined2 uStack_31f;
  undefined1 uStack_31d;
  char cStack_31c;
  undefined1 auStack_31b [255];
  char cStack_21c;
  undefined1 auStack_21b [255];
  CHAR CStack_11c;
  undefined1 auStack_11b [263];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498d4f;
  local_c = ExceptionList;
  local_14 = DAT_004c3750 ^ (uint)&uStack_36c;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_00453ed1();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  pWStack_360 = (LPCWSTR)(iVar4 + 0x10);
  iStack_4 = 0;
  FID_conflict_operator_(&pWStack_360,(undefined4 *)(param_1 + 100));
  FUN_00403380(&pWStack_360,L"Resource00.pak",0xe);
  pcStack_364 = FUN_00452728(0x2c0);
  iStack_4._0_1_ = 1;
  if (pcStack_364 == (char *)0x0) {
    puStack_368 = (undefined4 *)0x0;
  }
  else {
    puStack_368 = FUN_00428ee0((undefined4 *)pcStack_364);
  }
  puVar12 = puStack_368;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  acStack_358[0] = s__version_cfg_004b0cd8[4];
  acStack_358[1] = s__version_cfg_004b0cd8[5];
  acStack_358[2] = s__version_cfg_004b0cd8[6];
  acStack_358[3] = s__version_cfg_004b0cd8[7];
  acStack_35c[0] = s__version_cfg_004b0cd8[0];
  acStack_35c[1] = s__version_cfg_004b0cd8[1];
  acStack_35c[2] = s__version_cfg_004b0cd8[2];
  acStack_35c[3] = s__version_cfg_004b0cd8[3];
  acStack_354[0] = s__version_cfg_004b0cd8[8];
  acStack_354[1] = s__version_cfg_004b0cd8[9];
  acStack_354[2] = s__version_cfg_004b0cd8[10];
  acStack_354[3] = s__version_cfg_004b0cd8[0xb];
  cStack_350 = s__version_cfg_004b0cd8[0xc];
  uStack_34f = 0;
  uStack_34b = 0;
  uStack_347 = 0;
  uStack_343 = 0;
  uStack_33f = 0;
  uStack_33d = 0;
  CStack_11c = '\0';
  _memset(auStack_11b,0,0x103);
  if (1 < *(int *)(pWStack_360 + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&pWStack_360,*(int *)(pWStack_360 + -6));
  }
  pWVar14 = pWStack_360;
  WideCharToMultiByte(0,0,pWStack_360,-1,&CStack_11c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  uVar5 = FUN_004295b0(this,&CStack_11c,0);
  if ((char)uVar5 == '\0') {
    pwVar11 = (wchar_t *)GetLastError();
    FUN_00418f70(L"Checking Client Version: %s : %d");
    pcStack_364 = &stack0xfffffc7c;
    FUN_004035c0(&stack0xfffffc7c,L"Fail to Read Resource Pak");
    FUN_00416510(pwVar11);
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    puVar8 = FUN_00404360();
    *(undefined4 *)(puVar8 + 0x2c) = 0xffffffff;
  }
  else {
    puVar6 = (undefined4 *)FUN_004299c0(extraout_ECX,acStack_35c);
    if (puVar6 == (undefined4 *)0x0) {
      piVar3 = (int *)FUN_00453ed1();
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      uStack_36c = (**(code **)(*piVar3 + 0xc))();
      uStack_36c = uStack_36c + 0x10;
      iStack_4._0_1_ = 2;
      FID_conflict_operator_(&uStack_36c,(undefined4 *)(param_1 + 100));
      FUN_00403380(&uStack_36c,L"Version.cfg",0xb);
      piVar3 = (int *)FUN_00453ed1();
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      iVar4 = (**(code **)(*piVar3 + 0xc))();
      puStack_368 = (undefined4 *)(iVar4 + 0x10);
      iStack_4 = CONCAT31(iStack_4._1_3_,3);
      FUN_00403520(&puStack_368,L"Version",7);
      pcStack_364 = &stack0xfffffc7c;
      pCVar9 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(puStack_368 + -4));
      uVar5 = FUN_0040c440(&uStack_36c,(LPCWSTR)(pCVar9 + 0x10));
      *(undefined4 *)(param_1 + 0x4c) = uVar5;
      FUN_00403520(&puStack_368,L"Module",6);
      puVar6 = puStack_368;
      pcStack_364 = &stack0xfffffc7c;
      pCVar13 = (CStringData *)(puStack_368 + -4);
      pCVar9 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar13);
      uVar10 = FUN_0040c440(&uStack_36c,(LPCWSTR)(pCVar9 + 0x10));
      puVar8 = FUN_00404360();
      *(uint *)(puVar8 + 0x2c) = uVar10;
      pwVar11 = extraout_ECX_01;
      if (0x7fffffff < uVar10) {
        uVar2 = *(uint *)(param_1 + 0x4c);
        if (uVar2 == 0xffffffff) {
          FUN_00404360();
          puVar8 = FUN_00404360();
          *(undefined4 *)(puVar8 + 0x38) = 1;
          pwVar11 = extraout_ECX_03;
        }
        else {
          puVar8 = FUN_00404360();
          *(uint *)(puVar8 + 0x2c) = uVar2;
          pwVar11 = extraout_ECX_02;
          uVar10 = uVar2;
        }
      }
      if ((*(int *)(param_1 + 0x4c) == -1) || (uVar10 == 0xffffffff)) {
        pcStack_364 = &stack0xfffffc7c;
        FUN_004035c0(&stack0xfffffc7c,L"Fail to load client version");
        FUN_00416510(pwVar11);
      }
      else {
        cStack_31c = '\0';
        _memset(auStack_31b,0,0xff);
        FUN_00404360();
        _sprintf_s(&cStack_31c,0x100,"Version %d\r\nModule %d",*(undefined4 *)(param_1 + 0x4c));
        acStack_33c[0] = s__version_cfg_004b0cd8[0];
        acStack_33c[1] = s__version_cfg_004b0cd8[1];
        acStack_33c[2] = s__version_cfg_004b0cd8[2];
        acStack_33c[3] = s__version_cfg_004b0cd8[3];
        acStack_338[0] = s__version_cfg_004b0cd8[4];
        acStack_338[1] = s__version_cfg_004b0cd8[5];
        acStack_338[2] = s__version_cfg_004b0cd8[6];
        acStack_338[3] = s__version_cfg_004b0cd8[7];
        acStack_334[0] = s__version_cfg_004b0cd8[8];
        acStack_334[1] = s__version_cfg_004b0cd8[9];
        acStack_334[2] = s__version_cfg_004b0cd8[10];
        acStack_334[3] = s__version_cfg_004b0cd8[0xb];
        cStack_330 = s__version_cfg_004b0cd8[0xc];
        uStack_32f = 0;
        uStack_32b = 0;
        uStack_327 = 0;
        uStack_323 = 0;
        uStack_31f = 0;
        uStack_31d = 0;
        FUN_0042a440(puVar12,acStack_33c);
      }
      iStack_4._0_1_ = 2;
      piVar3 = puVar6 + -1;
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)pCVar13 + 4))();
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      piVar3 = (int *)(uStack_36c + -4);
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(uStack_36c + -0x10) + 4))();
        FUN_00429370(this_00,(int)puVar12);
        pWVar14 = pWStack_360;
        goto LAB_0040c0c4;
      }
    }
    else {
      _Str = thunk_FUN_00452728(puVar6[0x43]);
      FUN_00428dc0(_Str);
      cStack_21c = '\0';
      _memset(auStack_21b,0,0xff);
      cStack_31c = '\0';
      _memset(auStack_31b,0,0xff);
      pcStack_364 = (char *)0x0;
      uStack_36c._0_3_ = CONCAT12(DAT_004b0cea,DAT_004b0ce8);
      _Src = _strtok_s(_Str,(char *)&uStack_36c,&pcStack_364);
      while (_Src != (char *)0x0) {
        iVar4 = FID_conflict__sscanf(_Src,"%s %s",&cStack_21c,0x100,&cStack_31c);
        if (iVar4 != 0) {
          __strlwr_s(&cStack_21c,0x100);
          iVar4 = __stricmp(&cStack_21c,"version");
          if (iVar4 == 0) {
            lVar7 = _atol(&cStack_31c);
            *(long *)(param_1 + 0x4c) = lVar7;
          }
          else {
            iVar4 = __stricmp(&cStack_21c,"module");
            if (iVar4 == 0) {
              lVar7 = _atol(&cStack_31c);
              puVar8 = FUN_00404360();
              *(long *)(puVar8 + 0x2c) = lVar7;
            }
          }
        }
        _Src = _strtok_s((char *)0x0,(char *)&uStack_36c,&pcStack_364);
      }
      if (_Str != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Str);
      }
      (**(code **)*puVar6)();
      piVar3 = extraout_ECX_00;
      puVar12 = puStack_368;
    }
    FUN_00429370(piVar3,(int)puVar12);
    pWVar14 = pWStack_360;
  }
LAB_0040c0c4:
  if (puVar12 != (undefined4 *)0x0) {
    (**(code **)*puVar12)();
  }
  iStack_4 = 0xffffffff;
  pWVar1 = pWVar14 + -2;
  LOCK();
  iVar4 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(pWVar14 + -8) + 4))();
  }
  ExceptionList = local_c;
  __security_check_cookie(local_14 ^ (uint)&uStack_36c);
  return;
}

