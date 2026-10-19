// Address: 0x00406d30
// Name: FUN_00406d30
// Category: Launcher


int __fastcall FUN_00406d30(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = unaff_EDI - param_1;
  if (param_1 != unaff_EDI) {
    iVar2 = in_EAX - param_1;
    do {
      FUN_004069c0((void *)(iVar2 + param_1),0,0xffffffff);
      param_1 = param_1 + 0x1c;
    } while (param_1 != unaff_EDI);
  }
  return in_EAX + (iVar1 / 0x1c) * 0x1c;
}

