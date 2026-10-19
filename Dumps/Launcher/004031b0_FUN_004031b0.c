// Address: 0x004031b0
// Name: FUN_004031b0
// Category: Launcher


void __fastcall FUN_004031b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 3;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*param_1 + 4))(param_1);
  }
  return;
}

