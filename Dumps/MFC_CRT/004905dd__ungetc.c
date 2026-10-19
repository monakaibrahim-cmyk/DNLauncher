// Address: 0x004905dd
// Name: _ungetc
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ungetc
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  DWORD *pDVar1;
  uint uVar2;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0047a953((uint)_File);
    uVar2 = FUN_004904bf(_Ch,_File);
    FUN_00490645();
  }
  return uVar2;
}

