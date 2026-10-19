// Address: 0x0042d1a0
// Name: FUN_0042d1a0
// Category: Launcher


undefined4 * __thiscall FUN_0042d1a0(void *this,undefined4 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042d610(this,4);
  local_4 = 0;
  *param_1 = TiXmlText::vftable;
  ppuVar1 = &PTR_004b2d68;
  do {
    ppuVar2 = ppuVar1;
    ppuVar1 = (undefined **)((int)ppuVar2 + 1);
  } while (*(char *)ppuVar2 != '\0');
  FUN_00402d00(param_1 + 8,&PTR_004b2d68,(uint)(ppuVar2 + -0x12cb5a));
  *(undefined1 *)(param_1 + 0x11) = 0;
  ExceptionList = local_c;
  return param_1;
}

