// Address: 0x0040ef90
// Name: FUN_0040ef90
// Category: Launcher


void __fastcall FUN_0040ef90(undefined4 *param_1)

{
  void *in_EAX;
  undefined4 *unaff_EBX;
  
  for (; param_1 != unaff_EBX; param_1 = param_1 + 0xc) {
    FID_conflict_operator_(in_EAX,param_1);
    FID_conflict_operator_((void *)((int)in_EAX + 4),param_1 + 1);
    FID_conflict_operator_((void *)((int)in_EAX + 8),param_1 + 2);
    FID_conflict_operator_((void *)((int)in_EAX + 0xc),param_1 + 3);
    FID_conflict_operator_((void *)((int)in_EAX + 0x10),param_1 + 4);
    FID_conflict_operator_((void *)((int)in_EAX + 0x14),param_1 + 5);
    *(undefined2 *)((int)in_EAX + 0x18) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)((int)in_EAX + 0x1a) = *(undefined2 *)((int)param_1 + 0x1a);
    *(undefined2 *)((int)in_EAX + 0x1c) = *(undefined2 *)(param_1 + 7);
    FUN_0040f320((int)(param_1 + 8));
    in_EAX = (void *)((int)in_EAX + 0x30);
  }
  return;
}

