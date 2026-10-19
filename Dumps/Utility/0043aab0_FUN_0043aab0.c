// Address: 0x0043aab0
// Name: FUN_0043aab0
// Category: Utility


void __cdecl FUN_0043aab0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xa8);
  *(undefined4 **)(param_1 + 0x194) = puVar1;
  *puVar1 = FUN_0043aa80;
  puVar1[1] = &LAB_0043a620;
  puVar1[2] = FUN_0043a8f0;
  puVar1[6] = FUN_0043a390;
  puVar1[0x17] = 0;
  puVar2 = puVar1 + 0x18;
  iVar3 = 0x10;
  do {
    puVar2[-0x11] = FUN_0043a390;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1[7] = FUN_0043a1f0;
  puVar1[0x15] = FUN_0043a1f0;
  FUN_0043aa80(param_1);
  return;
}

