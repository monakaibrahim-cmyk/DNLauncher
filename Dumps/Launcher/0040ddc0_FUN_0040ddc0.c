// Address: 0x0040ddc0
// Name: FUN_0040ddc0
// Category: Launcher


int * FUN_0040ddc0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5,
                  undefined4 *param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    FUN_00475b26();
  }
  if (param_4 != param_6) {
    piVar2 = (int *)FUN_0040f170(param_6);
    piVar1 = *(int **)(param_1 + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 5) {
      FUN_00410380(piVar3);
    }
    *(int **)(param_1 + 8) = piVar2;
  }
  *param_2 = param_3;
  param_2[1] = (int)param_4;
  return param_2;
}

