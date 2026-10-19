// Address: 0x0042e000
// Name: FUN_0042e000
// Category: Launcher


void __fastcall FUN_0042e000(int param_1)

{
  int *piVar1;
  int in_EAX;
  
  FUN_0042d700();
  *(undefined1 *)(in_EAX + 0x44) = *(undefined1 *)(param_1 + 0x44);
  *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  FUN_00402980((void *)(in_EAX + 0x4c),(void *)(param_1 + 0x4c),0,0xffffffff);
  *(undefined4 *)(in_EAX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_EAX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_EAX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined1 *)(in_EAX + 0x74) = *(undefined1 *)(param_1 + 0x74);
  for (piVar1 = *(int **)(param_1 + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x10]) {
    (**(code **)(*piVar1 + 0x3c))();
    FUN_0042d770(in_EAX);
  }
  return;
}

