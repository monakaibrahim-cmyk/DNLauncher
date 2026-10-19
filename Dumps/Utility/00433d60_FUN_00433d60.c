// Address: 0x00433d60
// Name: FUN_00433d60
// Category: Utility


void FUN_00433d60(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_00433760(*(void **)(in_EAX + 0xb1c),in_EAX);
  FUN_00433760(*(void **)(in_EAX + 0xb28),in_EAX);
  FUN_00433560((int *)(in_EAX + 0xb30));
  iVar1 = 0x12;
  do {
    if (*(short *)(in_EAX + 0xa7e + (uint)(byte)(&DAT_004ac8e4)[iVar1] * 4) != 0) {
LAB_00433e1d:
      *(int *)(in_EAX + 0x16a8) = *(int *)(in_EAX + 0x16a8) + iVar1 * 3 + 0x11;
      return;
    }
    if (*(short *)(in_EAX + 0xa7e + (uint)(byte)(&UNK_004ac8e3)[iVar1] * 4) != 0) {
      *(int *)(in_EAX + 0x16a8) = *(int *)(in_EAX + 0x16a8) + (iVar1 + -1) * 3 + 0x11;
      return;
    }
    if (*(short *)(in_EAX + 0xa7e + (uint)(byte)(&UNK_004ac8e2)[iVar1] * 4) != 0) {
      *(int *)(in_EAX + 0x16a8) = *(int *)(in_EAX + 0x16a8) + (iVar1 + -2) * 3 + 0x11;
      return;
    }
    if (*(short *)(in_EAX + 0xa7e + (uint)(byte)(&UNK_004ac8e1)[iVar1] * 4) != 0) {
      iVar1 = iVar1 + -3;
      goto LAB_00433e1d;
    }
    iVar1 = iVar1 + -4;
    if (iVar1 < 3) {
      *(int *)(in_EAX + 0x16a8) = *(int *)(in_EAX + 0x16a8) + iVar1 * 3 + 0x11;
      return;
    }
  } while( true );
}

