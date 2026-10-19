// Address: 0x0042bed0
// Name: FUN_0042bed0
// Category: Launcher


void FUN_0042bed0(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int unaff_EDI;
  undefined1 local_8 [8];
  
  piVar1 = (int *)**(int **)(unaff_EDI + 4);
  if ((param_2 == 0) || (param_2 != unaff_EDI)) {
    FUN_00475b26();
  }
  if (param_3 == piVar1) {
    piVar1 = *(int **)(unaff_EDI + 4);
    if ((param_4 == 0) || (param_4 != unaff_EDI)) {
      FUN_00475b26();
    }
    if (param_5 == piVar1) {
      FUN_0042b790(*(void **)(*(int *)(unaff_EDI + 4) + 4));
      *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
      *(undefined4 *)(unaff_EDI + 8) = 0;
      *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
      *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
      param_1[1] = **(int **)(unaff_EDI + 4);
      *param_1 = unaff_EDI;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_00475b26();
    }
    if (param_3 == param_5) break;
    FUN_0042c0b0();
    FUN_0042b1c0(unaff_EDI,local_8,param_2,param_3);
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}

