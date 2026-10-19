// Address: 0x00459ff6
// Name: FUN_00459ff6
// Category: Utility


undefined4 __thiscall FUN_00459ff6(void *this,undefined4 param_1,int param_2)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) &&
     ((*(int *)((int)this + 0x54) == 0 ||
      (param_2 = *(int *)((int)this + 0x54) + 0x20000, param_2 == 0)))) {
    uVar2 = 0;
  }
  else {
    pAVar1 = AfxGetModuleState();
    if (*(int **)(pAVar1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(pAVar1 + 4) + 0xac))(param_2,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

