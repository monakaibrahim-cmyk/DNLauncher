// Address: 0x00418220
// Name: FUN_00418220
// Category: Launcher


int * FUN_00418220(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00475b26();
  }
  if (param_3 != param_5) {
    puVar1 = *(undefined4 **)(unaff_EBX + 8);
    iVar2 = (int)puVar1 - (int)param_5;
    if (param_5 != puVar1) {
      iVar3 = (int)param_3 - (int)param_5;
      do {
        *(undefined4 *)(iVar3 + (int)param_5) = *param_5;
        *(undefined4 *)(iVar3 + 4 + (int)param_5) = param_5[1];
        param_5 = param_5 + 2;
      } while (param_5 != puVar1);
    }
    *(undefined4 **)(unaff_EBX + 8) = param_3 + (iVar2 >> 3) * 2;
  }
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  return param_1;
}

