// Address: 0x0042a440
// Name: FUN_0042a440
// Category: Launcher


void __fastcall FUN_0042a440(void *param_1,char *param_2)

{
  uint uVar1;
  uint *_Memory;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  LPCVOID lpBuffer;
  undefined4 extraout_ECX;
  HANDLE extraout_ECX_00;
  HANDLE extraout_ECX_01;
  HANDLE extraout_ECX_02;
  HANDLE extraout_ECX_03;
  HANDLE hFile;
  char *pcVar6;
  undefined8 uVar7;
  uint local_268;
  uint local_264;
  DWORD local_260;
  undefined4 local_25c;
  uint *local_254;
  char local_250 [256];
  uint local_150;
  undefined4 local_14c;
  uint local_148;
  undefined4 local_144;
  uint local_140;
  char local_110 [268];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_268;
  if (*(int *)((int)param_1 + 8) == -1) {
    __security_check_cookie(local_4 ^ (uint)&local_268);
    return;
  }
  local_264 = 0x10d;
  _Memory = thunk_FUN_00452728(0x10d);
  local_254 = _Memory;
  uVar2 = FUN_004319a0(_Memory,&local_264);
  if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  uVar2 = *_Memory;
  local_260 = uVar2 % 0x3c;
  _strcpy_s(local_110,0x104,param_2);
  __strlwr_s(local_110,0x104);
  FUN_00424a50(local_110);
  iVar3 = FUN_00429c00(extraout_ECX,local_110);
  if (iVar3 != -1) {
    FUN_0042acf0(param_1,local_110);
  }
  uVar1 = local_264;
  local_268 = FUN_0042a280(local_264);
  if (local_268 == 0xffffffff) {
    _memset(local_250,0,0x13c);
    _strcpy_s(local_250,0x100,local_110);
    local_144 = *(undefined4 *)((int)param_1 + 0x114);
    local_150 = uVar1;
    local_148 = uVar1;
    local_14c = 0x100;
    local_140 = uVar2 % 0x3c;
    FUN_0042b020();
    iVar3 = 0;
    if (*(int *)((int)param_1 + 0x2a4) != 0) {
      iVar3 = (*(int *)((int)param_1 + 0x2a8) - *(int *)((int)param_1 + 0x2a4)) / 0x13c;
    }
    local_268 = iVar3 - 1;
    iVar3 = FUN_00415420();
    hFile = *(HANDLE *)((int)param_1 + 8);
    if (hFile != (HANDLE)0xffffffff) {
      FUN_004290f0(hFile,0,hFile,*(LONG *)(iVar3 + 0x10c),0);
      hFile = extraout_ECX_00;
    }
    if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
      local_260 = 0;
      WriteFile(*(HANDLE *)((int)param_1 + 8),local_254,local_264,&local_260,(LPOVERLAPPED)0x0);
      hFile = extraout_ECX_01;
    }
    *(undefined1 *)((int)param_1 + 0x118) = 1;
    if (*(HANDLE *)((int)param_1 + 8) == (HANDLE)0xffffffff) {
      local_25c = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0x114) = 0xffffffff;
    }
    else {
      uVar7 = FUN_004290f0(hFile,1,*(HANDLE *)((int)param_1 + 8),0,0);
      local_25c = (undefined4)((ulonglong)uVar7 >> 0x20);
      *(int *)((int)param_1 + 0x114) = (int)uVar7;
      hFile = extraout_ECX_02;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_00415420();
    pcVar6 = local_250;
    for (iVar3 = 0x4f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      pcVar6 = pcVar6 + 4;
    }
    _strcpy_s(local_250,0x100,local_110);
    local_150 = local_264;
    local_14c = 0x100;
    local_140 = local_260;
    puVar4 = (undefined4 *)FUN_00415420();
    pcVar6 = local_250;
    for (iVar3 = 0x4f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar4 = puVar4 + 1;
    }
    iVar5 = FUN_00415420();
    iVar3 = *(int *)((int)param_1 + 8);
    if (iVar3 != -1) {
      FUN_004290f0(iVar3,0,(HANDLE)iVar3,*(LONG *)(iVar5 + 0x10c),0);
    }
    if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
      local_260 = 0;
      WriteFile(*(HANDLE *)((int)param_1 + 8),local_254,local_264,&local_260,(LPOVERLAPPED)0x0);
    }
    if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
      iVar3 = *(int *)((int)param_1 + 0x114) + local_268 * 0x13c;
      FUN_004290f0(iVar3,0,*(HANDLE *)((int)param_1 + 8),iVar3,0);
    }
    lpBuffer = (LPCVOID)FUN_00415420();
    hFile = *(HANDLE *)((int)param_1 + 8);
    if (hFile != (HANDLE)0xffffffff) {
      local_260 = 0;
      WriteFile(hFile,lpBuffer,0x13c,&local_260,(LPOVERLAPPED)0x0);
      hFile = extraout_ECX_03;
    }
  }
  iVar3 = 0;
  if (*(int *)((int)param_1 + 0x2a4) != 0) {
    iVar3 = (*(int *)((int)param_1 + 0x2a8) - *(int *)((int)param_1 + 0x2a4)) / 0x13c;
  }
  *(int *)((int)param_1 + 0x110) = iVar3;
  if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
    FUN_004290f0(hFile,0,*(HANDLE *)((int)param_1 + 8),0,0);
  }
  if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
    local_260 = 0;
    WriteFile(*(HANDLE *)((int)param_1 + 8),(LPCVOID)((int)param_1 + 0xc),0x110,&local_260,
              (LPOVERLAPPED)0x0);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_254);
}

