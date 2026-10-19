// Address: 0x00441f10
// Name: FUN_00441f10
// Category: Utility


void __cdecl FUN_00441f10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  piVar1 = (int *)(**(code **)unaff_EDI[1])();
  iVar3 = 0;
  *piVar1 = 0;
  piVar1[1] = 0x1f;
  piVar1[2] = 0;
  piVar1[3] = 0x3f;
  piVar1[4] = 0;
  piVar1[5] = 0x1f;
  FUN_00441840(unaff_EDI,piVar1);
  iVar2 = FUN_00441c40(unaff_EDI,(int)piVar1,1,param_1);
  if (0 < iVar2) {
    do {
      FUN_00441d90((int)unaff_EDI,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  unaff_EDI[0x1c] = iVar2;
  *(undefined4 *)(*unaff_EDI + 0x14) = 0x60;
  *(int *)(*unaff_EDI + 0x18) = iVar2;
  (**(code **)(*unaff_EDI + 4))();
  return;
}

