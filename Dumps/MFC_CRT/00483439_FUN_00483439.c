// Address: 0x00483439
// Name: FUN_00483439
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD __cdecl FUN_00483439(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
      iVar2 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_0047b849();
          *pDVar1 = 9;
          pDVar1 = FUN_0047b85c();
          *pDVar1 = 0;
          local_20 = 0xffffffff;
        }
        else {
          local_20 = FUN_004833c7(param_1,param_2,param_3);
        }
        FUN_0048350b();
        return local_20;
      }
    }
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}

