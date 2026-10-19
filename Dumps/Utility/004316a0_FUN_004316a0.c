// Address: 0x004316a0
// Name: FUN_004316a0
// Category: Utility


void FUN_004316a0(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *(int *)(*(int *)(*(int *)*in_EAX + 4) + 0x28 + *in_EAX);
  if (iVar1 != 0) {
    FUN_00495810((undefined4 *)(iVar1 + 4));
    return;
  }
  return;
}

