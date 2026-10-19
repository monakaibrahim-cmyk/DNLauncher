// Address: 0x0040ef30
// Name: FUN_0040ef30
// Category: Launcher


int FUN_0040ef30(void)

{
  void *in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  FUN_0040f9e0(in_EAX,unaff_EBX);
  return unaff_EDI + (((int)in_EAX - unaff_EBX) / 0x14) * -0x14;
}

