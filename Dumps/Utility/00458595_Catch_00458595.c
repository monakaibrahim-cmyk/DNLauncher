// Address: 0x00458595
// Name: Catch@00458595
// Category: Utility


undefined1 * Catch_00458595(void)

{
  long lVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  lVar1 = AfxProcessWndProcException
                    (*(CException **)(unaff_EBP + -0x1c),(tagMSG *)(unaff_EBP + -0x4c));
  *(long *)(unaff_EBP + -0x14) = lVar1;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_004528f4(*(int **)(unaff_EBP + -0x1c));
  }
  return &LAB_0045850c;
}

