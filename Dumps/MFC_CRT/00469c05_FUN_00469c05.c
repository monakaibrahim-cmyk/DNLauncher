// Address: 0x00469c05
// Name: FUN_00469c05
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00469c05(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(*(CArchive **)(param_1 + 4) + 0x24);
  if (piVar1 == (int *)0x0) {
    FUN_00469c65();
    return;
  }
  CArchive::Flush(*(CArchive **)(param_1 + 4));
  uVar2 = (**(code **)(*piVar1 + 0x28))(param_2,param_3,param_4);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar2;
  }
  FUN_00469c65();
  return;
}

