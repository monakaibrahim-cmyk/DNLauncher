// Address: 0x0047f0b2
// Name: ___sbh_heap_init
// Category: MFC_CRT


/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  lpMem_004cc234 = HeapAlloc(hHeap_004cb3c4,0,0x140);
  if (lpMem_004cc234 == (LPVOID)0x0) {
    return 0;
  }
  DAT_004cb840 = 0;
  DAT_004cc230 = 0;
  DAT_004cc23c = lpMem_004cc234;
  DAT_004cc238 = param_1;
  DAT_004cc240 = 0x10;
  return 1;
}

