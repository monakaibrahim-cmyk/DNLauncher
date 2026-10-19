// Address: 0x0041bf90
// Name: FUN_0041bf90
// Category: Launcher


void FUN_0041bf90(void)

{
  wint_t _C;
  int iVar1;
  CSimpleStringT<char,0> *unaff_EBX;
  wint_t *pwVar2;
  int iVar3;
  wint_t *pwVar4;
  
  pwVar4 = *(wint_t **)unaff_EBX;
  _C = *pwVar4;
  pwVar2 = (wint_t *)0x0;
  if (_C != 0) {
    do {
      iVar1 = _iswspace(_C);
      if (iVar1 == 0) {
        pwVar2 = (wint_t *)0x0;
      }
      else if (pwVar2 == (wint_t *)0x0) {
        pwVar2 = pwVar4;
      }
      _C = pwVar4[1];
      pwVar4 = pwVar4 + 1;
    } while (_C != 0);
    if (pwVar2 != (wint_t *)0x0) {
      iVar1 = *(int *)unaff_EBX;
      iVar3 = (int)pwVar2 - iVar1 >> 1;
      if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar3) < 0) {
        ATL::CSimpleStringT<char,0>::PrepareWrite2(unaff_EBX,iVar3);
      }
      if ((iVar3 < 0) || (*(int *)(*(int *)unaff_EBX + -8) < iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80070057);
      }
      *(int *)(*(int *)unaff_EBX + -0xc) = iVar3;
      *(undefined2 *)(*(int *)unaff_EBX + iVar3 * 2) = 0;
    }
  }
  return;
}

