// Address: 0x0043c280
// Name: FUN_0043c280
// Category: Utility


void __cdecl FUN_0043c280(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined4 **)(param_1 + 400) = puVar1;
  *puVar1 = FUN_0043c160;
  puVar1[1] = FUN_0043c220;
  puVar1[2] = FUN_0043c120;
  puVar1[3] = &LAB_0043c260;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}

