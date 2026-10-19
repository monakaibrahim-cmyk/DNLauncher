// Address: 0x00406b48
// Name: Catch_All@00406b48
// Category: Launcher


undefined * Catch_All_00406b48(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_00406c10(*(int *)(unaff_EBP + 0xc) + 1);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar1;
  return &DAT_00406b66;
}

