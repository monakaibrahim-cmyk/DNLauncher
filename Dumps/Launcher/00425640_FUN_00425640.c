// Address: 0x00425640
// Name: FUN_00425640
// Category: Launcher


int FUN_00425640(void)

{
  void *in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  FUN_004259c0(in_EAX,unaff_EBX,unaff_EDI);
  return unaff_EDI + (((int)in_EAX - unaff_EBX) / 0x1c) * -0x1c;
}

