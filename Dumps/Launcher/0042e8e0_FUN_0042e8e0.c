// Address: 0x0042e8e0
// Name: FUN_0042e8e0
// Category: Launcher


undefined4 * FUN_0042e8e0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  
  puVar1 = FUN_00452728(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0042d610(extraout_ECX,3);
    *puVar1 = TiXmlUnknown::vftable;
    thunk_FUN_0042d700();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

