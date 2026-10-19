// Address: 0x0047f439
// Name: ___sbh_alloc_new_region
// Category: MFC_CRT


/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_004cc230 == DAT_004cc240) {
    pvVar1 = HeapReAlloc(hHeap_004cb3c4,0,lpMem_004cc234,(DAT_004cc240 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_004cc240 = DAT_004cc240 + 0x10;
    lpMem_004cc234 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_004cc230 * 0x14 + (int)lpMem_004cc234);
  pvVar1 = HeapAlloc(hHeap_004cb3c4,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_004cc230 = DAT_004cc230 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(hHeap_004cb3c4,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}

