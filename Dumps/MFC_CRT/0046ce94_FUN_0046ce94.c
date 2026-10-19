// Address: 0x0046ce94
// Name: FUN_0046ce94
// Category: MFC_CRT


undefined4 __fastcall FUN_0046ce94(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  int iVar3;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar4;
  bool in_ZF;
  
  if (in_ZF) {
    return 0x80004005;
  }
  piVar1 = (int *)param_1[1];
  *(int **)(unaff_EBP + -4) = unaff_EBX;
  if (unaff_EBX < piVar1) {
    puVar2 = (undefined4 *)*in_EAX;
    *(int **)(unaff_EBP + 8) = unaff_EBX;
    iVar3 = (*(code *)*puVar2)();
    *(int *)(unaff_EBP + -4) = iVar3;
    if ((int)unaff_EBX <= iVar3) {
      if ((int *)*param_1 == unaff_EBX) {
        piVar1 = *(int **)(unaff_EBP + 8);
        if (piVar1 == unaff_EBX) {
          return 0x80004005;
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        return 0x80004005;
      }
      uVar4 = 0;
      if (unaff_EBX < (int *)param_1[1]) {
        do {
          (**(code **)(**(int **)(unaff_EBP + 8) + 0x18))
                    (*(int **)(unaff_EBP + 8),*(undefined4 *)(*param_1 + uVar4 * 8));
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)param_1[1]);
      }
    }
    param_1[1] = (int)unaff_EBX;
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return *(undefined4 *)(unaff_EBP + -4);
}

