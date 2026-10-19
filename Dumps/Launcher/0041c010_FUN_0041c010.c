// Address: 0x0041c010
// Name: FUN_0041c010
// Category: Launcher


void FUN_0041c010(void)

{
  rsize_t _DstSize;
  wint_t *pwVar1;
  void *_Dst;
  int iVar2;
  errno_t eVar3;
  wint_t *pwVar4;
  int iVar5;
  CSimpleStringT<char,0> *unaff_EDI;
  
  pwVar4 = *(wint_t **)unaff_EDI;
  iVar2 = _iswspace(*pwVar4);
  while (iVar2 != 0) {
    pwVar1 = pwVar4 + 1;
    pwVar4 = pwVar4 + 1;
    iVar2 = _iswspace(*pwVar1);
  }
  pwVar1 = *(wint_t **)unaff_EDI;
  if (pwVar4 != pwVar1) {
    iVar2 = (int)pwVar4 - (int)pwVar1 >> 1;
    if ((int)(1U - *(int *)(pwVar1 + -2) | *(int *)(pwVar1 + -4) - *(int *)(pwVar1 + -6)) < 0) {
      ATL::CSimpleStringT<char,0>::PrepareWrite2(unaff_EDI,*(int *)(pwVar1 + -6));
    }
    _Dst = *(void **)unaff_EDI;
    iVar5 = *(int *)((int)_Dst + -0xc) - iVar2;
    _DstSize = iVar5 * 2 + 2;
    eVar3 = _memmove_s(_Dst,_DstSize,(void *)((int)_Dst + iVar2 * 2),_DstSize);
    FUN_00403120(eVar3);
    if ((iVar5 < 0) || (*(int *)(*(int *)unaff_EDI + -8) < iVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80070057);
    }
    *(int *)(*(int *)unaff_EDI + -0xc) = iVar5;
    *(undefined2 *)(*(int *)unaff_EDI + iVar5 * 2) = 0;
  }
  return;
}

