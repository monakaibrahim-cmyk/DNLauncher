// Address: 0x00429370
// Name: FUN_00429370
// Category: Launcher


void __thiscall FUN_00429370(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  LPCVOID lpBuffer;
  void *pvVar3;
  void *extraout_ECX;
  HANDLE extraout_ECX_00;
  HANDLE hFile;
  int iVar4;
  void *local_c [2];
  
  *(undefined1 *)(param_1 + 0x11c) = 0;
  local_c[0] = this;
  if ((*(int *)(param_1 + 8) != -1) && (*(char *)(param_1 + 4) == '\0')) {
    iVar4 = 0;
    pvVar3 = this;
    if (*(int *)(param_1 + 0x2a4) != 0) {
      pvVar3 = (void *)(*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4));
      iVar4 = (int)pvVar3 / 0x13c;
    }
    if (*(int *)(param_1 + 0x110) != iVar4) {
      if (*(int *)(param_1 + 0x10c) < 0xb) {
        FUN_00429290();
        *(undefined1 *)(param_1 + 0x118) = 1;
        *(undefined4 *)(param_1 + 0x10c) = 0xb;
        pvVar3 = extraout_ECX;
      }
      iVar4 = 0;
      if (*(int *)(param_1 + 0x2a4) != 0) {
        pvVar3 = (void *)(*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4));
        iVar4 = (int)pvVar3 / 0x13c;
      }
      *(int *)(param_1 + 0x110) = iVar4;
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_004290f0(pvVar3,0,*(HANDLE *)(param_1 + 8),0,0);
      }
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        local_c[0] = (void *)0x0;
        WriteFile(*(HANDLE *)(param_1 + 8),(LPCVOID)(param_1 + 0xc),0x110,(LPDWORD)local_c,
                  (LPOVERLAPPED)0x0);
      }
    }
    if ((*(char *)(param_1 + 4) == '\0') && (*(char *)(param_1 + 0x118) != '\0')) {
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_004290f0(*(undefined4 *)(param_1 + 0x114),0,*(HANDLE *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0x114),0);
      }
      if (*(int *)(param_1 + 0x2a4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4)) / 0x13c;
      }
      lpBuffer = (LPCVOID)FUN_00415420();
      hFile = *(HANDLE *)(param_1 + 8);
      if (hFile != (HANDLE)0xffffffff) {
        local_c[0] = (void *)0x0;
        WriteFile(hFile,lpBuffer,iVar4 * 0x13c,(LPDWORD)local_c,(LPOVERLAPPED)0x0);
        hFile = extraout_ECX_00;
      }
      *(undefined1 *)(param_1 + 0x118) = 0;
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_004290f0(hFile,0,*(HANDLE *)(param_1 + 8),0,0);
      }
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        local_c[0] = (void *)0x0;
        WriteFile(*(HANDLE *)(param_1 + 8),(LPCVOID)(param_1 + 0xc),0x110,(LPDWORD)local_c,
                  (LPOVERLAPPED)0x0);
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2a8);
  if (uVar1 < *(uint *)(param_1 + 0x2a4)) {
    FUN_00475b26();
  }
  uVar2 = *(uint *)(param_1 + 0x2a4);
  if (*(uint *)(param_1 + 0x2a8) < uVar2) {
    FUN_00475b26();
  }
  if (uVar2 != uVar1) {
    iVar4 = FUN_0042c140(uVar2);
    *(int *)(param_1 + 0x2a8) = iVar4;
  }
  FUN_0042b790(*(void **)(*(int *)(param_1 + 0x2b4) + 4));
  *(int *)(*(int *)(param_1 + 0x2b4) + 4) = *(int *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2b4);
  *(int *)(*(int *)(param_1 + 0x2b4) + 8) = *(int *)(param_1 + 0x2b4);
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}

