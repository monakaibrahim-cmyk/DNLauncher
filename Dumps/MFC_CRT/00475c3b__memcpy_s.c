// Address: 0x00475c3b
// Name: _memcpy_s
// Category: MFC_CRT


/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  DWORD *pDVar2;
  
  if (_MaxCount == 0) {
LAB_00475c49:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_00475c52:
      pDVar2 = FUN_0047b849();
      eVar1 = 0x16;
      *pDVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_00475c49;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_00475c52;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pDVar2 = FUN_0047b849();
      eVar1 = 0x22;
      *pDVar2 = 0x22;
    }
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}

