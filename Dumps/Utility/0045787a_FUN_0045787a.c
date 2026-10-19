// Address: 0x0045787a
// Name: FUN_0045787a
// Category: Utility


undefined4
FUN_0045787a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    uVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

