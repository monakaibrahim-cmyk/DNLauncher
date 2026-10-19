// Address: 0x00412af0
// Name: FUN_00412af0
// Category: Launcher


undefined4 FUN_00412af0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  wchar_t *extraout_ECX;
  wchar_t *pwVar3;
  
  FUN_00418fd0(L"Patch Step 2 - PreApplyPakPatch Start");
  iVar1 = FUN_00412740(in_EAX);
  if (iVar1 == 0) {
    FUN_0040a2b0();
    pwVar3 = extraout_ECX;
    FUN_00416590(&stack0xffffffe8);
    FUN_00416510(pwVar3);
    return 0;
  }
  uVar2 = FUN_00412dd0();
  if ((*(int *)(in_EAX + 0x50) != 0) &&
     (*(int *)(in_EAX + 0x54) - *(int *)(in_EAX + 0x50) >> 2 != 0)) {
    FUN_00418fd0(L"Patch Step 2 - PreApplyPakPatch End");
    return uVar2;
  }
  FUN_00418f70(L"*.pak File Not Found!");
  return 3;
}

