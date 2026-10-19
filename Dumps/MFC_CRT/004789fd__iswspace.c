// Address: 0x004789fd
// Name: _iswspace
// Category: MFC_CRT


/* Library Function - Single Match
    _iswspace
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswspace(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}

