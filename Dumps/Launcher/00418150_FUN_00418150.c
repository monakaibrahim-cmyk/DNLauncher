// Address: 0x00418150
// Name: FUN_00418150
// Category: Launcher


void FUN_00418150(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  int local_10 [3];
  
  puVar1 = *(undefined4 **)(in_EAX + 8);
  if (puVar1 < *(undefined4 **)(in_EAX + 4)) {
    FUN_00475b26();
  }
  puVar2 = *(undefined4 **)(in_EAX + 4);
  if (*(undefined4 **)(in_EAX + 8) < puVar2) {
    FUN_00475b26();
  }
  FUN_00418220(local_10,in_EAX,puVar2,in_EAX,puVar1);
  return;
}

