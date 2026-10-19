// Address: 0x00471a20
// Name: FUN_00471a20
// Category: MFC_CRT


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00471a20(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (((iVar1 < 0) && (*(int **)(unaff_EDI + 0x10) != (int *)0x0)) &&
     (*(int *)(unaff_EBP + -0x1c) != -1)) {
    **(int **)(unaff_EDI + 0x10) = *(int *)(unaff_EBP + -0x1c);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(unaff_EDI + 0x18) = iVar1;
  return uVar2;
}

