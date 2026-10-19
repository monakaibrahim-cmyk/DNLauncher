// Address: 0x00477dc5
// Name: _vsprintf_s
// Category: MFC_CRT


/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}

