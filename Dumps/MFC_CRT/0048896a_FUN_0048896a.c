// Address: 0x0048896a
// Name: FUN_0048896a
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_0048896a(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
    iVar2 = (param_1 & 0x1f) * 0x40;
    if ((*(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
      if (param_3 < (LPWSTR)0x80000000) {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_0047b849();
          *pDVar1 = 9;
          pDVar1 = FUN_0047b85c();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = FUN_004883a9(param_1,param_2,param_3);
        }
        FUN_00488a5d();
        return local_20;
      }
      pDVar1 = FUN_0047b85c();
      *pDVar1 = 0;
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x16;
      goto LAB_004889b9;
    }
  }
  pDVar1 = FUN_0047b85c();
  *pDVar1 = 0;
  pDVar1 = FUN_0047b849();
  *pDVar1 = 9;
LAB_004889b9:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}

