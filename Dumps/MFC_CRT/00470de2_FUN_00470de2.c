// Address: 0x00470de2
// Name: FUN_00470de2
// Category: MFC_CRT


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00470de2(void)

{
  int *piVar1;
  int in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(unaff_EBP + -0x14) < 0) {
    if ((unaff_EBX != 0) && (*(int *)(unaff_EBP + 8) != 0)) {
      do {
        piVar1 = *(int **)(unaff_EBX + uVar2 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(unaff_EBP + 8));
    }
  }
  else {
    **(int **)(unaff_EBP + 0x10) = in_EAX + 0x38;
  }
  return *(undefined4 *)(unaff_EBP + -0x14);
}

