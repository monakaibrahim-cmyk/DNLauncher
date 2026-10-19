// Address: 0x00407050
// Name: FUN_00407050
// Category: Launcher


void __thiscall FUN_00407050(void *this,undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar1 = iVar3 + 1;
  if ((int)(1U - *(int *)(iVar2 + -4) | *(int *)(iVar2 + -8) - iVar1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar1);
  }
  *(undefined2 *)(*(int *)this + iVar3 * 2) = param_1;
  if ((-1 < iVar1) && (iVar1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = iVar1;
    *(undefined2 *)(*(int *)this + iVar1 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

