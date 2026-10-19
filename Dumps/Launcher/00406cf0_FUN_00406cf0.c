// Address: 0x00406cf0
// Name: FUN_00406cf0
// Category: Launcher


int FUN_00406cf0(void)

{
  int in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  FUN_00406f20(unaff_EBX,in_EAX);
  return unaff_EDI + (in_EAX - unaff_EBX >> 2) * -4;
}

