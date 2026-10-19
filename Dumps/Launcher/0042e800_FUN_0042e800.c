// Address: 0x0042e800
// Name: FUN_0042e800
// Category: Launcher


undefined4 * __fastcall FUN_0042e800(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  
  puVar1 = FUN_00452728(0x98);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0042d610(extraout_ECX,5);
    *puVar1 = TiXmlDeclaration::vftable;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0xf;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    puVar1[0x1e] = 0xf;
    puVar1[0x1d] = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
    puVar1[0x25] = 0xf;
    puVar1[0x24] = 0;
    *(undefined1 *)(puVar1 + 0x20) = 0;
    FUN_0042e7a0(param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

