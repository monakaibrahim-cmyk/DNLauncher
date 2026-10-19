// Address: 0x0047efbe
// Name: FUN_0047efbe
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_0047efbe(int param_1)

{
  LPCRITICAL_SECTION *pp_Var1;
  LPCRITICAL_SECTION _Memory;
  DWORD *pDVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (hHeap_004cb3c4 == (HANDLE)0x0) {
    __FF_MSGBANNER();
    FUN_0047dc10(0x1e);
    ___crtExitProcess(0xff);
  }
  pp_Var1 = &lpCriticalSection_004c3dc0 + param_1 * 2;
  if (*pp_Var1 == (LPCRITICAL_SECTION)0x0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      pDVar2 = FUN_0047b849();
      *pDVar2 = 0xc;
      uVar4 = 0;
    }
    else {
      __lock(10);
      if (*pp_Var1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *pp_Var1 = _Memory;
      FUN_0047f078();
      uVar4 = 1;
    }
  }
  return uVar4;
}

