// Address: 0x0042d260
// Name: FUN_0042d260
// Category: Launcher


void __fastcall FUN_0042d260(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042d610(param_1,5);
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
  return;
}

