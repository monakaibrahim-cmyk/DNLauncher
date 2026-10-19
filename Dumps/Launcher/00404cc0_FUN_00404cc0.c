// Address: 0x00404cc0
// Name: FUN_00404cc0
// Category: Launcher


undefined4 FUN_00404cc0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  wchar_t *extraout_ECX;
  wchar_t *pwVar4;
  
  FUN_00418fd0(L"InitLauncher Start!");
  iVar1 = FUN_00416930();
  if (iVar1 == 0) {
    iVar1 = FUN_00416930();
    if (iVar1 == 0) {
      iVar1 = FUN_00404eb0();
      if (iVar1 == 0) {
        uVar2 = FUN_00404da0();
        return uVar2;
      }
      puVar3 = FUN_0040a2b0();
      iVar1 = FUN_0040a320((int)puVar3);
      if (iVar1 != 0) {
        uVar2 = FUN_00404da0();
        return uVar2;
      }
      FUN_0040a2b0();
      iVar1 = FUN_0040b6d0();
      if (iVar1 == 0) {
        uVar2 = FUN_00404da0();
        return uVar2;
      }
      puVar3 = FUN_0040a2b0();
      FUN_0040a6e0((int)puVar3);
      iVar1 = FUN_00405eb0();
      if (iVar1 == 0) {
        uVar2 = FUN_00404da0();
        return uVar2;
      }
      FUN_00418fd0(L"InitLauncher Success!");
      return 1;
    }
  }
  FUN_0040a2b0();
  pwVar4 = extraout_ECX;
  FUN_00416590(&stack0xfffffff0);
  FUN_00416510(pwVar4);
  DAT_004cbcd0 = 1;
  return 0;
}

