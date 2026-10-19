// Address: 0x00452753
// Name: _free
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_004cc24c == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_0047f11e(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_00475d0c();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(hHeap_004cb3c4,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_0047b849();
      DVar4 = GetLastError();
      DVar4 = FUN_0047b80e(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}

