// Address: 0x00404450
// Name: FUN_00404450
// Category: Launcher


void FUN_00404450(int *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  int iVar1;
  int unaff_EBX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00475b26();
  }
  if (param_3 != param_5) {
    iVar1 = FUN_00404520(param_5);
    FUN_00404570();
    *(int *)(unaff_EBX + 8) = iVar1;
  }
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  return;
}

