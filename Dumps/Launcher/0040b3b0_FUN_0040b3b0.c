// Address: 0x0040b3b0
// Name: FUN_0040b3b0
// Category: Launcher


void FUN_0040b3b0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  LPWSTR lpWideCharStr;
  LPCSTR lpMultiByteStr;
  uint _Size;
  int iStack_42c;
  undefined1 local_428;
  undefined2 local_427;
  undefined4 *puStack_424;
  int local_420;
  undefined2 local_41c;
  undefined2 local_31c;
  undefined1 local_214;
  undefined1 local_213 [255];
  undefined1 local_114;
  undefined1 local_113 [255];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00499b79;
  local_c = ExceptionList;
  local_14 = DAT_004c3750 ^ (uint)&iStack_42c;
  ExceptionList = &local_c;
  local_420 = param_1;
  local_31c._0_1_ = '\0';
  _memset((void *)((int)&local_31c + 1),0,0x103);
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_31c,0x104);
  local_428 = '\0';
  local_427 = 0;
  local_41c._0_1_ = '\0';
  _memset((void *)((int)&local_41c + 1),0,0xff);
  local_114 = 0;
  _memset(local_113,0,0xff);
  local_214 = 0;
  _memset(local_213,0,0xff);
  FID_conflict___splitpath
            (&local_31c,(wchar_t *)&local_428,&local_41c,(wchar_t *)&local_114,(wchar_t *)&local_214
            );
  piVar3 = (int *)FUN_00453ed1();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iStack_42c = (**(code **)(*piVar3 + 0xc))();
  iStack_42c = iStack_42c + 0x10;
  pcVar4 = &local_428;
  iStack_4 = 0;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  ATL::CSimpleStringT<char,0>::SetString
            ((CSimpleStringT<char,0> *)&iStack_42c,&local_428,(int)pcVar4 - (int)&local_427);
  pcVar4 = (char *)&local_41c;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_0040e9f0((CSimpleStringT<char,0> *)&iStack_42c,&local_41c,(int)pcVar4 - ((int)&local_41c + 1))
  ;
  FUN_0040d780();
  puVar5 = FUN_00452728(0x28);
  iStack_4._0_1_ = 1;
  puStack_424 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
    iVar6 = iStack_42c;
  }
  else {
    if (1 < *(int *)(iStack_42c + -4)) {
      ATL::CSimpleStringT<char,0>::Fork
                ((CSimpleStringT<char,0> *)&iStack_42c,*(int *)(iStack_42c + -0xc));
    }
    iVar6 = iStack_42c;
    piVar3 = FUN_00425bb0(puVar5);
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (piVar3 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar3 + 0x10))();
    if (cVar2 != '\0') {
      iVar6 = (*(code *)((undefined4 *)*piVar3)[3])();
      _Size = iVar6 + 3;
      lpWideCharStr =
           thunk_FUN_00452728(-(uint)((int)((ulonglong)_Size * 2 >> 0x20) != 0) |
                              (uint)((ulonglong)_Size * 2));
      lpMultiByteStr = thunk_FUN_00452728(_Size);
      puStack_424 = (undefined4 *)(_Size * 2);
      _memset(lpWideCharStr,0,(size_t)puStack_424);
      _memset(lpMultiByteStr,0,_Size);
      (**(code **)(*piVar3 + 0x20))(lpMultiByteStr,_Size);
      (**(code **)*piVar3)(1);
      MultiByteToWideChar(0,0,lpMultiByteStr,-1,lpWideCharStr,(int)puStack_424);
      iVar6 = local_420;
      FUN_0040caa0(lpWideCharStr,local_420);
      if (lpWideCharStr != (LPWSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(lpWideCharStr);
      }
      if (lpMultiByteStr != (LPCSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(lpMultiByteStr);
      }
      iStack_4 = 0xffffffff;
      *(undefined1 *)(iVar6 + 0x54) = 1;
      piVar3 = (int *)(iStack_42c + -4);
      LOCK();
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(iStack_42c + -0x10) + 4))((undefined4 *)(iStack_42c + -0x10));
      }
      goto LAB_0040b69b;
    }
    (**(code **)*piVar3)(1);
  }
  iStack_4 = 0xffffffff;
  piVar3 = (int *)(iVar6 + -4);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(iVar6 + -0x10) + 4))((undefined4 *)(iVar6 + -0x10));
  }
LAB_0040b69b:
  ExceptionList = local_c;
  __security_check_cookie(local_14 ^ (uint)&iStack_42c);
  return;
}

