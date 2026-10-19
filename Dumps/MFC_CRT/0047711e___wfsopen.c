// Address: 0x0047711e
// Name: __wfsopen
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wfsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag)

{
  DWORD *pDVar1;
  FILE *pFVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004bb1e0;
  uStack_c = 0x47712a;
  if (((_Filename == (wchar_t *)0x0) || (_Mode == (wchar_t *)0x0)) || (*_Mode == L'\0')) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pFVar2 = (FILE *)FUN_0048313e();
    if (pFVar2 == (FILE *)0x0) {
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != L'\0') {
        pFVar2 = __wopenfile(_Filename,_Mode,_ShFlag,pFVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_004771da();
        return pFVar2;
      }
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x16;
      __local_unwind4(&DAT_004c3750,(int)local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}

