// Address: 0x0042e9b0
// Name: FUN_0042e9b0
// Category: Launcher


void __fastcall FUN_0042e9b0(int param_1)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x50) = param_1;
  *(undefined4 *)(in_EAX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(*(int *)(param_1 + 0x4c) + 0x50) = in_EAX;
  *(int *)(param_1 + 0x4c) = in_EAX;
  return;
}

