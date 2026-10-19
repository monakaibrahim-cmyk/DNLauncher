// Address: 0x00406440
// Name: FUN_00406440
// Category: Launcher


void FUN_00406440(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5,
                 undefined4 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    FUN_00475b26();
  }
  if (param_4 != param_6) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar2 = (int)puVar1 - (int)param_6;
    if (param_6 != puVar1) {
      iVar3 = (int)param_4 - (int)param_6;
      do {
        FID_conflict_operator_((void *)(iVar3 + (int)param_6),param_6);
        param_6 = param_6 + 1;
      } while (param_6 != puVar1);
    }
    FUN_00406620();
    *(undefined4 **)(param_1 + 8) = param_4 + (iVar2 >> 2);
  }
  param_2[1] = (int)param_4;
  *param_2 = param_3;
  return;
}

