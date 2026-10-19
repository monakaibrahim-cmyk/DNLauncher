// Address: 0x00402b92
// Name: FUN_00402b92
// Category: Launcher


void FUN_00402b92(void)

{
  rsize_t _MaxCount;
  undefined4 *puVar1;
  void *_Src;
  undefined4 *puVar2;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  _MaxCount = *(rsize_t *)(unaff_EBP + 0xc);
  if (_MaxCount != 0) {
    if (*(uint *)(unaff_EDI + 0x18) < 0x10) {
      _Src = (void *)(unaff_EDI + 4);
    }
    else {
      _Src = *(void **)(unaff_EDI + 4);
    }
    _memcpy_s(*(void **)(unaff_EBP + 8),unaff_ESI + 1,_Src,_MaxCount);
  }
  if (0xf < *(uint *)(unaff_EDI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EDI + 4));
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar2 = (undefined4 *)(unaff_EDI + 4);
  *(undefined1 *)puVar2 = 0;
  *puVar2 = puVar1;
  *(uint *)(unaff_EDI + 0x18) = unaff_ESI;
  *(rsize_t *)(unaff_EDI + 0x14) = _MaxCount;
  if (0xf < unaff_ESI) {
    puVar2 = puVar1;
  }
  *(undefined1 *)((int)puVar2 + _MaxCount) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

