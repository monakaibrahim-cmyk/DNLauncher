// Address: 0x0040ff60
// Name: FUN_0040ff60
// Category: Launcher


void FUN_0040ff60(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  int *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 2) {
    puVar3 = (undefined4 *)(*in_EAX + -0x10);
    piVar1 = (int *)(*in_EAX + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) {
      (**(code **)(*(int *)*puVar3 + 4))(puVar3);
    }
  }
  return;
}

