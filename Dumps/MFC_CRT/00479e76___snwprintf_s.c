// Address: 0x00479e76
// Name: __snwprintf_s
// Category: MFC_CRT


/* Library Function - Single Match
    __snwprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl
__snwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsnwprintf_s_l(_DstBuf,_SizeInWords,_MaxCount,_Format,(_locale_t)0x0,&stack0x00000014);
  return iVar1;
}

