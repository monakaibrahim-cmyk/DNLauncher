// Address: 0x0042bff0
// Name: FUN_0042bff0
// Category: Launcher


void FUN_0042bff0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042c1b0(1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  return;
}

