// Address: 0x00479791
// Name: _ftell
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ftell
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __cdecl _ftell(FILE *_File)

{
  DWORD *pDVar1;
  long lVar2;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    lVar2 = -1;
  }
  else {
    FUN_0047a953((uint)_File);
    lVar2 = FUN_004795f9(_File);
    FUN_004797f5();
  }
  return lVar2;
}

