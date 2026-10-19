// Address: 0x004772ce
// Name: _fseek
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2005 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((_File == (FILE *)0x0) || (((_Origin != 0 && (_Origin != 1)) && (_Origin != 2)))) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    FUN_0047a953((uint)_File);
    iVar2 = __fseek_nolock(_File,_Offset,_Origin);
    FUN_00477349();
  }
  return iVar2;
}

