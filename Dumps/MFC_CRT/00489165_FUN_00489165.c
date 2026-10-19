// Address: 0x00489165
// Name: FUN_00489165
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD __cdecl FUN_00489165(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
      iVar3 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)(iVar3 + 4 + (&DAT_004cc260)[(int)param_1 >> 5]) & 1) != 0) {
        ___lock_fhandle(param_1);
        if ((*(byte *)(iVar3 + 4 + (&DAT_004cc260)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)FUN_00490078(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_00489227;
          pDVar1 = FUN_0047b85c();
          *pDVar1 = local_20;
        }
        pDVar1 = FUN_0047b849();
        *pDVar1 = 9;
        local_20 = 0xffffffff;
LAB_00489227:
        FUN_0048923c();
        return local_20;
      }
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}

