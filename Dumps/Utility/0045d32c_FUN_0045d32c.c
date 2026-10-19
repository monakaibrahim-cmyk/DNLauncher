// Address: 0x0045d32c
// Name: FUN_0045d32c
// Category: Utility


undefined4 FUN_0045d32c(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + -0xcc) + 0x20);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80004005;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1a8))(param_2);
  }
  return uVar2;
}

