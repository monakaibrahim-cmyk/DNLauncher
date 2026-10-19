// Address: 0x00428ee0
// Name: FUN_00428ee0
// Category: Launcher


undefined4 * FUN_00428ee0(undefined4 *param_1)

{
  int iVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00498927;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CEtPackingFile::vftable;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  local_4 = 2;
  uStack_3 = 0;
  iVar1 = FUN_0042bff0();
  param_1[0xad] = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(undefined4 *)(param_1[0xad] + 4) = param_1[0xad];
  *(undefined4 *)param_1[0xad] = param_1[0xad];
  *(undefined4 *)(param_1[0xad] + 8) = param_1[0xad];
  param_1[0xae] = 0;
  _local_4 = CONCAT31(uStack_3,3);
  param_1[2] = 0xffffffff;
  _memset(param_1 + 0x47,0,0x104);
  _memset(param_1 + 3,0,0x110);
  param_1[0x45] = 0x400;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0xaf] = &PTR_vftable_004c6ae4;
  FUN_00429370(this,(int)param_1);
  ExceptionList = local_c;
  return param_1;
}

