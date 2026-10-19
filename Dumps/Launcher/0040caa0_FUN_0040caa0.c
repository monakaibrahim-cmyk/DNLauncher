// Address: 0x0040caa0
// Name: FUN_0040caa0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0040caa0(void *this,undefined4 param_1)

{
  int *piVar1;
  short sVar2;
  wchar_t wVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  LPWSTR pWVar7;
  uint uVar8;
  void *pvVar9;
  int *piVar10;
  wchar_t *pwVar11;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  void *pvVar12;
  undefined1 *puVar13;
  LPCWSTR pWVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 local_22ac [4];
  void *local_22a8;
  void *local_22a4;
  undefined4 local_22a0;
  undefined1 *local_229c;
  undefined4 local_2298;
  undefined1 *local_2294;
  undefined1 auStack_2290 [4];
  int *local_228c;
  int *local_2288;
  undefined4 local_2284;
  int iStack_2280;
  undefined2 uStack_227c;
  undefined1 *puStack_2278;
  undefined1 local_2274 [4];
  void *local_2270;
  undefined4 local_2260;
  uint local_225c;
  undefined1 *puStack_2258;
  int aiStack_2254 [5];
  undefined1 *puStack_2240;
  undefined1 *puStack_223c;
  void *local_2234;
  undefined4 local_2224;
  uint local_2220;
  wchar_t local_221c;
  undefined1 local_221a [518];
  wchar_t local_2014;
  undefined1 local_2012 [2046];
  wchar_t local_1814;
  undefined1 local_1812 [2046];
  wchar_t local_1014;
  undefined1 local_1012 [2046];
  wchar_t local_814;
  undefined1 local_812 [2046];
  uint local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00499b2b;
  local_c = ExceptionList;
  uStack_10 = 0x40cab8;
  local_14 = DAT_004c3750 ^ (uint)local_22ac;
  ExceptionList = &local_c;
  local_2298 = param_1;
  if (this != (void *)0x0) {
    local_2220 = 7;
    local_2224 = 0;
    local_2234 = (void *)((uint)local_2234 & 0xffff0000);
    psVar5 = this;
    do {
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    FUN_00406500(this,(int)psVar5 - ((int)this + 2) >> 1);
    local_22a8 = (void *)0x0;
    local_22a4 = (void *)0x0;
    local_22a0 = 0;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    local_225c = 7;
    local_2260 = 0;
    local_2270 = (void *)((uint)local_2270 & 0xffff0000);
    FUN_00406500((undefined4 *)&DAT_004b0fdc,2);
    local_4._0_1_ = 2;
    FUN_00424740(local_22ac,(int)local_2274);
    if (7 < local_225c) {
                    /* WARNING: Subroutine does not return */
      _free(local_2270);
    }
    local_228c = (int *)0x0;
    local_2288 = (int *)0x0;
    local_2284 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    local_221c = L'\0';
    _memset(local_221a,0,0x206);
    local_814 = L'\0';
    _memset(local_812,0,0x7fe);
    local_1814 = L'\0';
    _memset(local_1812,0,0x7fe);
    local_1014 = L'\0';
    _memset(local_1012,0,0x7fe);
    local_2014 = L'\0';
    _memset(local_2012,0,0x7fe);
    local_2294 = (undefined1 *)0x0;
    local_229c = (undefined1 *)0x0;
    while( true ) {
      pvVar9 = local_22a4;
      if (local_22a8 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = ((int)local_22a4 - (int)local_22a8) / 0x1c;
      }
      if (iVar6 <= (int)local_229c) break;
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
        FUN_00475b26();
      }
      puVar13 = local_229c;
      iVar6 = (int)local_229c * 0x1c;
      FUN_00424950();
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
        FUN_00475b26();
      }
      if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
        pWVar14 = (LPCWSTR)((int)local_22a8 + iVar6 + 4);
      }
      else {
        pWVar14 = *(LPCWSTR *)((int)local_22a8 + iVar6 + 4);
      }
      pWVar7 = StrStrW(pWVar14,L"urlpatch:");
      if (pWVar7 != (LPWSTR)0x0) {
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
          FUN_00475b26();
        }
        pvVar9 = local_22a8;
        FUN_004062c0();
        if ((pvVar9 == (void *)0x0) || ((uint)(((int)local_22a4 - (int)pvVar9) / 0x1c) <= puVar13))
        {
          FUN_00475b26();
        }
        FUN_00406100();
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
          FUN_00475b26();
        }
        if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
          pwVar11 = (wchar_t *)((int)local_22a8 + iVar6 + 4);
        }
        else {
          pwVar11 = *(wchar_t **)((int)local_22a8 + iVar6 + 4);
        }
        _wcsncpy_s(&local_1014,0x400,pwVar11,0x400);
        puVar13 = local_229c;
      }
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
        FUN_00475b26();
      }
      if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
        pWVar14 = (LPCWSTR)((int)local_22a8 + iVar6 + 4);
      }
      else {
        pWVar14 = *(LPCWSTR *)((int)local_22a8 + iVar6 + 4);
      }
      pWVar7 = StrStrW(pWVar14,L"urlversion:");
      if (pWVar7 != (LPWSTR)0x0) {
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
          FUN_00475b26();
        }
        pvVar9 = local_22a8;
        FUN_004062c0();
        if ((pvVar9 == (void *)0x0) || ((uint)(((int)local_22a4 - (int)pvVar9) / 0x1c) <= puVar13))
        {
          FUN_00475b26();
        }
        FUN_00406100();
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
          FUN_00475b26();
        }
        if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
          pwVar11 = (wchar_t *)((int)local_22a8 + iVar6 + 4);
        }
        else {
          pwVar11 = *(wchar_t **)((int)local_22a8 + iVar6 + 4);
        }
        _wcsncpy_s(&local_2014,0x400,pwVar11,0x400);
        puVar13 = local_229c;
      }
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
        FUN_00475b26();
      }
      if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
        pWVar14 = (LPCWSTR)((int)local_22a8 + iVar6 + 4);
      }
      else {
        pWVar14 = *(LPCWSTR *)((int)local_22a8 + iVar6 + 4);
      }
      pWVar7 = StrStrW(pWVar14,L"guidepage:");
      if (pWVar7 != (LPWSTR)0x0) {
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
          FUN_00475b26();
        }
        pvVar9 = local_22a8;
        FUN_004062c0();
        if ((pvVar9 == (void *)0x0) || ((uint)(((int)local_22a4 - (int)pvVar9) / 0x1c) <= puVar13))
        {
          FUN_00475b26();
        }
        FUN_00406100();
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
          FUN_00475b26();
        }
        if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
          pwVar11 = (wchar_t *)((int)local_22a8 + iVar6 + 4);
        }
        else {
          pwVar11 = *(wchar_t **)((int)local_22a8 + iVar6 + 4);
        }
        _wcsncpy_s(&local_814,0x400,pwVar11,0x400);
        puVar13 = local_229c;
      }
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
        FUN_00475b26();
      }
      if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
        pWVar14 = (LPCWSTR)((int)local_22a8 + iVar6 + 4);
      }
      else {
        pWVar14 = *(LPCWSTR *)((int)local_22a8 + iVar6 + 4);
      }
      pWVar7 = StrStrW(pWVar14,L"homepage:");
      if (pWVar7 != (LPWSTR)0x0) {
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
          FUN_00475b26();
        }
        pvVar9 = local_22a8;
        FUN_004062c0();
        if ((pvVar9 == (void *)0x0) || ((uint)(((int)local_22a4 - (int)pvVar9) / 0x1c) <= puVar13))
        {
          FUN_00475b26();
        }
        FUN_00406100();
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
          FUN_00475b26();
        }
        if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
          pwVar11 = (wchar_t *)((int)local_22a8 + iVar6 + 4);
        }
        else {
          pwVar11 = *(wchar_t **)((int)local_22a8 + iVar6 + 4);
        }
        _wcsncpy_s(&local_1814,0x400,pwVar11,0x400);
        puVar13 = local_229c;
      }
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
        FUN_00475b26();
      }
      if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
        pWVar14 = (LPCWSTR)((int)local_22a8 + iVar6 + 4);
      }
      else {
        pWVar14 = *(LPCWSTR *)((int)local_22a8 + iVar6 + 4);
      }
      pWVar7 = StrStrW(pWVar14,(LPCWSTR)&lpSrch_004b0fc8);
      if (pWVar7 != (LPWSTR)0x0) {
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
          FUN_00475b26();
        }
        pvVar9 = local_22a8;
        FUN_004062c0();
        if ((pvVar9 == (void *)0x0) || ((uint)(((int)local_22a4 - (int)pvVar9) / 0x1c) <= puVar13))
        {
          FUN_00475b26();
        }
        FUN_00406100();
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
          FUN_00475b26();
        }
        if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
          pwVar11 = (wchar_t *)((int)local_22a8 + iVar6 + 4);
        }
        else {
          pwVar11 = *(wchar_t **)((int)local_22a8 + iVar6 + 4);
        }
        _wcsncpy_s(&local_221c,0x104,pwVar11,0x104);
        puVar13 = local_229c;
      }
      if ((local_22a8 == (void *)0x0) ||
         ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
        FUN_00475b26();
      }
      if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
        pWVar14 = (LPCWSTR)((int)local_22a8 + iVar6 + 4);
      }
      else {
        pWVar14 = *(LPCWSTR *)((int)local_22a8 + iVar6 + 4);
      }
      pWVar7 = StrStrW(pWVar14,L"port:");
      if (pWVar7 != (LPWSTR)0x0) {
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= puVar13)) {
          FUN_00475b26();
        }
        pvVar9 = local_22a8;
        FUN_004062c0();
        if ((pvVar9 == (void *)0x0) || ((uint)(((int)local_22a4 - (int)pvVar9) / 0x1c) <= puVar13))
        {
          FUN_00475b26();
        }
        FUN_00406100();
        if ((local_22a8 == (void *)0x0) ||
           ((uint)(((int)local_22a4 - (int)local_22a8) / 0x1c) <= local_229c)) {
          FUN_00475b26();
        }
        if (*(uint *)((int)local_22a8 + iVar6 + 0x18) < 8) {
          pwVar11 = (wchar_t *)((int)local_22a8 + iVar6 + 4);
        }
        else {
          pwVar11 = *(wchar_t **)((int)local_22a8 + iVar6 + 4);
        }
        uVar8 = thunk_FUN_0047642d(pwVar11);
        local_2294 = (undefined1 *)(uVar8 & 0xffff);
        puVar13 = local_229c;
      }
      local_229c = (undefined1 *)((int)puVar13 + 1);
    }
    pvVar12 = local_22a8;
    if ((local_22a4 < local_22a8) && (FUN_00475b26(), pvVar12 = local_22a8, local_22a4 < local_22a8)
       ) {
      FUN_00475b26();
    }
    if (pvVar12 != pvVar9) {
      local_229c = (undefined1 *)((uint)local_229c & 0xffffff00);
      pvVar9 = (void *)FUN_00406d30((int)pvVar9);
      FUN_00406e30();
      local_22a4 = pvVar9;
    }
    piVar10 = (int *)FUN_00453ed1();
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    iStack_2280 = (**(code **)(*piVar10 + 0xc))();
    iStack_2280 = iStack_2280 + 0x10;
    pwVar11 = &local_221c;
    local_4._0_1_ = 4;
    do {
      wVar3 = *pwVar11;
      pwVar11 = pwVar11 + 1;
    } while (wVar3 != L'\0');
    FUN_00403520(&iStack_2280,&local_221c,(int)pwVar11 - (int)local_221a >> 1);
    puVar13 = auStack_2290;
    uStack_227c = local_2294._0_2_;
    FUN_0040d820();
    FUN_0040b310(aiStack_2254);
    local_4._0_1_ = 5;
    FUN_00403520(aiStack_2254,L"CustomChannel",0xd);
    local_2294 = &stack0xffffdd38;
    puVar19 = puVar13;
    FUN_004035c0(&stack0xffffdd38,(short *)&PTR_004b1080);
    local_229c = &stack0xffffdd34;
    local_4._0_1_ = 6;
    iVar18 = extraout_ECX;
    FUN_004035c0(&stack0xffffdd34,&local_1014);
    puStack_2240 = &stack0xffffdd30;
    local_4._0_1_ = 7;
    iVar17 = extraout_ECX_00;
    FUN_004035c0(&stack0xffffdd30,&local_2014);
    puStack_2258 = &stack0xffffdd2c;
    local_4._0_1_ = 8;
    iVar16 = extraout_ECX_01;
    FUN_004035c0(&stack0xffffdd2c,L"CustomConfig");
    puStack_223c = &stack0xffffdd28;
    local_4._0_1_ = 9;
    iVar15 = extraout_ECX_02;
    FUN_004035c0(&stack0xffffdd28,&local_1814);
    puStack_2278 = &stack0xffffdd24;
    local_4._0_1_ = 10;
    iVar6 = extraout_ECX_03;
    FUN_004035c0(&stack0xffffdd24,&local_814);
    local_4._0_1_ = 5;
    FUN_0040c890(aiStack_2254,0,100,1,iVar6,iVar15,iVar16,iVar17,iVar18,(int)puVar13,(int)puVar19);
    FUN_0040d990(aiStack_2254);
    local_4._0_1_ = 4;
    FUN_00410380(aiStack_2254);
    local_4._0_1_ = 3;
    piVar10 = (int *)(iStack_2280 + -4);
    LOCK();
    iVar6 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar6 + -1 < 1) {
      (**(code **)(**(int **)(iStack_2280 + -0x10) + 4))();
    }
    piVar4 = local_2288;
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar10 = local_228c;
    if (local_228c != (int *)0x0) {
      for (; piVar10 != piVar4; piVar10 = piVar10 + 2) {
        iVar15 = *piVar10;
        piVar1 = (int *)(iVar15 + -4);
        LOCK();
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 + -1 < 1) {
          (**(code **)(**(int **)(iVar15 + -0x10) + 4))();
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(local_228c);
    }
    local_228c = (int *)0x0;
    local_2288 = (int *)0x0;
    local_2284 = 0;
    if (local_22a8 != (void *)0x0) {
      FUN_00406e30();
                    /* WARNING: Subroutine does not return */
      _free(local_22a8);
    }
    local_22a8 = (void *)0x0;
    local_22a4 = (void *)0x0;
    local_22a0 = 0;
    if (7 < local_2220) {
                    /* WARNING: Subroutine does not return */
      _free(local_2234);
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_14 ^ (uint)local_22ac);
  return;
}

