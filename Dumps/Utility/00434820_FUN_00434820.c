// Address: 0x00434820
// Name: FUN_00434820
// Category: Utility


void FUN_00434820(void)

{
  int in_EAX;
  
  if (8 < *(int *)(in_EAX + 0x16bc)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined2 *)(in_EAX + 0x16b8) = 0;
    *(undefined4 *)(in_EAX + 0x16bc) = 0;
    return;
  }
  if (0 < *(int *)(in_EAX + 0x16bc)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  }
  *(undefined2 *)(in_EAX + 0x16b8) = 0;
  *(undefined4 *)(in_EAX + 0x16bc) = 0;
  return;
}

