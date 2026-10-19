// Address: 0x00401f80
// Name: FUN_00401f80
// Category: Launcher


void FUN_00401f80(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5,
                 undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    FUN_00475b26();
  }
  if (param_4 != param_6) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (param_6 != puVar1) {
      puVar2 = param_6;
      do {
        puVar3 = puVar2 + 8;
        puVar5 = (undefined4 *)((int)puVar2 + ((int)param_4 - (int)param_6));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar2 = puVar3;
      } while (puVar3 != puVar1);
    }
    *(undefined4 **)(param_1 + 8) = param_4 + ((int)puVar1 - (int)param_6 >> 5) * 8;
  }
  *param_2 = param_3;
  param_2[1] = (int)param_4;
  return;
}

