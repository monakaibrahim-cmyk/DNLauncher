// Address: 0x0048fe90
// Name: FID_conflict:__sopen_helper
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  DWORD *pDVar1;
  DWORD DVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004bb890;
  uStack_c = 0x48fe9c;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    pDVar1 = FUN_0047b849();
    DVar2 = 0x16;
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    DVar2 = FUN_0048f736(local_20,(LPCWSTR)_Filename,_OFlag,_ShFlag,(byte)_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_0048ff2e();
    if (DVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return DVar2;
}

