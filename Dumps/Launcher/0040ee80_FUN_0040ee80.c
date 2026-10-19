// Address: 0x0040ee80
// Name: FUN_0040ee80
// Category: Launcher


int FUN_0040ee80(void)

{
  void *in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  FUN_0040f760(in_EAX,unaff_EBX);
  return unaff_EDI + (((int)in_EAX - unaff_EBX) / 0x30) * -0x30;
}

