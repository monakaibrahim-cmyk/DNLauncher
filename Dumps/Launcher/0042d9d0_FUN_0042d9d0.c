// Address: 0x0042d9d0
// Name: FUN_0042d9d0
// Category: Launcher


void __fastcall FUN_0042d9d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497d83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = TiXmlElement::vftable;
  local_4 = 1;
  FUN_0042da40();
  FUN_0042e960();
  local_4 = 0xffffffff;
  FUN_0042d670(param_1);
  ExceptionList = local_c;
  return;
}

