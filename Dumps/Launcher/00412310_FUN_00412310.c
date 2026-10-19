// Address: 0x00412310
// Name: FUN_00412310
// Category: Launcher


void __fastcall FUN_00412310(int param_1)

{
  LPCWSTR pWVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auStack_b4 [4];
  LPCWSTR local_b0;
  wchar_t *pwStack_ac;
  void *local_a8;
  int iStack_a4;
  wchar_t *pwStack_a0;
  CFile aCStack_9c [16];
  undefined **appuStack_8c [4];
  int iStack_7c;
  CHAR aCStack_78 [104];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a3a2;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)auStack_b4;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x40) = 5;
  if (*(HWND *)(param_1 + 0x44) != (HWND)0x0) {
    PostMessageW(*(HWND *)(param_1 + 0x44),0x8065,5,0);
  }
  FUN_00401ae0((CSimpleStringT<char,0> *)&local_a8,(int *)(param_1 + 0x28),L".MD5");
  local_4 = 0;
  FUN_00401ae0((CSimpleStringT<char,0> *)&local_b0,(int *)(param_1 + 0x2c),L".MD5");
  local_4._0_1_ = 1;
  iVar9 = 0;
  do {
    DeleteUrlCacheEntryW(local_a8);
    iVar4 = FUN_00417cc0(local_a8,local_b0);
    if (iVar4 == 0) goto LAB_00412443;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  if (iVar4 < 0) {
    FUN_00418f70(L"MD5 Check File Download Failed!, Error : %ld");
    pWVar1 = local_b0 + -2;
    LOCK();
    iVar9 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
  }
  else {
LAB_00412443:
    piVar5 = (int *)FUN_00453ed1();
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0xc))();
    pwStack_ac = (wchar_t *)(puVar6 + 4);
    local_4._0_1_ = 2;
    CFile::CFile(aCStack_9c);
    local_4._0_1_ = 3;
    FUN_00416290(appuStack_8c,0,0xffffffff,(short *)0x0);
    local_4._0_1_ = 4;
    iVar9 = FUN_00453369(aCStack_9c,local_b0,0,(int)appuStack_8c);
    if (iVar9 != 0) {
      CFile::Read(aCStack_9c,aCStack_78,100);
      CFile::Close(aCStack_9c);
      FUN_00416610(local_b0);
      FUN_00402e90(&pwStack_ac,aCStack_78);
      if (0 < *(int *)(pwStack_ac + -6)) {
        _wcschr(pwStack_ac,L'\n');
      }
      puVar6 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                          &pwStack_ac,(int)&iStack_a4);
      local_4._0_1_ = 5;
      FID_conflict_operator_(&pwStack_ac,puVar6);
      local_4 = CONCAT31(local_4._1_3_,4);
      piVar5 = (int *)(iStack_a4 + -4);
      LOCK();
      iVar9 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar9 == 1 || iVar9 + -1 < 0) {
        (**(code **)(**(int **)(iStack_a4 + -0x10) + 4))((undefined4 *)(iStack_a4 + -0x10));
      }
      FUN_0041dcf0((int *)&pwStack_a0,(int *)(param_1 + 0x2c));
      pwVar3 = pwStack_ac;
      pwVar7 = pwStack_a0;
      pwVar8 = pwStack_ac;
      do {
        if (((*pwVar7 != *pwVar8) || (*pwVar7 == L'\0')) ||
           (pwVar2 = pwVar7 + 1, *pwVar2 != pwVar8[1])) break;
        pwVar7 = pwVar7 + 2;
        pwVar8 = pwVar8 + 2;
      } while (*pwVar2 != L'\0');
      pwVar7 = pwStack_a0 + -2;
      LOCK();
      iVar9 = *(int *)pwVar7;
      *(int *)pwVar7 = *(int *)pwVar7 + -1;
      UNLOCK();
      if (iVar9 + -1 < 1) {
        (**(code **)(**(int **)(pwStack_a0 + -8) + 4))(pwStack_a0 + -8);
      }
      local_4._0_1_ = 3;
      appuStack_8c[0] = CFileException::vftable;
      piVar5 = (int *)(iStack_7c + -4);
      LOCK();
      iVar9 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar9 == 1 || iVar9 + -1 < 0) {
        (**(code **)(**(int **)(iStack_7c + -0x10) + 4))((undefined4 *)(iStack_7c + -0x10));
      }
      local_4._0_1_ = 2;
      FUN_00453041(aCStack_9c);
      pwVar7 = pwVar3 + -8;
      local_4._0_1_ = 1;
      pwVar3 = pwVar3 + -2;
      LOCK();
      iVar9 = *(int *)pwVar3;
      *(int *)pwVar3 = *(int *)pwVar3 + -1;
      UNLOCK();
      if (iVar9 + -1 < 1) {
        (**(code **)(**(int **)pwVar7 + 4))(pwVar7);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      pWVar1 = local_b0 + -2;
      LOCK();
      iVar9 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar9 + -1 < 1) {
        (**(code **)(**(int **)(local_b0 + -8) + 4))(local_b0 + -8);
      }
      local_4 = 0xffffffff;
      piVar5 = (int *)((int)local_a8 + -4);
      LOCK();
      iVar9 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar9 == 1 || iVar9 + -1 < 0) {
        (**(code **)(**(int **)((int)local_a8 + -0x10) + 4))((undefined4 *)((int)local_a8 + -0x10));
      }
      goto LAB_0041270a;
    }
    local_4._0_1_ = 3;
    appuStack_8c[0] = CFileException::vftable;
    piVar5 = (int *)(iStack_7c + -4);
    LOCK();
    iVar9 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(**(int **)(iStack_7c + -0x10) + 4))((undefined4 *)(iStack_7c + -0x10));
    }
    local_4._0_1_ = 2;
    FUN_00453041(aCStack_9c);
    local_4._0_1_ = 1;
    piVar5 = puVar6 + 3;
    LOCK();
    iVar9 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar9 + -1 < 1) {
      (**(code **)(*(int *)*puVar6 + 4))(puVar6);
    }
    pWVar1 = local_b0 + -2;
    LOCK();
    iVar9 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar9 + -1 < 1) {
    (**(code **)(**(int **)(local_b0 + -8) + 4))(local_b0 + -8);
  }
  local_4 = 0xffffffff;
  piVar5 = (int *)((int)local_a8 + -4);
  LOCK();
  iVar9 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)((int)local_a8 + -0x10) + 4))((undefined4 *)((int)local_a8 + -0x10));
  }
LAB_0041270a:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_b4);
  return;
}

