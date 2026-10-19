// Address: 0x00404940
// Name: FUN_00404940
// Category: Launcher


int * FUN_00404940(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = (int)param_2;
  return param_2;
}

