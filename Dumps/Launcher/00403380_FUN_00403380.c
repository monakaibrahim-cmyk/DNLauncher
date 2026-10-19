// Address: 0x00403380
// Name: FUN_00403380
// Category: Launcher


void __thiscall FUN_00403380(void *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)this;
  uVar3 = *(uint *)(iVar2 + -0xc);
  iVar1 = uVar3 + param_2;
  uVar4 = (int)param_1 - iVar2 >> 1;
  if ((int)(1U - *(int *)(iVar2 + -4) | *(int *)(iVar2 + -8) - iVar1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar1);
  }
  if (uVar4 <= uVar3) {
    param_1 = (void *)(*(int *)this + uVar4 * 2);
  }
  _memcpy_s((void *)(*(int *)this + uVar3 * 2),param_2 * 2,param_1,param_2 * 2);
  if ((-1 < iVar1) && (iVar1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = iVar1;
    *(undefined2 *)(*(int *)this + iVar1 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

