// Address: 0x00404520
// Name: FUN_00404520
// Category: Launcher


int __fastcall FUN_00404520(void *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  void *unaff_EDI;
  
  iVar1 = (int)unaff_EDI - (int)param_1;
  if (param_1 != unaff_EDI) {
    iVar2 = in_EAX - (int)param_1;
    do {
      FUN_00402980((void *)(iVar2 + (int)param_1),param_1,0,0xffffffff);
      param_1 = (void *)((int)param_1 + 0x1c);
    } while (param_1 != unaff_EDI);
  }
  return in_EAX + (iVar1 / 0x1c) * 0x1c;
}

