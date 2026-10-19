// Address: 0x00493b13
// Name: __mbsicmp
// Category: MFC_CRT


/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}

