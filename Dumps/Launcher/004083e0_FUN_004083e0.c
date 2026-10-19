// Address: 0x004083e0
// Name: FUN_004083e0
// Category: Launcher


void __cdecl FUN_004083e0(void *param_1)

{
  void *in_EAX;
  void *unaff_EBX;
  
  if (in_EAX != param_1) {
    do {
      FUN_00402980(in_EAX,unaff_EBX,0,0xffffffff);
      FUN_00402980((void *)((int)in_EAX + 0x1c),(void *)((int)unaff_EBX + 0x1c),0,0xffffffff);
      in_EAX = (void *)((int)in_EAX + 0x38);
    } while (in_EAX != param_1);
  }
  return;
}

