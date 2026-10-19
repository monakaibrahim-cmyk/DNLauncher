// Address: 0x00475d44
// Name: FUN_00475d44
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int * __cdecl FUN_00475d44(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  void *this;
  void *this_00;
  uint *local_24;
  int *local_20;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
    return piVar1;
  }
  if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (DAT_004cc24c == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < param_2) goto LAB_00475f1d;
      this_00 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_0047f11e(this_00,(int)param_1);
      if (local_24 != (uint *)0x0) {
        if (param_2 <= DAT_004cc238) {
          iVar2 = ___sbh_resize_block(local_24,(int)param_1,(int)param_2);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block(param_2);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(param_1[-1] - 1U);
              if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                puVar3 = param_2;
              }
              _memcpy(local_20,param_1,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_0047f11e(this,(int)param_1);
              ___sbh_free_block(local_24,(int)param_1);
            }
          }
          else {
            local_20 = param_1;
          }
        }
        if (local_20 == (int *)0x0) {
          if (param_2 == (uint *)0x0) {
            param_2 = (uint *)&DAT_00000001;
          }
          param_2 = (uint *)((uint)((int)param_2 + 0xf) & 0xfffffff0);
          local_20 = HeapAlloc(hHeap_004cb3c4,0,(SIZE_T)param_2);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(param_1[-1] + -1);
            if (param_2 <= (uint *)(param_1[-1] + -1)) {
              puVar3 = param_2;
            }
            _memcpy(local_20,param_1,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)param_1);
          }
        }
      }
      FUN_00475e88();
      if (local_24 == (uint *)0x0) {
        if (param_2 == (uint *)0x0) {
          param_2 = (uint *)&DAT_00000001;
        }
        param_2 = (uint *)((uint)((int)param_2 + 0xf) & 0xfffffff0);
        local_20 = HeapReAlloc(hHeap_004cb3c4,0,param_1,(SIZE_T)param_2);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_004cb848 == 0) {
        pDVar4 = FUN_0047b849();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (int *)0x0;
        }
        goto LAB_00475f4a;
      }
      iVar2 = __callnewh((size_t)param_2);
    } while (iVar2 != 0);
    pDVar4 = FUN_0047b849();
    if (local_24 != (uint *)0x0) goto LAB_00475f29;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < param_2) goto LAB_00475f1d;
      if (param_2 == (uint *)0x0) {
        param_2 = (uint *)&DAT_00000001;
      }
      piVar1 = HeapReAlloc(hHeap_004cb3c4,0,param_1,(SIZE_T)param_2);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_004cb848 == 0) {
        pDVar4 = FUN_0047b849();
LAB_00475f4a:
        DVar5 = GetLastError();
        DVar5 = FUN_0047b80e(DVar5);
        *pDVar4 = DVar5;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)param_2);
    } while (iVar2 != 0);
    pDVar4 = FUN_0047b849();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_0047b80e(DVar5);
  *pDVar4 = DVar5;
  return (int *)0x0;
LAB_00475f1d:
  __callnewh((size_t)param_2);
  pDVar4 = FUN_0047b849();
LAB_00475f29:
  *pDVar4 = 0xc;
  return (int *)0x0;
}

