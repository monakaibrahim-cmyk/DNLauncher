// Address: 0x00415e60
// Name: FUN_00415e60
// Category: Launcher


void FUN_00415e60(void)

{
  void *in_EAX;
  void *unaff_EBX;
  void *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = (void *)((int)in_EAX + 0x1c)) {
    FUN_00402980(in_EAX,unaff_EBX,0,0xffffffff);
  }
  return;
}

