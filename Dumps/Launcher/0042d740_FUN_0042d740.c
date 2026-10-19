// Address: 0x0042d740
// Name: FUN_0042d740
// Category: Launcher


void FUN_0042d740(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x18);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[0x10];
    (*(code *)*puVar2)(1);
  }
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  return;
}

