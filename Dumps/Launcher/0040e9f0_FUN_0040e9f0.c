// Address: 0x0040e9f0
// Name: FUN_0040e9f0
// Category: Launcher


void FUN_0040e9f0(CSimpleStringT<char,0> *param_1,void *param_2,rsize_t param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)param_1;
  uVar3 = *(uint *)(iVar2 + -0xc);
  iVar1 = uVar3 + param_3;
  if ((int)(1U - *(int *)(iVar2 + -4) | *(int *)(iVar2 + -8) - iVar1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(param_1,iVar1);
  }
  if ((uint)((int)param_2 - iVar2) <= uVar3) {
    param_2 = (void *)(*(int *)param_1 + ((int)param_2 - iVar2));
  }
  _memcpy_s((void *)(*(int *)param_1 + uVar3),param_3,param_2,param_3);
  if ((-1 < iVar1) && (iVar1 <= *(int *)(*(int *)param_1 + -8))) {
    *(int *)(*(int *)param_1 + -0xc) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)param_1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

