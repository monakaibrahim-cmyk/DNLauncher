// Address: 0x004299c0
// Name: FUN_004299c0
// Category: Launcher


undefined4 __fastcall FUN_004299c0(DWORD param_1,char *param_2)

{
  int in_EAX;
  uint uVar1;
  void *lpBuffer;
  void *pvVar2;
  int iVar3;
  DWORD local_4;
  
  if (*(int *)(in_EAX + 8) != -1) {
    local_4 = param_1;
    uVar1 = FUN_00429c00(param_1,param_2);
    if (uVar1 != 0xffffffff) {
      if ((*(int *)(in_EAX + 0x2a4) == 0) ||
         ((uint)((*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c) <= uVar1)) {
        FUN_00475b26();
      }
      iVar3 = uVar1 * 0x13c + *(int *)(in_EAX + 0x2a4);
      if (iVar3 != 0) {
        if (*(HANDLE *)(in_EAX + 8) != (HANDLE)0xffffffff) {
          FUN_004290f0(*(undefined4 *)(iVar3 + 0x10c),0,*(HANDLE *)(in_EAX + 8),
                       *(undefined4 *)(iVar3 + 0x10c),0);
        }
        lpBuffer = thunk_FUN_00452728(*(size_t *)(iVar3 + 0x100));
        if (*(HANDLE *)(in_EAX + 8) != (HANDLE)0xffffffff) {
          local_4 = 0;
          ReadFile(*(HANDLE *)(in_EAX + 8),lpBuffer,*(DWORD *)(iVar3 + 0x100),&local_4,
                   (LPOVERLAPPED)0x0);
        }
        local_4 = *(size_t *)(iVar3 + 0x104);
        pvVar2 = thunk_FUN_00452728(local_4);
        iVar3 = FUN_00431900(*(undefined4 *)(iVar3 + 0x100),pvVar2);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _free(lpBuffer);
        }
                    /* WARNING: Subroutine does not return */
        _free(lpBuffer);
      }
    }
  }
  return 0;
}

