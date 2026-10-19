// Address: 0x00415170
// Name: FUN_00415170
// Category: Launcher


void __fastcall FUN_00415170(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498bd8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_004035c0(&local_10,(short *)&PTR_004b1080);
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    FID_conflict_operator_(&local_10,L"An unspecified error occurred.");
    break;
  case 2:
    FID_conflict_operator_(&local_10,L"The file could not be located.");
    break;
  case 3:
    FID_conflict_operator_(&local_10,L"All or part of the path is invalid.");
    break;
  case 4:
    FID_conflict_operator_(&local_10,L"The permitted number of open files was exceeded.");
    break;
  case 5:
    FID_conflict_operator_(&local_10,L"The file could not be accessed.");
    break;
  case 6:
    FID_conflict_operator_(&local_10,L"There was an attempt to use an invalid file handle.");
    break;
  case 7:
    FID_conflict_operator_(&local_10,L"The current working directory cannot be removed.");
    break;
  case 8:
    FID_conflict_operator_(&local_10,L"There are no more directory entries.");
    break;
  case 9:
    FID_conflict_operator_(&local_10,L"There was an error trying to set the file pointer.");
    break;
  case 10:
    FID_conflict_operator_(&local_10,L"There was a hardware error.");
    break;
  case 0xb:
    FID_conflict_operator_(&local_10,L"SHARE.EXE was not loaded, or a shared region was locked.");
    break;
  case 0xc:
    FID_conflict_operator_
              (&local_10,L"There was an attempt to lock a region that was already locked.");
    break;
  case 0xd:
    FID_conflict_operator_(&local_10,L"The disk is full.");
    break;
  case 0xe:
    FID_conflict_operator_(&local_10,L"The end of file was reached.");
    break;
  default:
    FUN_00403520(&local_10,L"EOCS - Can\'t Find Error Description.",0x24);
  }
  FUN_00418f70(L"File Open Exception : %d - %s");
  local_4 = 0xffffffff;
  piVar1 = (int *)(local_10 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_10 + -0x10) + 4))((undefined4 *)(local_10 + -0x10),uVar3);
  }
  ExceptionList = local_c;
  return;
}

