// Address: 0x0040ef00
// Name: FUN_0040ef00
// Category: Launcher


void __cdecl FUN_0040ef00(undefined4 *param_1)

{
  void *in_EAX;
  void *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    do {
      FID_conflict_operator_(in_EAX,param_1);
      FUN_0040f460((int)in_EAX + 4,(int)(param_1 + 1));
      in_EAX = (void *)((int)in_EAX + 0x14);
    } while (in_EAX != unaff_EDI);
  }
  return;
}

