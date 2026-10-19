// Address: 0x00426900
// Name: FUN_00426900
// Category: Launcher


/* WARNING: Variable defined which should be unmapped: param_1 */

undefined4 __cdecl FUN_00426900(int param_1)

{
  char *in_EAX;
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (((in_EAX == (char *)0x0) || (*in_EAX != '1')) || (param_1 != 0x38)) {
    return 0xfffffffa;
  }
  if (unaff_ESI == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  if (*(int *)(unaff_ESI + 0x20) == 0) {
    *(code **)(unaff_ESI + 0x20) = FUN_00428840;
    *(undefined4 *)(unaff_ESI + 0x28) = 0;
  }
  if (*(int *)(unaff_ESI + 0x24) == 0) {
    *(undefined **)(unaff_ESI + 0x24) = &DAT_00428860;
  }
  iVar1 = (**(code **)(unaff_ESI + 0x20))(*(undefined4 *)(unaff_ESI + 0x28),1,0x2530);
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(int *)(unaff_ESI + 0x1c) = iVar1;
  *(undefined4 *)(iVar1 + 8) = 1;
  *(undefined4 *)(iVar1 + 0x24) = 0xf;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  uVar2 = FUN_004268a0(unaff_ESI);
  return uVar2;
}

