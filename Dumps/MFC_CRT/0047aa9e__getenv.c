// Address: 0x0047aa9e
// Name: _getenv
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _getenv
   
   Library: Visual Studio 2005 Release */

char * __cdecl _getenv(char *_VarName)

{
  DWORD *pDVar1;
  size_t sVar2;
  char *pcVar3;
  
  if ((_VarName != (char *)0x0) && (sVar2 = _strnlen(_VarName,0x7fff), sVar2 < 0x7fff)) {
    __lock(7);
    pcVar3 = __getenv_helper_nolock(_VarName);
    FUN_0047ab18();
    return pcVar3;
  }
  pDVar1 = FUN_0047b849();
  *pDVar1 = 0x16;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return (char *)0x0;
}

