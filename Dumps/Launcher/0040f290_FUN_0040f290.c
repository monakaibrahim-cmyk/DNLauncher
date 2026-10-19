// Address: 0x0040f290
// Name: FUN_0040f290
// Category: Launcher


void __cdecl FUN_0040f290(void *param_1)

{
  void *in_EAX;
  undefined4 *unaff_EDI;
  
  if (in_EAX != param_1) {
    do {
      FID_conflict_operator_(in_EAX,unaff_EDI);
      FID_conflict_operator_((void *)((int)in_EAX + 4),unaff_EDI + 1);
      FID_conflict_operator_((void *)((int)in_EAX + 8),unaff_EDI + 2);
      FID_conflict_operator_((void *)((int)in_EAX + 0xc),unaff_EDI + 3);
      FID_conflict_operator_((void *)((int)in_EAX + 0x10),unaff_EDI + 4);
      FID_conflict_operator_((void *)((int)in_EAX + 0x14),unaff_EDI + 5);
      *(undefined2 *)((int)in_EAX + 0x18) = *(undefined2 *)(unaff_EDI + 6);
      *(undefined2 *)((int)in_EAX + 0x1a) = *(undefined2 *)((int)unaff_EDI + 0x1a);
      *(undefined2 *)((int)in_EAX + 0x1c) = *(undefined2 *)(unaff_EDI + 7);
      FUN_0040f320((int)(unaff_EDI + 8));
      in_EAX = (void *)((int)in_EAX + 0x30);
    } while (in_EAX != param_1);
  }
  return;
}

