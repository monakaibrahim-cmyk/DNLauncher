// Address: 0x0040b6d0
// Name: FUN_0040b6d0
// Category: Launcher


void FUN_0040b6d0(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_0040b720();
  if (iVar1 == 0) {
    DAT_004cbcd0 = 9;
    *(undefined4 *)(in_EAX + 4) = 0;
    return;
  }
  iVar1 = FUN_0040c760();
  if (iVar1 == 0) {
    DAT_004cbcd0 = 10;
    *(undefined4 *)(in_EAX + 4) = 0;
    return;
  }
  FUN_0040bb10();
  *(undefined4 *)(in_EAX + 4) = 1;
  return;
}

