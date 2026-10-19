// Address: 0x0042df70
// Name: FUN_0042df70
// Category: Launcher


undefined4 * __thiscall FUN_0042df70(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498813;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042d610(this,0);
  *param_1 = TiXmlDocument::vftable;
  param_1[0x19] = 0xf;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  local_4 = 1;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1a] = 4;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  FUN_00402d00(param_1 + 0x13,&PTR_004b2d68,0);
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  ExceptionList = local_c;
  return param_1;
}

