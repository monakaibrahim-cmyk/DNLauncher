// Address: 0x00486d93
// Name: __ismbblead_l
// Category: MFC_CRT


/* Library Function - Single Match
    __ismbblead_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,4);
  return iVar1;
}

