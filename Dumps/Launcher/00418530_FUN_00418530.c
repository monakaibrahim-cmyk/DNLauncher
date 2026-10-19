// Address: 0x00418530
// Name: FUN_00418530
// Category: Launcher


int __fastcall FUN_00418530(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (unaff_ESI != param_1) {
    iVar1 = param_1;
    do {
      iVar2 = iVar1 + -8;
      *(undefined4 *)((param_2 - param_1) + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)((param_2 - param_1) + 4 + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != unaff_ESI);
  }
  return param_2 + (param_1 - unaff_ESI >> 3) * -8;
}

