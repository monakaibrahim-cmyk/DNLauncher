// Address: 0x0040d6f0
// Name: FUN_0040d6f0
// Category: Launcher


void FUN_0040d6f0(void)

{
  int in_EAX;
  void *unaff_ESI;
  
  if (*(int *)(in_EAX + 0x7c) != 0) {
    FUN_004035c0(unaff_ESI,(short *)&DAT_004b1068);
    return;
  }
  FUN_004035c0(unaff_ESI,(short *)&DAT_004b1070);
  return;
}

