// Address: 0x0047a49b
// Name: FID_conflict:_wprintf
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _printf
    _wprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict__wprintf(char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  undefined **ppuVar3;
  int _Flag;
  localeinfo_struct *plVar4;
  wchar_t *pwVar5;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    ppuVar3 = FUN_0047a87c();
    FUN_0047a98f(1,(int)(ppuVar3 + 8));
    ppuVar3 = FUN_0047a87c();
    _Flag = __stbuf((FILE *)(ppuVar3 + 8));
    pwVar5 = (wchar_t *)&stack0x00000008;
    plVar4 = (localeinfo_struct *)0x0;
    ppuVar3 = FUN_0047a87c();
    iVar2 = FUN_004836a8((FILE *)(ppuVar3 + 8),(byte *)_Format,plVar4,pwVar5);
    ppuVar3 = FUN_0047a87c();
    __ftbuf(_Flag,(FILE *)(ppuVar3 + 8));
    FUN_0047a537();
  }
  return iVar2;
}

