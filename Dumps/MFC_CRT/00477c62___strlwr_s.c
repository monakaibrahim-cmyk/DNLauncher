// Address: 0x00477c62
// Name: __strlwr_s
// Category: MFC_CRT


/* Library Function - Single Match
    __strlwr_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strlwr_s(char *_Str,size_t _Size)

{
  errno_t eVar1;
  
  eVar1 = __strlwr_s_l(_Str,_Size,(_locale_t)0x0);
  return eVar1;
}

