// Address: 0x0046667e
// Name: _AfxReleaseManagedRefs
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall _AfxReleaseManagedRefs(struct IUnknown *)
   
   Library: Visual Studio 2008 Release */

void _AfxReleaseManagedRefs(IUnknown *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 *puVar3;
  WCHAR *pWVar4;
  WCHAR local_20 [12];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  puVar3 = &DAT_004a3cb8;
  pWVar4 = local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pWVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pWVar4 = pWVar4 + 2;
  }
  hModule = GetModuleHandleW(local_20);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"MFCM80ReleaseManagedReferences");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

