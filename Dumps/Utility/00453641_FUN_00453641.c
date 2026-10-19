// Address: 0x00453641
// Name: FUN_00453641
// Category: Utility


undefined4 FUN_00453641(void)

{
  undefined4 uVar1;
  
  if (DAT_004c8ef0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045364a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_004c8ef0)();
    return uVar1;
  }
  return 0;
}

