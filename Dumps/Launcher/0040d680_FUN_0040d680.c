// Address: 0x0040d680
// Name: FUN_0040d680
// Category: Launcher


undefined4 FUN_0040d680(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  int iVar3;
  char *lpProcName;
  undefined4 *puVar4;
  undefined4 local_4;
  
  lpProcName = "IsWow64Process";
  local_4 = 0;
  hModule = GetModuleHandleW(L"kernel32");
  pFVar1 = GetProcAddress(hModule,lpProcName);
  if (pFVar1 == (FARPROC)0x0) {
    (*(code *)PTR_FUN_004c5394)(&DAT_004b1064,L".\\DnPatchInfo.cpp",0x5e8);
  }
  else {
    puVar4 = &local_4;
    pvVar2 = GetCurrentProcess();
    iVar3 = (*pFVar1)(pvVar2);
    if ((iVar3 != 0) && (puVar4 != (undefined4 *)0x0)) {
      return 1;
    }
  }
  return 0;
}

