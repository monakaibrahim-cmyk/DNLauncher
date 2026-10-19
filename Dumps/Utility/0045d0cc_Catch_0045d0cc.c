// Address: 0x0045d0cc
// Name: Catch@0045d0cc
// Category: Utility


undefined4 Catch_0045d0cc(void)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = (int *)FUN_00453ed1();
  FUN_004031d0((void *)(unaff_EBP + -0x14),piVar2);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (**(code **)(iVar3 + 0xc))();
  if (iVar3 == 0) {
    FUN_00403f30((void *)(unaff_EBP + -0x14),L"%s (%s:%d)");
  }
  else {
    FUN_00403f30((void *)(unaff_EBP + -0x14),L"%s (%s:%d)\n%s");
  }
  pwVar1 = *(wchar_t **)(unaff_EBP + -0x14);
  AfxMessageBox(pwVar1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004031b0((undefined4 *)(pwVar1 + -8));
  (**(code **)(*piVar2 + 4))(1);
  return 0x45d0a9;
}

