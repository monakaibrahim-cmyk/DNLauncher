// Address: 0x0041f780
// Name: FUN_0041f780
// Category: Launcher


undefined4 FUN_0041f780(void)

{
  int iVar1;
  uint uVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int *unaff_ESI;
  
  FUN_00418fd0(L"InitInterface");
  iVar1 = (**(code **)(*unaff_ESI + 0x178))();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00431760();
  FUN_00431850(unaff_ESI[0x23]);
  (**(code **)(*unaff_ESI + 0x15c))();
  uVar2 = GetWindowLongW((HWND)unaff_ESI[8],-0x14);
  if ((uVar2 & 0x80000) == 0) {
    SetWindowLongW((HWND)unaff_ESI[8],-0x14,uVar2 | 0x80000);
  }
  hModule = GetModuleHandleW(L"USER32.DLL");
  if (hModule != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(hModule,"SetLayeredWindowAttributes");
    if (pFVar3 != (FARPROC)0x0) {
      (*pFVar3)(unaff_ESI[8],0xff00ff,0,1);
    }
  }
  return 1;
}

