// Address: 0x0042ca10
// Name: FUN_0042ca10
// Category: Launcher


void FUN_0042ca10(void)

{
  void *pvVar1;
  
  pvVar1 = FUN_00452728(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}

