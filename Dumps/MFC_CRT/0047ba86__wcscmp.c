// Address: 0x0047ba86
// Name: _wcscmp
// Category: MFC_CRT


/* Library Function - Single Match
    _wcscmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
    if ((iVar1 != 0) || (*_Str2 == L'\0')) break;
    _Str1 = _Str1 + 1;
    _Str2 = _Str2 + 1;
  }
  if (iVar1 < 0) {
    return -1;
  }
  if (0 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}

