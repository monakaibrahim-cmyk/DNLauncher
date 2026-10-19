// Address: 0x0047e886
// Name: __mtterm
// Category: MFC_CRT


/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_004c3db0 != -1) {
    iVar2 = DAT_004c3db0;
    pcVar1 = (code *)FUN_0047e7dd(DAT_004cb3c0);
    (*pcVar1)(iVar2);
    DAT_004c3db0 = -1;
  }
  if (dwTlsIndex_004c3db4 != 0xffffffff) {
    TlsFree(dwTlsIndex_004c3db4);
    dwTlsIndex_004c3db4 = 0xffffffff;
  }
  FUN_0047ef54();
  return;
}

