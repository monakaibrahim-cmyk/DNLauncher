// Address: 0x0040fd00
// Name: FUN_0040fd00
// Category: Launcher


int __fastcall FUN_0040fd00(undefined4 *param_1)

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
      *(undefined2 *)(iVar2 + 4 + (int)param_1) = *(undefined2 *)(param_1 + 1);
      param_1 = param_1 + 2;
    } while (param_1 != unaff_EBX);
  }
  return in_EAX + (iVar1 >> 3) * 8;
}

