// Address: 0x0045728c
// Name: FUN_0045728c
// Category: Utility


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0045728c(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(undefined4 *)(unaff_EBP + 0x18);
  puVar3 = (undefined4 *)(unaff_EBP + -0x44);
  puVar4 = (undefined4 *)(unaff_EBX + 0x58);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1;
}

