// Address: 0x00428dc0
// Name: FUN_00428dc0
// Category: Launcher


size_t FUN_00428dc0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  size_t in_EAX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x140) != 0) {
    uVar1 = *(uint *)(unaff_EDI + 0x108);
    uVar2 = *(uint *)(unaff_EDI + 0x144);
    if (uVar2 < uVar1) {
      if (uVar1 < uVar2 + in_EAX) {
        in_EAX = uVar1 - uVar2;
      }
      _memcpy(param_1,(void *)(uVar2 + *(int *)(unaff_EDI + 0x140)),in_EAX);
      *(int *)(unaff_EDI + 0x144) = *(int *)(unaff_EDI + 0x144) + in_EAX;
      return in_EAX;
    }
  }
  return 0;
}

