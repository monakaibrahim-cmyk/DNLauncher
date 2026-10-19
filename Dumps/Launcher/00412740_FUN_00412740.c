// Address: 0x00412740
// Name: FUN_00412740
// Category: Launcher


void __fastcall FUN_00412740(int param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *_Memory;
  uint uVar4;
  DWORD nNumberOfBytesToRead;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  CSimpleStringT<wchar_t,0> *this;
  undefined1 auStack_47c [7];
  char local_475;
  char *local_474 [2];
  HANDLE local_46c;
  int local_468 [2];
  int local_460;
  DWORD local_45c;
  undefined1 local_458 [4];
  void *local_454;
  undefined4 local_444;
  uint local_440;
  undefined1 local_43c [4];
  void *local_438;
  undefined4 local_428;
  uint local_424;
  char local_420 [1028];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00498c16;
  local_14 = ExceptionList;
  local_1c = DAT_004c3750 ^ (uint)auStack_47c;
  ExceptionList = &local_14;
  pvVar3 = *(void **)(param_1 + 0x54);
  if (pvVar3 < *(void **)(param_1 + 0x50)) {
    FUN_00475b26();
  }
  local_474[0] = *(char **)(param_1 + 0x50);
  if (*(char **)(param_1 + 0x54) < local_474[0]) {
    FUN_00475b26();
  }
  FUN_00415640(local_468,param_1 + 0x4c,local_474[0],param_1 + 0x4c,pvVar3);
  pvVar3 = *(void **)(param_1 + 100);
  iVar1 = param_1 + 0x5c;
  local_460 = iVar1;
  if (pvVar3 < *(void **)(param_1 + 0x60)) {
    FUN_00475b26();
  }
  local_474[0] = *(char **)(param_1 + 0x60);
  if (*(char **)(param_1 + 100) < local_474[0]) {
    FUN_00475b26();
  }
  FUN_00404450(local_468,iVar1,local_474[0],iVar1,pvVar3);
  pvVar3 = *(void **)(param_1 + 0x74);
  if (pvVar3 < *(void **)(param_1 + 0x70)) {
    FUN_00475b26();
  }
  local_474[0] = *(char **)(param_1 + 0x70);
  if (*(char **)(param_1 + 0x74) < local_474[0]) {
    FUN_00475b26();
  }
  FUN_00404450(local_468,param_1 + 0x6c,local_474[0],param_1 + 0x6c,pvVar3);
  pvVar3 = *(void **)(param_1 + 0x84);
  iVar1 = param_1 + 0x7c;
  local_468[0] = iVar1;
  if (pvVar3 < *(void **)(param_1 + 0x80)) {
    FUN_00475b26();
  }
  local_474[0] = *(char **)(param_1 + 0x80);
  if (*(char **)(param_1 + 0x84) < local_474[0]) {
    FUN_00475b26();
  }
  FUN_00404450((int *)local_474,iVar1,local_474[0],iVar1,pvVar3);
  this = (CSimpleStringT<wchar_t,0> *)(param_1 + 0x34);
  if (1 < *(int *)(*(int *)(param_1 + 0x34) + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)(param_1 + 0x34) + -0xc));
  }
  local_46c = CreateFileW(*(LPCWSTR *)this,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                          (HANDLE)0x0);
  if (local_46c != (HANDLE)0xffffffff) {
    nNumberOfBytesToRead = GetFileSize(local_46c,(LPDWORD)0x0);
    pcVar5 = thunk_FUN_00452728(nNumberOfBytesToRead + 3);
    _memset(pcVar5,0,nNumberOfBytesToRead + 3);
    local_474[0] = pcVar5;
    ReadFile(local_46c,pcVar5,nNumberOfBytesToRead,&local_45c,(LPOVERLAPPED)0x0);
    local_475 = *pcVar5;
    pcVar5 = pcVar5 + 2;
    pcVar6 = _strchr(pcVar5,0xd);
    _Memory = local_474[0];
    while( true ) {
      local_474[0] = _Memory;
      if ((pcVar6 == (char *)0x0) || ((int)local_45c < (int)pcVar5 - (int)_Memory)) {
        CloseHandle(local_46c);
                    /* WARNING: Subroutine does not return */
        _free(local_474[0]);
      }
      *pcVar6 = '\0';
      _strcpy_s(local_420,0x400,pcVar5);
      pcVar7 = local_420;
      pcVar6 = local_420 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if ((pcVar7[(int)(local_420 + (-1 - (int)pcVar6))] == '\r') ||
         (pcVar7[(int)(local_420 + (-1 - (int)pcVar6))] == '\n')) {
        pcVar7[(int)(local_420 + (-1 - (int)pcVar6))] = '\0';
      }
      pcVar8 = pcVar5 + (int)(pcVar7 + (1 - (int)pcVar6));
      if (pcVar5[(int)(pcVar7 + (1 - (int)pcVar6))] == '\n') {
        pcVar8 = pcVar8 + 1;
      }
      if (local_475 == 'C') {
        pcVar5 = local_420;
        local_424 = 0xf;
        local_428 = 0;
        local_438 = (void *)((uint)local_438 & 0xffffff00);
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00402d00(local_43c,(undefined4 *)local_420,(int)pcVar5 - (int)(local_420 + 1));
        local_c = 1;
        FUN_00415350(local_43c);
        local_c = 0xffffffff;
        pvVar3 = local_438;
        uVar4 = local_424;
      }
      else {
        if (local_475 != 'D') {
          (*(code *)PTR_FUN_004c5394)(L"0 && \"Invalid Patch Code\"",L".\\DnPatchThread.cpp",0x57f);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        local_454 = (void *)((uint)local_454 & 0xffffff00);
        pcVar5 = local_420;
        local_440 = 0xf;
        local_444 = 0;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00402d00(local_458,(undefined4 *)local_420,(int)pcVar5 - (int)(local_420 + 1));
        local_c = 0;
        FUN_00415350(local_458);
        local_c = 0xffffffff;
        pvVar3 = local_454;
        uVar4 = local_440;
      }
      if (0xf < uVar4) break;
      local_c = 0xffffffff;
      local_475 = *pcVar8;
      pcVar5 = pcVar8 + 2;
      pcVar6 = _strchr(pcVar5,0xd);
      _Memory = local_474[0];
    }
    local_c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  if (1 < *(int *)(*(int *)this + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
  }
  FUN_00418fd0(L"%s File Not Found");
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_47c);
  return;
}

