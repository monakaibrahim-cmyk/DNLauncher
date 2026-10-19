// Address: 0x0040b390
// Name: FUN_0040b390
// Category: Launcher


void FUN_0040b390(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*in_EAX + -0x10);
  piVar1 = (int *)(*in_EAX + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  return;
}

