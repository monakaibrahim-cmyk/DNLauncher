// Address: 0x0040ee40
// Name: FUN_0040ee40
// Category: Launcher


int FUN_0040ee40(void)

{
  void *in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  FUN_0040f6d0(in_EAX,unaff_EBX);
  return unaff_EDI + ((int)in_EAX - unaff_EBX >> 3) * -8;
}

