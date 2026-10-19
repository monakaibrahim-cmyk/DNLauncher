// Address: 0x004045e0
// Name: FUN_004045e0
// Category: Launcher


void __fastcall FUN_004045e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

