// Address: 0x0042cb10
// Name: FUN_0042cb10
// Category: Launcher


void FUN_0042cb10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00452728(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return;
}

