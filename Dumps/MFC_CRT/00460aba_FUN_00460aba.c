// Address: 0x00460aba
// Name: FUN_00460aba
// Category: MFC_CRT


void __fastcall FUN_00460aba(CWnd *param_1)

{
  CWnd::Default(param_1);
  if (*(int *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00460ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x80) + 0x6c))();
    return;
  }
  return;
}

