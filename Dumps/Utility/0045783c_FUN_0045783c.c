// Address: 0x0045783c
// Name: FUN_0045783c
// Category: Utility


undefined4
FUN_0045783c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80010108;
  }
  else if (param_6 == 0) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

