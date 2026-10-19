// Address: 0x00469d42
// Name: FUN_00469d42
// Category: MFC_CRT


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00469d42(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    uVar1 = 0x8007000e;
  }
  else {
    unaff_ESI[1] = *(int *)(unaff_EBP + 8);
    uVar1 = 0;
  }
  return uVar1;
}

