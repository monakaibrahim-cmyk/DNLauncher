// Address: 0x0045d40d
// Name: FUN_0045d40d
// Category: Utility


undefined4 FUN_0045d40d(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + -0xcc) + 0x20);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80004005;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1bc))(param_2,param_3,param_4);
  }
  return uVar2;
}

