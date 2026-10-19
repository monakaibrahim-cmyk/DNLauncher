// Address: 0x00406620
// Name: FUN_00406620
// Category: Launcher


void FUN_00406620(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  int *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 1) {
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

