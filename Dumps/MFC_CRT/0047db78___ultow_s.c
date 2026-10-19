// Address: 0x0047db78
// Name: __ultow_s
// Category: MFC_CRT


/* Library Function - Single Match
    __ultow_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ultow_s(ulong _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  DWORD DVar1;
  
  DVar1 = xtow_s(_Val,_SizeInWords,_Radix,0);
  return DVar1;
}

