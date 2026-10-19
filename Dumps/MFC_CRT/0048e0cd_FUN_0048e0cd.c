// Address: 0x0048e0cd
// Name: FUN_0048e0cd
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined8 __cdecl FUN_0048e0cd(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  DWORD *pDVar1;
  int iVar2;
  undefined8 local_28;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
      iVar2 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_0047b85c();
        *pDVar1 = 0;
        pDVar1 = FUN_0047b849();
        *pDVar1 = 9;
        FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_0047b849();
          *pDVar1 = 9;
          pDVar1 = FUN_0047b85c();
          *pDVar1 = 0;
          local_28 = 0xffffffffffffffff;
        }
        else {
          local_28 = FUN_0048e04a(param_1,param_2,param_3,param_4);
        }
        FUN_0048e1dc();
      }
      goto LAB_0048e1d6;
    }
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_0048e1d6:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}

