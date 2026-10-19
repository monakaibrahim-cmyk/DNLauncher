// Address: 0x0041b000
// Name: FUN_0041b000
// Category: Launcher


undefined4 FUN_0041b000(void)

{
  void *pvVar1;
  WORD WVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int unaff_ESI;
  void *unaff_EDI;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *pvStack_48;
  uint uStack_44;
  _FILETIME _Stack_40;
  uint uStack_38;
  _SYSTEMTIME _Stack_2c;
  _SYSTEMTIME _Stack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004983c8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
  pvStack_48 = (void *)(iVar5 + 0x10);
  uStack_4 = 0;
  GetLocalTime(&_Stack_2c);
  _Stack_1c.wDayOfWeek = _Stack_2c.wDayOfWeek;
  _Stack_1c.wDay = _Stack_2c.wDay;
  _Stack_1c.wHour = _Stack_2c.wHour;
  _Stack_1c.wMinute = _Stack_2c.wMinute;
  _Stack_1c.wYear = _Stack_2c.wYear;
  _Stack_1c.wMonth = _Stack_2c.wMonth;
  _Stack_1c.wSecond = _Stack_2c.wSecond;
  _Stack_1c.wMilliseconds = _Stack_2c.wMilliseconds;
  SystemTimeToFileTime(&_Stack_2c,&_Stack_40);
  FUN_00403520(unaff_EDI,&DAT_004b0380,1);
  if (0 < *(int *)(unaff_ESI + 0x6c)) {
    FUN_00403380(unaff_EDI,&DAT_004b2d7c,1);
  }
  if (((_Stack_2c.wDay != *(WORD *)(unaff_ESI + 0xf6)) ||
      (_Stack_2c.wMonth != *(WORD *)(unaff_ESI + 0xf2))) ||
     (_Stack_2c.wYear != *(WORD *)(unaff_ESI + 0xf0))) {
    FUN_00403f30(&pvStack_48,L"%04d/%02d/%02d/%02d ");
    FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  }
  FUN_00403f30(&pvStack_48,L"%02d:%02d:%02d - ");
  FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  bVar7 = _Stack_40.dwLowDateTime < *(uint *)(unaff_ESI + 0x100);
  _Stack_40.dwLowDateTime = _Stack_40.dwLowDateTime - *(uint *)(unaff_ESI + 0x100);
  uVar6 = (_Stack_40.dwHighDateTime - *(int *)(unaff_ESI + 0x104)) - (uint)bVar7;
  uStack_38 = _Stack_40.dwLowDateTime;
  _Stack_40.dwHighDateTime = uVar6;
  FileTimeToSystemTime(&_Stack_40,&_Stack_2c);
  uVar3 = uStack_38;
  WVar2 = _Stack_2c.wYear - 0x640;
  _Stack_2c.wYear = WVar2;
  if (((WVar2 != 1) || (_Stack_2c.wMonth != 1)) || (_Stack_2c.wDay != 1)) {
    uVar8 = __alldiv(uStack_38,uVar6,0x2a69c000,0xc9);
    uVar8 = __alldiv(uVar3,uVar6,(uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20));
    if ((int)uVar8 != 0) {
      FUN_00403f30(&pvStack_48,L"%d:");
      FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
    }
  }
  FUN_00403f30(&pvStack_48,L"%02d:%02d:%02d - ");
  FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  uVar3 = *(int *)(unaff_ESI + 0x98) - *(int *)(unaff_ESI + 0x88);
  lVar9 = __allmul(uVar3,(int)uVar3 >> 0x1f,0x6400,0);
  uVar3 = *(int *)(unaff_ESI + 0x74) - *(int *)(unaff_ESI + 0x70);
  uVar8 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),uVar3,(int)uVar3 >> 0x1f);
  uVar3 = (uint)uVar8;
  uStack_44 = uVar3 >> 8;
  FUN_00403f30(&pvStack_48,L"%d%% / ");
  FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  FUN_00403f30(&pvStack_48,L"%d%% - ");
  FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  if (uVar3 == 0) {
    _Stack_40.dwLowDateTime = 0;
    _Stack_40.dwHighDateTime = 0;
  }
  else {
    lVar9 = __allmul(uStack_38,uVar6,0x6400,0);
    lVar9 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),uVar3,0);
    _Stack_40 = (_FILETIME)(lVar9 - CONCAT44(uVar6,uStack_38));
  }
  FileTimeToSystemTime(&_Stack_40,&_Stack_2c);
  WVar2 = _Stack_2c.wYear - 0x640;
  _Stack_2c.wYear = WVar2;
  if (((_Stack_2c.wDay != 1) || (_Stack_2c.wMonth != 1)) || (WVar2 != 1)) {
    uVar8 = __alldiv(uStack_38,uVar6,0x2a69c000,0xc9);
    uVar3 = (uint)uVar8;
    if (uVar3 != 0) {
      FUN_00403f30(&pvStack_48,L"%d:");
      FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
    }
  }
  FUN_00403f30(&pvStack_48,L"%02d:%02d:%02d - ");
  FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  if (uVar3 == 0) {
    _Stack_40.dwLowDateTime = *(uint *)(unaff_ESI + 0x100) + uStack_38;
    _Stack_40.dwHighDateTime =
         *(int *)(unaff_ESI + 0x104) + uVar6 + (uint)CARRY4(*(uint *)(unaff_ESI + 0x100),uStack_38);
  }
  else {
    lVar9 = __allmul(uStack_38,uVar6,0x6400,0);
    uVar8 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),uVar3,0);
    _Stack_40.dwLowDateTime = (uint)uVar8 + *(uint *)(unaff_ESI + 0x100);
    _Stack_40.dwHighDateTime =
         (int)((ulonglong)uVar8 >> 0x20) + *(int *)(unaff_ESI + 0x104) +
         (uint)CARRY4((uint)uVar8,*(uint *)(unaff_ESI + 0x100));
  }
  FileTimeToSystemTime(&_Stack_40,&_Stack_2c);
  if (((_Stack_2c.wYear != _Stack_1c.wYear) && (_Stack_2c.wMonth != _Stack_1c.wMonth)) &&
     (_Stack_2c.wDay != _Stack_1c.wDay)) {
    FUN_00403f30(&pvStack_48,L"%04d/%02d/%02d/%02d ");
    FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  }
  FUN_00403f30(&pvStack_48,L"%02d:%02d:%02d");
  pvVar1 = pvStack_48;
  FUN_00403380(unaff_EDI,pvStack_48,*(int *)((int)pvStack_48 + -0xc));
  if (0 < *(int *)(unaff_ESI + 0x6c)) {
    FUN_00403380(unaff_EDI,&DAT_004b2d78,1);
  }
  uStack_4 = 0xffffffff;
  piVar4 = (int *)((int)pvVar1 + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)((int)pvVar1 + -0x10) + 4))();
  }
  ExceptionList = local_c;
  return 1;
}

