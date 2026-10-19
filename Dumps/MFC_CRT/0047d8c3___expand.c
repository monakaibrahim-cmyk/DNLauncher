// Address: 0x0047d8c3
// Name: __expand
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __expand
   
   Library: Visual Studio 2005 Release */

void * __cdecl __expand(void *_Memory,size_t _NewSize)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  LPVOID pvVar4;
  DWORD DVar5;
  void *this;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (_NewSize < 0xffffffe1) {
      if (DAT_004cc24c == 3) {
        this = (void *)0x4;
        __lock(4);
        puVar2 = (uint *)thunk_FUN_0047f11e(this,(int)_Memory);
        if (((puVar2 != (uint *)0x0) && (local_20 = (void *)0x0, _NewSize <= DAT_004cc238)) &&
           (iVar3 = ___sbh_resize_block(puVar2,(int)_Memory,_NewSize), iVar3 != 0)) {
          local_20 = _Memory;
        }
        FUN_0047d9a9();
        if (puVar2 != (uint *)0x0) {
          return local_20;
        }
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
      }
      pvVar4 = HeapReAlloc(hHeap_004cb3c4,0x10,_Memory,_NewSize);
      if (pvVar4 != (LPVOID)0x0) {
        return pvVar4;
      }
      pDVar1 = FUN_0047b849();
      DVar5 = GetLastError();
      DVar5 = FUN_0047b80e(DVar5);
      *pDVar1 = DVar5;
      return (void *)0x0;
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0xc;
  }
  return (void *)0x0;
}

