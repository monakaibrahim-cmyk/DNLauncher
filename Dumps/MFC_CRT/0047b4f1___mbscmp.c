// Address: 0x0047b4f1
// Name: __mbscmp
// Category: MFC_CRT


/* Library Function - Single Match
    __mbscmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbscmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbscmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}

