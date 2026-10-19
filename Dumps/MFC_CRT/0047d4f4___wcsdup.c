// Address: 0x0047d4f4
// Name: __wcsdup
// Category: MFC_CRT


/* Library Function - Single Match
    __wcsdup
   
   Library: Visual Studio 2005 Release */

wchar_t * __cdecl __wcsdup(wchar_t *_Str)

{
  wchar_t *_Dst;
  int iVar1;
  errno_t eVar2;
  
  if (_Str == (wchar_t *)0x0) {
    _Dst = (wchar_t *)0x0;
  }
  else {
    iVar1 = FUN_0047b6a4(_Str);
    _Dst = _calloc(iVar1 + 1U,2);
    if (_Dst == (wchar_t *)0x0) {
      _Dst = (wchar_t *)0x0;
    }
    else {
      eVar2 = _wcscpy_s(_Dst,iVar1 + 1U,_Str);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}

