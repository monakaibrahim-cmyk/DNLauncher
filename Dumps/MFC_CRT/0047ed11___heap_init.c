// Address: 0x0047ed11
// Name: __heap_init
// Category: MFC_CRT


/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  hHeap_004cb3c4 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (hHeap_004cb3c4 == (HANDLE)0x0) {
    return 0;
  }
  DAT_004cc24c = ___heap_select();
  if ((DAT_004cc24c == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(hHeap_004cb3c4);
    hHeap_004cb3c4 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}

