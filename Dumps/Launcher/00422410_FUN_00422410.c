// Address: 0x00422410
// Name: FUN_00422410
// Category: Launcher


int FUN_00422410(CSimpleStringT<char,0> *param_1)

{
  int iVar1;
  bool bVar2;
  CSimpleStringT<char,0> *this;
  int iVar3;
  int iVar4;
  
  this = param_1;
  iVar3 = *(int *)param_1;
  iVar1 = *(int *)(iVar3 + -0xc);
  iVar4 = 0;
  bVar2 = false;
  param_1 = (CSimpleStringT<char,0> *)0x0;
  if (0 < iVar1) {
    do {
      if (*(short *)(iVar3 + iVar4 * 2) == 0x2f) {
        if (!bVar2) {
          bVar2 = true;
          if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar1) < 0) {
            ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar1);
          }
          iVar3 = *(int *)this;
        }
        param_1 = param_1 + 1;
        *(undefined2 *)(iVar3 + iVar4 * 2) = 0x5c;
      }
      iVar4 = iVar4 * 2 + 2 >> 1;
    } while (iVar4 < iVar1);
    if (bVar2) {
      if ((iVar1 < 0) || (*(int *)(*(int *)this + -8) < iVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80070057);
      }
      *(int *)(*(int *)this + -0xc) = iVar1;
      *(undefined2 *)(*(int *)this + iVar1 * 2) = 0;
    }
  }
  return (int)param_1;
}

