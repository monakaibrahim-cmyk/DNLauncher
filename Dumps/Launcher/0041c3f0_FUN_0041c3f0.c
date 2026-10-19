// Address: 0x0041c3f0
// Name: FUN_0041c3f0
// Category: Launcher


HMODULE __fastcall FUN_0041c3f0(int param_1)

{
  HMODULE pHVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = GetModuleHandleW(*(LPCWSTR *)(param_1 + 0xc));
    *(HMODULE *)(param_1 + 4) = pHVar1;
    if (pHVar1 != (HMODULE)0x0) {
      return pHVar1;
    }
    pHVar1 = LoadLibraryW(*(LPCWSTR *)(param_1 + 0xc));
    *(HMODULE *)(param_1 + 4) = pHVar1;
    *(bool *)(param_1 + 8) = pHVar1 != (HMODULE)0x0;
  }
  return *(HMODULE *)(param_1 + 4);
}

