// Address: 0x0047e766
// Name: FUN_0047e766
// Category: MFC_CRT


int __cdecl FUN_0047e766(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(dwTlsIndex_004c3db4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_004c3db0 != -1)) {
    iVar3 = DAT_004c3db0;
    pcVar2 = TlsGetValue(dwTlsIndex_004c3db4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_0047e7c0;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_0047e6fa();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_0047e7c0:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}

