// Address: 0x0045d43c
// Name: FUN_0045d43c
// Category: Utility


undefined4 FUN_0045d43c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + -0xcc) + 0x20);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80004005;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1b8))(param_2,param_3);
  }
  return uVar2;
}

