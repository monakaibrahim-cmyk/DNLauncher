// Address: 0x004789ef
// Name: _iswdigit
// Category: MFC_CRT


/* Library Function - Single Match
    _iswdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswdigit(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,4);
  return iVar1;
}

