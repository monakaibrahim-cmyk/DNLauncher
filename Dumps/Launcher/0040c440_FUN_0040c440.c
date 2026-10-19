// Address: 0x0040c440
// Name: FUN_0040c440
// Category: Launcher


void __thiscall FUN_0040c440(void *this,LPCWSTR param_1)

{
  char *_Str;
  uint uVar1;
  HANDLE hFile;
  DWORD DVar2;
  char *_Src;
  int iVar3;
  LPCWSTR pWVar4;
  undefined2 local_32c;
  undefined1 local_32a;
  char *local_328;
  long local_324;
  DWORD local_320;
  DWORD local_31c;
  char *local_318;
  char local_314;
  undefined1 local_313 [255];
  char local_214;
  undefined1 local_213 [255];
  CHAR local_114;
  undefined1 local_113 [259];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497b78;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_32c;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xfffffcc4;
  ExceptionList = &local_c;
  local_4 = 0;
  local_324 = -1;
  if (1 < *(int *)(*(int *)this + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
  }
  hFile = CreateFileW(*(LPCWSTR *)this,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    pWVar4 = param_1 + -2;
    LOCK();
    iVar3 = *(int *)pWVar4;
    *(int *)pWVar4 = *(int *)pWVar4 + -1;
    UNLOCK();
  }
  else {
    local_31c = 0;
    DVar2 = GetFileSize(hFile,&local_31c);
    if (4 < DVar2 + 1) {
      local_318 = thunk_FUN_00452728(DVar2 + 2);
      if (local_318 != (char *)0x0) {
        _memset(local_318,0,DVar2 + 2);
        _Str = local_318;
        local_320 = 0;
        ReadFile(hFile,local_318,DVar2 + 1,&local_320,(LPOVERLAPPED)0x0);
        CloseHandle(hFile);
        local_314 = '\0';
        _memset(local_313,0,0xff);
        local_214 = '\0';
        _memset(local_213,0,0xff);
        local_32c = DAT_004b0ce8;
        local_328 = (char *)0x0;
        local_32a = DAT_004b0cea;
        _Src = _strtok_s(_Str,(char *)&local_32c,&local_328);
        pWVar4 = param_1;
        while (_Src != (char *)0x0) {
          iVar3 = FID_conflict__sscanf(_Src,"%s %s",&local_314,0x100,&local_214,0x100);
          if (iVar3 != 0) {
            __strlwr_s(&local_314,0x100);
            local_114 = '\0';
            _memset(local_113,0,0x103);
            if (1 < *(int *)(pWVar4 + -2)) {
              ATL::CSimpleStringT<wchar_t,0>::Fork
                        ((CSimpleStringT<wchar_t,0> *)&param_1,*(int *)(pWVar4 + -6));
              pWVar4 = param_1;
            }
            WideCharToMultiByte(0,0,pWVar4,-1,&local_114,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar3 = __stricmp(&local_314,&local_114);
            if (iVar3 == 0) {
              local_324 = _atol(&local_214);
            }
          }
          _Src = _strtok_s((char *)0x0,(char *)&local_32c,&local_328);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Str);
      }
      local_4 = 0xffffffff;
      pWVar4 = param_1 + -2;
      LOCK();
      iVar3 = *(int *)pWVar4;
      *(int *)pWVar4 = *(int *)pWVar4 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)(param_1 + -8) + 4))(param_1 + -8,uVar1);
      }
      goto LAB_0040c728;
    }
    AfxMessageBox(L"Error the old version.cfg.",0,0);
    CloseHandle(hFile);
    pWVar4 = param_1 + -2;
    LOCK();
    iVar3 = *(int *)pWVar4;
    *(int *)pWVar4 = *(int *)pWVar4 + -1;
    UNLOCK();
  }
  local_4 = 0xffffffff;
  if (iVar3 + -1 < 1) {
    (**(code **)(**(int **)(param_1 + -8) + 4))(param_1 + -8);
  }
LAB_0040c728:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_32c);
  return;
}

