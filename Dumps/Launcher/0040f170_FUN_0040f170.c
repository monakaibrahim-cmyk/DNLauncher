// Address: 0x0040f170
// Name: FUN_0040f170
// Category: Launcher


int __fastcall FUN_0040f170(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_EBX;
  int iVar2;
  
  iVar1 = (int)unaff_EBX - (int)param_1;
  if (param_1 != unaff_EBX) {
    iVar2 = in_EAX - (int)param_1;
    do {
      FID_conflict_operator_((void *)(iVar2 + (int)param_1),param_1);
      FUN_0040f460(iVar2 + (int)(param_1 + 1),(int)(param_1 + 1));
      param_1 = param_1 + 5;
    } while (param_1 != unaff_EBX);
  }
  return in_EAX + (iVar1 / 0x14) * 0x14;
}

