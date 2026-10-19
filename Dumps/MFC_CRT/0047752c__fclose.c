// Address: 0x0047752c
// Name: _fclose
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _fclose(FILE *_File)

{
  DWORD *pDVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    FUN_0047a953((uint)_File);
    local_20 = FUN_004774ba(_File);
    FUN_004775a0();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}

