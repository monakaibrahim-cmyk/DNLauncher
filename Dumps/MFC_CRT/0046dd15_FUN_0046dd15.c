// Address: 0x0046dd15
// Name: FUN_0046dd15
// Category: MFC_CRT


void FUN_0046dd15(void)

{
  int *piVar1;
  size_t sVar2;
  void *pvVar3;
  int unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    piVar1 = *(int **)(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    FUN_0047b7b5();
    return;
  }
  *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x40);
  sVar2 = *(size_t *)(unaff_EBX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pvVar3 = FUN_00452728(sVar2);
  *(void **)(unaff_EBX + 0x10) = pvVar3;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0046dd6b();
  return;
}

