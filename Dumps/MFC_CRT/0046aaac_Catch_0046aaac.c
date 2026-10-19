// Address: 0x0046aaac
// Name: Catch@0046aaac
// Category: MFC_CRT


undefined4 Catch_0046aaac(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    FUN_004528f4(*(int **)(unaff_EBP + -0x18));
  }
  iVar1 = **(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  (**(code **)(iVar1 + 0x6c))(0xfffffdfb,8,*(undefined4 *)(unaff_EBP + 8));
  return 0x46aaa4;
}

