// Address: 0x0042d770
// Name: FUN_0042d770
// Category: Launcher


undefined4 * __fastcall FUN_0042d770(int param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  byte *pbVar2;
  
  if (in_EAX[5] == 0) {
    (**(code **)*in_EAX)(1);
    iVar1 = FUN_0042d8f0();
    if (iVar1 != 0) {
      iVar1 = 0;
      pbVar2 = (byte *)0x0;
      FUN_0042d8f0();
      FUN_0042fa80((void *)0x0,pbVar2,iVar1);
    }
    return (undefined4 *)0x0;
  }
  in_EAX[4] = param_1;
  in_EAX[0xf] = *(undefined4 *)(param_1 + 0x1c);
  in_EAX[0x10] = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x40) = in_EAX;
    *(undefined4 **)(param_1 + 0x1c) = in_EAX;
    return in_EAX;
  }
  *(undefined4 **)(param_1 + 0x18) = in_EAX;
  *(undefined4 **)(param_1 + 0x1c) = in_EAX;
  return in_EAX;
}

