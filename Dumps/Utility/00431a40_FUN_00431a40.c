// Address: 0x00431a40
// Name: FUN_00431a40
// Category: Utility


undefined4 FUN_00431a40(void)

{
  uint uVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (in_EAX == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(in_EAX + 0x18) = 0;
  if (*(int *)(in_EAX + 0x20) == 0) {
    *(code **)(in_EAX + 0x20) = FUN_00428840;
    *(undefined4 *)(in_EAX + 0x28) = 0;
  }
  if (*(int *)(in_EAX + 0x24) == 0) {
    *(undefined **)(in_EAX + 0x24) = &DAT_00428860;
  }
  piVar2 = (int *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x16c0);
  if (piVar2 != (int *)0x0) {
    *(int **)(in_EAX + 0x1c) = piVar2;
    *piVar2 = in_EAX;
    piVar2[6] = 1;
    piVar2[7] = 0;
    piVar2[0xc] = 0xf;
    piVar2[0xb] = 0x8000;
    piVar2[0xd] = 0x7fff;
    piVar2[0x14] = 0xf;
    piVar2[0x13] = 0x8000;
    piVar2[0x15] = 0x7fff;
    piVar2[0x16] = 5;
    iVar3 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),0x8000,2);
    piVar2[0xe] = iVar3;
    iVar3 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),piVar2[0xb],2);
    piVar2[0x10] = iVar3;
    iVar3 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),piVar2[0x13],2);
    piVar2[0x11] = iVar3;
    piVar2[0x5a7] = 0x4000;
    iVar3 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),0x4000,4);
    uVar1 = piVar2[0x5a7];
    piVar2[2] = iVar3;
    piVar2[3] = uVar1 * 4;
    if ((((piVar2[0xe] != 0) && (piVar2[0x10] != 0)) && (piVar2[0x11] != 0)) && (iVar3 != 0)) {
      piVar2[0x22] = 0;
      piVar2[0x5a9] = iVar3 + (uVar1 & 0xfffffffe);
      piVar2[0x5a6] = iVar3 + uVar1 * 3;
      piVar2[0x21] = 1;
      *(undefined1 *)(piVar2 + 9) = 8;
      uVar4 = FUN_00431b90();
      return uVar4;
    }
    piVar2[1] = 0x29a;
    *(char **)(in_EAX + 0x18) = "insufficient memory";
    FUN_004323d0();
  }
  return 0xfffffffc;
}

