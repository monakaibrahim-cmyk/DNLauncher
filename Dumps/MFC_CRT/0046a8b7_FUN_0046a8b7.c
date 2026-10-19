// Address: 0x0046a8b7
// Name: FUN_0046a8b7
// Category: MFC_CRT


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046a8b7(void)

{
  int iVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  (**(code **)(iVar1 + 0x6c))(0xfffffe08,2,unaff_EBP + -0x18);
  if (*(short *)(unaff_EBP + -0x18) == 1) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 0x800000;
  }
  return *(undefined4 *)(unaff_EBP + -0x14);
}

