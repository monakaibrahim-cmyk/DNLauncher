// Address: 0x00424db0
// Name: FUN_00424db0
// Category: Launcher


void FUN_00424db0(void)

{
  uint in_EAX;
  uint uVar1;
  void *unaff_EDI;
  char unaff_retaddr;
  
  if (-*(int *)((int)unaff_EDI + 0x14) - 1U <= in_EAX) {
    FUN_004956fe();
  }
  if (in_EAX != 0) {
    uVar1 = *(int *)((int)unaff_EDI + 0x14) + in_EAX;
    if (uVar1 == 0xffffffff) {
      FUN_004956fe();
    }
    if (*(uint *)((int)unaff_EDI + 0x18) < uVar1) {
      FUN_00402af0(unaff_EDI,uVar1);
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)unaff_EDI + 0x14) = 0;
      if (*(uint *)((int)unaff_EDI + 0x18) < 0x10) {
        *(undefined1 *)((int)unaff_EDI + 4) = 0;
        return;
      }
      **(undefined1 **)((int)unaff_EDI + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      FUN_00425110(in_EAX,unaff_retaddr);
      *(uint *)((int)unaff_EDI + 0x14) = uVar1;
      if (0xf < *(uint *)((int)unaff_EDI + 0x18)) {
        *(undefined1 *)(*(int *)((int)unaff_EDI + 4) + uVar1) = 0;
        return;
      }
      *(undefined1 *)((int)unaff_EDI + uVar1 + 4) = 0;
    }
  }
  return;
}

