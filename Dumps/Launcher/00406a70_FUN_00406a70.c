// Address: 0x00406a70
// Name: FUN_00406a70
// Category: Launcher


bool FUN_00406a70(void)

{
  int in_EAX;
  uint unaff_EDI;
  
  if (0x7ffffffe < unaff_EDI) {
    FUN_004956fe();
  }
  if (*(uint *)(in_EAX + 0x18) < unaff_EDI) {
    FUN_00406ad0(in_EAX,unaff_EDI);
    return unaff_EDI != 0;
  }
  if (unaff_EDI == 0) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
    if (7 < *(uint *)(in_EAX + 0x18)) {
      **(undefined2 **)(in_EAX + 4) = 0;
      return false;
    }
    *(undefined2 *)(in_EAX + 4) = 0;
  }
  return unaff_EDI != 0;
}

