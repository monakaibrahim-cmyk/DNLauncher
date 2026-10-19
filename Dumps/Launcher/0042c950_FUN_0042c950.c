// Address: 0x0042c950
// Name: FUN_0042c950
// Category: Launcher


void FUN_0042c950(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (param_2 == 0) {
    FUN_00475b26();
  }
  if (param_3 == *(int **)(param_2 + 4)) {
    FUN_00475b26();
  }
  iVar1 = *param_3;
  if (param_3 != *(int **)(unaff_EBX + 4)) {
    *(int *)param_3[1] = iVar1;
    *(int *)(*param_3 + 4) = param_3[1];
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  *param_1 = param_2;
  param_1[1] = iVar1;
  return;
}

