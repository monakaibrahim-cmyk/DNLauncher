// Address: 0x0040a580
// Name: FUN_0040a580
// Category: Launcher


void FUN_0040a580(int param_1)

{
  undefined *puVar1;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a518;
  local_c = ExceptionList;
  if (param_1 == 9) {
    ExceptionList = &local_c;
    FUN_004035c0(&stack0xffffffec,(short *)&DAT_004b097c);
    local_4 = 0;
    iVar2 = extraout_var_01;
  }
  else if (param_1 == 0x2a) {
    ExceptionList = &local_c;
    FUN_004035c0(&stack0xffffffec,&DAT_004ac008);
    local_4 = 1;
    iVar2 = extraout_var_00;
  }
  else {
    ExceptionList = &local_c;
    FUN_004035c0(&stack0xffffffec,(short *)&DAT_004b097c);
    local_4 = 2;
    iVar2 = extraout_var;
  }
  puVar1 = FUN_0040a2b0();
  local_4 = 0xffffffff;
  FUN_0040a4b0((int)puVar1,iVar2);
  ExceptionList = local_c;
  return;
}

