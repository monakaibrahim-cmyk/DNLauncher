// Address: 0x00401860
// Name: FUN_00401860
// Category: Launcher


int * FUN_00401860(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004982c9;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  *param_1 = iVar3 + 0x10;
  local_4 = 0;
  if (*(int *)(*unaff_EDI + -0xc) == 0) {
    pcVar4 = "ControlPositionList.xml";
  }
  else {
    FUN_004019b0("ControlPositionList_");
    FUN_00403380(param_1,(void *)*unaff_EDI,*(int *)(*unaff_EDI + -0xc));
    pcVar4 = ".xml";
  }
  FUN_004019b0(pcVar4);
  ExceptionList = local_c;
  return param_1;
}

