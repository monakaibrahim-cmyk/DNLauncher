// Address: 0x0047674f
// Name: __vsnwprintf_s
// Category: MFC_CRT


/* Library Function - Single Match
    __vsnwprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,
              va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnwprintf_s_l(_DstBuf,_SizeInWords,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}

