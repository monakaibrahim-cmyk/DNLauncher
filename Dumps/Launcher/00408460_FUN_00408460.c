// Address: 0x00408460
// Name: FUN_00408460
// Category: Launcher


int __fastcall FUN_00408460(int param_1)

{
  void *in_EAX;
  int unaff_EDI;
  
  FUN_004084c0(in_EAX);
  return unaff_EDI + (((int)in_EAX - param_1) / 0x38) * -0x38;
}

