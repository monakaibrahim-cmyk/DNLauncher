// Address: 0x004084c0
// Name: FUN_004084c0
// Category: Launcher


void __fastcall FUN_004084c0(void *param_1)

{
  void *in_EAX;
  void *unaff_EBX;
  
  while (unaff_EBX != param_1) {
    FUN_00402980((void *)((int)in_EAX + -0x38),(void *)((int)param_1 + -0x38),0,0xffffffff);
    FUN_00402980((void *)((int)in_EAX + -0x1c),(void *)((int)param_1 + -0x1c),0,0xffffffff);
    param_1 = (void *)((int)param_1 + -0x38);
    in_EAX = (void *)((int)in_EAX + -0x38);
  }
  return;
}

