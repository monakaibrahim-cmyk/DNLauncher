// Address: 0x0042ab00
// Name: FUN_0042ab00
// Category: Launcher


void __thiscall FUN_0042ab00(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LPCVOID pvVar4;
  char *pcVar5;
  undefined1 auStack_258 [4];
  void *local_254;
  char local_250 [256];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  char local_110 [268];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_258;
  local_254 = this;
  if ((*(int *)(param_1 + 8) != -1) && (-1 < param_2)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x2a4) != 0) {
      iVar1 = (*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4)) / 0x13c;
    }
    if (((param_2 < iVar1) && (*(int *)((int)this + 0x108) != 0)) &&
       (iVar1 = FUN_00415420(), *(uint *)((int)local_254 + 0x104) <= *(uint *)(iVar1 + 0x108))) {
      if (param_3 != 0) {
        _strcpy_s(local_110,0x104,(char *)((int)local_254 + 4));
        FUN_0042c120();
        FUN_00424a50(local_110);
        puVar2 = (undefined4 *)FUN_00415420();
        pcVar5 = local_250;
        for (iVar1 = 0x4f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pcVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          pcVar5 = pcVar5 + 4;
        }
        _strcpy_s(local_250,0x100,local_110);
        local_150 = *(undefined4 *)((int)local_254 + 0x104);
        local_14c = *(undefined4 *)((int)local_254 + 0x108);
        local_140 = *(undefined4 *)((int)local_254 + 0x114);
        puVar2 = (undefined4 *)FUN_00415420();
        pcVar5 = local_250;
        for (iVar1 = 0x4f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          puVar2 = puVar2 + 1;
        }
      }
      iVar3 = FUN_00415420();
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != -1) {
        FUN_004290f0(iVar1,0,(HANDLE)iVar1,*(LONG *)(iVar3 + 0x10c),0);
      }
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_00429170(*(DWORD *)((int)local_254 + 0x104),*(LPCVOID *)((int)local_254 + 0x140),
                     *(HANDLE *)(param_1 + 8));
      }
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_004290f0(param_2 * 0x13c,0,*(HANDLE *)(param_1 + 8),
                     *(int *)(param_1 + 0x114) + param_2 * 0x13c,0);
      }
      pvVar4 = (LPCVOID)FUN_00415420();
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_00429170(0x13c,pvVar4,*(HANDLE *)(param_1 + 8));
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_258);
  return;
}

