// Address: 0x00404410
// Name: FUN_00404410
// Category: Launcher


void FUN_00404410(void)

{
  void *pvVar1;
  void *pvVar2;
  int in_EAX;
  int local_10 [3];
  
  pvVar1 = *(void **)(in_EAX + 8);
  if (pvVar1 < *(void **)(in_EAX + 4)) {
    FUN_00475b26();
  }
  pvVar2 = *(void **)(in_EAX + 4);
  if (*(void **)(in_EAX + 8) < pvVar2) {
    FUN_00475b26();
  }
  FUN_00404450(local_10,in_EAX,pvVar2,in_EAX,pvVar1);
  return;
}

