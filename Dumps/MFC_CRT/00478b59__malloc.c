// Address: 0x00478b59
// Name: _malloc
// Category: MFC_CRT


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (hHeap_004cb3c4 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_0047dc10(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_004cc24c == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_00478bca:
      piVar1 = HeapAlloc(hHeap_004cb3c4,0,dwBytes);
    }
    else if ((DAT_004cc24c != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_00478bca;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_004cb848 == 0) {
      pDVar3 = FUN_0047b849();
      *pDVar3 = 0xc;
      goto LAB_00478bf8;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_00478bf8:
      pDVar3 = FUN_0047b849();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}

