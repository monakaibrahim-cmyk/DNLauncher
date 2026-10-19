// Address: 0x0042e100
// Name: FUN_0042e100
// Category: Launcher


void __thiscall FUN_0042e100(void *this,FILE *param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)((int)this + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x10]) {
    (**(code **)(*piVar1 + 4))(param_1,param_2);
    FUN_00477353(param_1,&DAT_004b4174);
  }
  return;
}

