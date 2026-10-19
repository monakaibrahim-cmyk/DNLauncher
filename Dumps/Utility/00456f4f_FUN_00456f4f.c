// Address: 0x00456f4f
// Name: FUN_00456f4f
// Category: Utility


void __fastcall FUN_00456f4f(CWnd *param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x90))(), iVar1 != 0)) {
    return;
  }
  CWnd::Default(param_1);
  return;
}

