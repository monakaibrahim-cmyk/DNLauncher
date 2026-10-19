// Address: 0x00414d70
// Name: FUN_00414d70
// Category: Launcher


undefined4 FUN_00414d70(int param_1)

{
  wchar_t *extraout_ECX;
  wchar_t *pwVar1;
  
  FUN_00418fd0(L"ProcessFullVersionPatch");
  FUN_0040a2b0();
  pwVar1 = extraout_ECX;
  FUN_00416590(&stack0xfffffff4);
  FUN_00416510(pwVar1);
  SendMessageW(*(HWND *)(param_1 + 0x44),0x10,0,0);
  return 0;
}

