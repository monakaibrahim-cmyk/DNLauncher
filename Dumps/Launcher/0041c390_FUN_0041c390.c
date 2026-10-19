// Address: 0x0041c390
// Name: FUN_0041c390
// Category: Launcher


void __thiscall FUN_0041c390(void *this,undefined4 *param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)this + 0x3c) == 0) {
    if (*(int *)((int)this + 4) == 0) {
      pHVar1 = GetModuleHandleW(*(LPCWSTR *)((int)this + 0xc));
      *(HMODULE *)((int)this + 4) = pHVar1;
      if (pHVar1 == (HMODULE)0x0) {
        pHVar1 = LoadLibraryW(*(LPCWSTR *)((int)this + 0xc));
        *(HMODULE *)((int)this + 4) = pHVar1;
        *(bool *)((int)this + 8) = pHVar1 != (HMODULE)0x0;
      }
    }
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),"ImageList_Draw");
    *(FARPROC *)((int)this + 0x3c) = pFVar2;
  }
  *param_1 = *(undefined4 *)((int)this + 0x3c);
  return;
}

