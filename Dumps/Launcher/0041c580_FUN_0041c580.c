// Address: 0x0041c580
// Name: FUN_0041c580
// Category: Launcher


void FUN_0041c580(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x44) == 0) {
    if (*(int *)(unaff_ESI + 4) == 0) {
      pHVar1 = GetModuleHandleW(*(LPCWSTR *)(unaff_ESI + 0xc));
      *(HMODULE *)(unaff_ESI + 4) = pHVar1;
      if (pHVar1 == (HMODULE)0x0) {
        pHVar1 = LoadLibraryW(*(LPCWSTR *)(unaff_ESI + 0xc));
        *(HMODULE *)(unaff_ESI + 4) = pHVar1;
        *(bool *)(unaff_ESI + 8) = pHVar1 != (HMODULE)0x0;
      }
    }
    pFVar2 = GetProcAddress(*(HMODULE *)(unaff_ESI + 4),"ImageList_AddMasked");
    *(FARPROC *)(unaff_ESI + 0x44) = pFVar2;
  }
  *unaff_EDI = *(undefined4 *)(unaff_ESI + 0x44);
  return;
}

