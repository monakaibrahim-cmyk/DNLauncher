// Address: 0x00479577
// Name: FUN_00479577
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

uint __cdecl FUN_00479577(WCHAR *param_1,uint param_2,uint param_3,FILE *param_4)

{
  DWORD *pDVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 != (FILE *)0x0) {
      FUN_0047a953((uint)param_4);
      uVar2 = FUN_00479418(param_1,param_2,param_3,param_4);
      FUN_004795ef();
      return uVar2;
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}

