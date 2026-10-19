// Address: 0x0042b6d0
// Name: FUN_0042b6d0
// Category: Launcher


void FUN_0042b6d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *unaff_EDI;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00475b26();
  }
  if (param_3 != param_5) {
    iVar1 = FUN_0042c140(param_3);
    *(int *)(param_1 + 8) = iVar1;
  }
  unaff_EDI[1] = param_3;
  *unaff_EDI = param_2;
  return;
}

