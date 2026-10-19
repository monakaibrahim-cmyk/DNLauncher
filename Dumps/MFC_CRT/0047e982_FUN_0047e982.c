// Address: 0x0047e982
// Name: FUN_0047e982
// Category: MFC_CRT


DWORD * FUN_0047e982(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_004c3db0;
  pcVar1 = FUN_0047e854();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_004c3db0;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_0047e7dd(DAT_004cb3bc);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      FUN_0047e8c3((int)_Memory,0);
      DVar3 = GetCurrentThreadId();
      _Memory[1] = 0xffffffff;
      *_Memory = DVar3;
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}

