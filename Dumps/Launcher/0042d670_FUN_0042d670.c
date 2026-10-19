// Address: 0x0042d670
// Name: FUN_0042d670
// Category: Launcher


void __fastcall FUN_0042d670(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00497a83;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = TiXmlNode::vftable;
  local_4 = 1;
  puVar1 = (undefined4 *)param_1[6];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[0x10];
    (*(code *)*puVar2)(1,uVar3);
  }
  if (0xf < (uint)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = TiXmlBase::vftable;
  ExceptionList = local_c;
  return;
}

