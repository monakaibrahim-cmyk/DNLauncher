// Address: 0x00460557
// Name: FUN_00460557
// Category: MFC_CRT


int __fastcall FUN_00460557(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[0x18];
  piVar1 = (int *)(**(code **)(*param_1 + 0x13c))();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xa8))();
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

