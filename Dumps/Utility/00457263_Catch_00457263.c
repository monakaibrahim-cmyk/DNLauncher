// Address: 0x00457263
// Name: Catch@00457263
// Category: Utility


undefined * Catch_00457263(void)

{
  long lVar1;
  int unaff_EBP;
  
  lVar1 = AfxProcessWndProcException
                    (*(CException **)(unaff_EBP + -0x14),
                     (tagMSG *)(*(int *)(unaff_EBP + -0x18) + 0x58));
  *(long *)(unaff_EBP + 0x18) = lVar1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004528f4(*(int **)(unaff_EBP + -0x14));
  }
  return &DAT_00457289;
}

