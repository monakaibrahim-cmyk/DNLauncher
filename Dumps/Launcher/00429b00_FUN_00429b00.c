// Address: 0x00429b00
// Name: FUN_00429b00
// Category: Launcher


undefined4 * __fastcall FUN_00429b00(undefined4 param_1,char *param_2)

{
  int in_EAX;
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  DWORD local_8;
  void *local_4;
  
  if (*(int *)(in_EAX + 8) != -1) {
    uVar1 = FUN_00429c00(param_1,param_2);
    if (uVar1 != 0xffffffff) {
      if ((*(int *)(in_EAX + 0x2a4) == 0) ||
         ((uint)((*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c) <= uVar1)) {
        FUN_00475b26();
      }
      puVar5 = (undefined4 *)(uVar1 * 0x13c + *(int *)(in_EAX + 0x2a4));
      if (puVar5 != (undefined4 *)0x0) {
        if (*(HANDLE *)(in_EAX + 8) != (HANDLE)0xffffffff) {
          FUN_004290f0(puVar5[0x43],0,*(HANDLE *)(in_EAX + 8),puVar5[0x43],0);
        }
        local_4 = thunk_FUN_00452728(puVar5[0x40]);
        if (*(HANDLE *)(in_EAX + 8) != (HANDLE)0xffffffff) {
          local_8 = 0;
          ReadFile(*(HANDLE *)(in_EAX + 8),local_4,puVar5[0x40],&local_8,(LPOVERLAPPED)0x0);
        }
        pvVar2 = FUN_00452728(0x148);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00428d50();
        }
        puVar6 = puVar3;
        for (iVar4 = 0x4f; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
        }
        puVar3[0x50] = local_4;
        puVar3[0x51] = 0;
        return puVar3;
      }
    }
  }
  return (undefined4 *)0x0;
}

