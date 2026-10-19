// Address: 0x004762c4
// Name: _memmove_s
// Category: MFC_CRT


/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  DWORD *pDVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_00476319:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      pDVar1 = FUN_0047b849();
      eVar2 = 0x16;
      *pDVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_00476319;
      }
      pDVar1 = FUN_0047b849();
      eVar2 = 0x22;
      *pDVar1 = 0x22;
    }
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}

