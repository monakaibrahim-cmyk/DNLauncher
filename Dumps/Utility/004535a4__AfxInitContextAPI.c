// Address: 0x004535a4
// Name: _AfxInitContextAPI
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void __stdcall _AfxInitContextAPI(void)
   
   Library: Visual Studio 2005 Release */

void _AfxInitContextAPI(void)

{
  if (hModule_004c8ef4 == (HMODULE)0x0) {
    hModule_004c8ef4 = GetModuleHandleW(L"KERNEL32");
    if (hModule_004c8ef4 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    DAT_004c8ee4 = GetProcAddress(hModule_004c8ef4,"CreateActCtxW");
    _DAT_004c8ee8 = GetProcAddress(hModule_004c8ef4,"ReleaseActCtx");
    DAT_004c8eec = GetProcAddress(hModule_004c8ef4,"ActivateActCtx");
    DAT_004c8ef0 = GetProcAddress(hModule_004c8ef4,"DeactivateActCtx");
  }
  return;
}

