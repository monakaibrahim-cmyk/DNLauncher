// Address: 0x0043b930
// Name: FUN_0043b930
// Category: Utility


void __cdecl FUN_0043b930(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x180) = puVar1;
  *puVar1 = FUN_0043b7a0;
  puVar1[1] = &LAB_0043b900;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_0043b5d0();
  return;
}

