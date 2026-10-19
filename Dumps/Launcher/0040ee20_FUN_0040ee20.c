// Address: 0x0040ee20
// Name: FUN_0040ee20
// Category: Launcher


void FUN_0040ee20(void)

{
  void *in_EAX;
  void *unaff_EBX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EBX; in_EAX = (void *)((int)in_EAX + 8)) {
    FID_conflict_operator_(in_EAX,unaff_EDI);
    *(undefined2 *)((int)in_EAX + 4) = *(undefined2 *)(unaff_EDI + 1);
  }
  return;
}

