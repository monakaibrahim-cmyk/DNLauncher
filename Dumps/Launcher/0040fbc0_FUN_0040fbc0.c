// Address: 0x0040fbc0
// Name: FUN_0040fbc0
// Category: Launcher


int FUN_0040fbc0(void)

{
  int in_EAX;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  FUN_0040ef90(unaff_EDI);
  return ((in_EAX - (int)unaff_EDI) / 0x30) * 0x30 + unaff_ESI;
}

