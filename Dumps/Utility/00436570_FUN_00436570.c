// Address: 0x00436570
// Name: FUN_00436570
// Category: Utility


void __cdecl FUN_00436570(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00445930((int)param_1);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 8))(param_2,1,param_3), iVar2 == param_3)) {
    return;
  }
  FUN_00445110(param_1,"Read Error");
  return;
}

