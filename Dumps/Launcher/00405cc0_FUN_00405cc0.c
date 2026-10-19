// Address: 0x00405cc0
// Name: FUN_00405cc0
// Category: Launcher


void FUN_00405cc0(void)

{
  LPCWSTR pWVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  LPCWSTR lpPathName;
  LPCWSTR pWStack_a3c;
  wchar_t local_a38;
  undefined1 local_a36 [518];
  wchar_t local_830;
  undefined1 local_82e [518];
  WCHAR local_628;
  undefined1 local_626 [518];
  wchar_t local_420;
  undefined1 local_41e [518];
  wchar_t local_218;
  undefined1 local_216 [518];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498deb;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&pWStack_a3c;
  ExceptionList = &local_c;
  local_628 = L'\0';
  _memset(local_626,0,0x206);
  GetModuleFileNameW((HMODULE)0x0,&local_628,0x104);
  local_830 = L'\0';
  _memset(local_82e,0,0x206);
  local_a38 = L'\0';
  _memset(local_a36,0,0x206);
  local_218 = L'\0';
  _memset(local_216,0,0x206);
  local_420 = L'\0';
  _memset(local_41e,0,0x206);
  FID_conflict___splitpath(&local_628,&local_830,&local_a38,&local_218,&local_420);
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  pWStack_a3c = (LPCWSTR)(iVar3 + 0x10);
  uStack_4 = 0;
  FUN_00403f30(&pWStack_a3c,L"%s%s\\Log");
  if (1 < *(int *)(pWStack_a3c + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&pWStack_a3c,*(int *)(pWStack_a3c + -6));
  }
  lpPathName = pWStack_a3c;
  DVar4 = GetFileAttributesW(pWStack_a3c);
  if (DVar4 != 0x10) {
    if (1 < *(int *)(lpPathName + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_a3c,*(int *)(lpPathName + -6));
      lpPathName = pWStack_a3c;
    }
    CreateDirectoryW(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
  }
  FUN_00418ef0();
  uStack_4 = 0xffffffff;
  pWVar1 = lpPathName + -2;
  LOCK();
  iVar3 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(lpPathName + -8) + 4))(lpPathName + -8);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&pWStack_a3c);
  return;
}

