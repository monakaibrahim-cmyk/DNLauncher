// Address: 0x004160f0
// Name: FUN_004160f0
// Category: Launcher


int __fastcall FUN_004160f0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  if (unaff_ESI != param_1) {
    iVar3 = in_EAX - param_1;
    iVar1 = param_1;
    do {
      iVar2 = iVar1 + -0xc;
      *(undefined4 *)(iVar3 + iVar2) = *(undefined4 *)(iVar1 + -0xc);
      *(undefined4 *)(iVar3 + 4 + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)(iVar3 + 8 + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != unaff_ESI);
  }
  return in_EAX + ((param_1 - unaff_ESI) / 0xc) * -0xc;
}

