// Address: 0x0047b1fd
// Name: __fsopen
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004bb388;
  uStack_c = 0x47b209;
  if (((_Filename == (char *)0x0) || (_Mode == (char *)0x0)) || (*_Mode == '\0')) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    puVar2 = FUN_0048313e();
    if (puVar2 == (undefined4 *)0x0) {
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != '\0') {
        pFVar3 = (FILE *)FUN_0048c2d5(_Filename,_Mode,_ShFlag,puVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_0047b2b7();
        return pFVar3;
      }
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x16;
      __local_unwind4(&DAT_004c3750,(int)local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}

