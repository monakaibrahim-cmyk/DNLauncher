// Address: 0x0040fc50
// Name: FUN_0040fc50
// Category: Launcher


void FUN_0040fc50(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    FUN_00475b26();
  }
  if (param_4 != param_6) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0040ef90(param_6);
    piVar2 = *(int **)(param_1 + 8);
    for (piVar3 = param_4 + ((iVar1 - (int)param_6) / 0x30) * 0xc; piVar3 != piVar2;
        piVar3 = piVar3 + 0xc) {
      FUN_004100b0(piVar3);
    }
    *(undefined4 **)(param_1 + 8) = param_4 + ((iVar1 - (int)param_6) / 0x30) * 0xc;
  }
  *param_2 = param_3;
  param_2[1] = (int)param_4;
  return;
}

