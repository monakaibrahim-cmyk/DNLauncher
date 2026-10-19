// Address: 0x00408420
// Name: FUN_00408420
// Category: Launcher


void __fastcall FUN_00408420(void *param_1)

{
  void *in_EAX;
  void *unaff_EBX;
  
  for (; param_1 != unaff_EBX; param_1 = (void *)((int)param_1 + 0x38)) {
    FUN_00402980(in_EAX,param_1,0,0xffffffff);
    FUN_00402980((void *)((int)in_EAX + 0x1c),(void *)((int)param_1 + 0x1c),0,0xffffffff);
    in_EAX = (void *)((int)in_EAX + 0x38);
  }
  return;
}

