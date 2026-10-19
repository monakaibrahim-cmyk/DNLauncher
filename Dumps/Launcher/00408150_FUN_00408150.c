// Address: 0x00408150
// Name: FUN_00408150
// Category: Launcher


void * FUN_00408150(void *param_1)

{
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_00402980(param_1,unaff_EDI,0,0xffffffff);
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0xf;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0x20) = 0;
  FUN_00402980((void *)((int)param_1 + 0x1c),(void *)((int)unaff_EDI + 0x1c),0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

