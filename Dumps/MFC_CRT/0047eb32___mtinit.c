// Address: 0x0047eb32
// Name: __mtinit
// Category: MFC_CRT


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  undefined1 *puVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_004cb3b4 = GetProcAddress(hModule,"FlsAlloc");
  lpTlsValue_004cb3b8 = GetProcAddress(hModule,"FlsGetValue");
  DAT_004cb3bc = GetProcAddress(hModule,"FlsSetValue");
  DAT_004cb3c0 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_004cb3b4 == (FARPROC)0x0) || (lpTlsValue_004cb3b8 == (LPVOID)0x0)) ||
      (DAT_004cb3bc == (FARPROC)0x0)) || (DAT_004cb3c0 == (FARPROC)0x0)) {
    lpTlsValue_004cb3b8 = TlsGetValue_exref;
    DAT_004cb3b4 = (FARPROC)&LAB_0047e84b;
    DAT_004cb3bc = TlsSetValue_exref;
    DAT_004cb3c0 = TlsFree_exref;
  }
  dwTlsIndex_004c3db4 = TlsAlloc();
  if ((dwTlsIndex_004c3db4 != 0xffffffff) &&
     (BVar1 = TlsSetValue(dwTlsIndex_004c3db4,lpTlsValue_004cb3b8), BVar1 != 0)) {
    __init_pointers();
    DAT_004cb3b4 = (FARPROC)FUN_0047e766((int)DAT_004cb3b4);
    lpTlsValue_004cb3b8 = (LPVOID)FUN_0047e766((int)lpTlsValue_004cb3b8);
    DAT_004cb3bc = (FARPROC)FUN_0047e766((int)DAT_004cb3bc);
    DAT_004cb3c0 = (FARPROC)FUN_0047e766((int)DAT_004cb3c0);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      puVar6 = &LAB_0047ea11;
      pcVar3 = (code *)FUN_0047e7dd((int)DAT_004cb3b4);
      DAT_004c3db0 = (*pcVar3)(puVar6);
      if ((DAT_004c3db0 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_004c3db0;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_0047e7dd((int)DAT_004cb3bc);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_0047e8c3((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}

