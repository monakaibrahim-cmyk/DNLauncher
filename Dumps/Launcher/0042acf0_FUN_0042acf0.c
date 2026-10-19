// Address: 0x0042acf0
// Name: FUN_0042acf0
// Category: Launcher


void __fastcall FUN_0042acf0(void *param_1,char *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  undefined1 auStack_118 [4];
  DWORD local_114;
  char local_110 [268];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_118;
  if (*(int *)((int)param_1 + 8) != -1) {
    if (*param_2 == '\\') {
      _strcpy_s(local_110,0x104,param_2);
      uVar2 = extraout_ECX;
    }
    else {
      _strcpy_s(local_110,0x104,(char *)((int)param_1 + 0x11c));
      _strcat_s(local_110,0x104,param_2);
      uVar2 = extraout_ECX_00;
    }
    uVar1 = FUN_00429c00(uVar2,local_110);
    if (uVar1 != 0xffffffff) {
      if ((*(int *)((int)param_1 + 0x2a4) == 0) ||
         ((uint)((*(int *)((int)param_1 + 0x2a8) - *(int *)((int)param_1 + 0x2a4)) / 0x13c) <= uVar1
         )) {
        FUN_00475b26();
      }
      iVar4 = uVar1 * 0x13c;
      *(undefined4 *)(*(int *)((int)param_1 + 0x2a4) + 0x100 + iVar4) = 0;
      if ((*(int *)((int)param_1 + 0x2a4) == 0) ||
         ((uint)((*(int *)((int)param_1 + 0x2a8) - *(int *)((int)param_1 + 0x2a4)) / 0x13c) <= uVar1
         )) {
        FUN_00475b26();
      }
      *(undefined4 *)(iVar4 + 0x104 + *(int *)((int)param_1 + 0x2a4)) = 0;
      if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
        iVar3 = *(int *)((int)param_1 + 0x114) + iVar4;
        FUN_004290f0(iVar3,0,*(HANDLE *)((int)param_1 + 8),iVar3,0);
      }
      if ((*(int *)((int)param_1 + 0x2a4) == 0) ||
         (iVar3 = *(int *)((int)param_1 + 0x2a8) - *(int *)((int)param_1 + 0x2a4),
         (uint)(iVar3 / 0x13c) <= uVar1)) {
        FUN_00475b26();
        iVar3 = extraout_ECX_01;
      }
      if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
        local_114 = 0;
        WriteFile(*(HANDLE *)((int)param_1 + 8),(LPCVOID)(*(int *)((int)param_1 + 0x2a4) + iVar4),
                  0x13c,&local_114,(LPOVERLAPPED)0x0);
        iVar3 = extraout_ECX_02;
      }
      if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0xffffffff) {
        FUN_004290f0(iVar3,0,*(HANDLE *)((int)param_1 + 8),0,0);
      }
      FUN_0042a0b0(param_1,uVar1);
      FUN_00429f10(param_1,uVar1);
      __security_check_cookie(local_4 ^ (uint)auStack_118);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_118);
  return;
}

