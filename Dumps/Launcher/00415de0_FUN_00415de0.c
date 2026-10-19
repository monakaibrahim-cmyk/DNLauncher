// Address: 0x00415de0
// Name: FUN_00415de0
// Category: Launcher


int __fastcall FUN_00415de0(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  iVar1 = (int)unaff_ESI - (int)param_1;
  if (param_1 != unaff_ESI) {
    iVar2 = in_EAX - (int)param_1;
    do {
      *(undefined4 *)(iVar2 + (int)param_1) = *param_1;
      *(undefined4 *)(iVar2 + 4 + (int)param_1) = param_1[1];
      *(undefined4 *)(iVar2 + 8 + (int)param_1) = param_1[2];
      param_1 = param_1 + 3;
    } while (param_1 != unaff_ESI);
  }
  return in_EAX + (iVar1 / 0xc) * 0xc;
}

