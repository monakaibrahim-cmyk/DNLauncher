// Address: 0x0047db53
// Name: __ltow_s
// Category: MFC_CRT


/* Library Function - Single Match
    __ltow_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ltow_s(long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    iVar1 = 1;
  }
  DVar2 = xtow_s(_Val,_SizeInWords,_Radix,iVar1);
  return DVar2;
}

