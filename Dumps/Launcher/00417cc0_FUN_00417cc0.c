// Address: 0x00417cc0
// Name: FUN_00417cc0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00417cc0(void *this,LPCWSTR param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined1 auStack_804c [4];
  int iStack_8048;
  uint uStack_8044;
  undefined4 uStack_8040;
  LPCWSTR local_803c;
  CFile aCStack_8038 [16];
  CFileException aCStack_8028 [20];
  undefined1 auStack_8014 [32768];
  uint local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00498b71;
  local_c = ExceptionList;
  uStack_10 = 0x417cd8;
  local_14 = DAT_004c3750 ^ (uint)auStack_804c;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xffff7fa4;
  ExceptionList = &local_c;
  local_803c = param_1;
  FUN_00418fd0(L"Open Internet Session");
  iVar3 = InternetOpenW(0,0,0,0,0);
  if (iVar3 == 0) {
    FUN_00418f70(L"Internet Session Open Failed!");
    goto LAB_00417fc7;
  }
  FUN_00418fd0(L"Open Http Connection");
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iStack_8048 = (**(code **)(*piVar4 + 0xc))(uVar2);
  iStack_8048 = iStack_8048 + 0x10;
  iStack_4 = 0;
  FUN_00403f30(&iStack_8048,L"Cache-Control:no-cache\nPragma:no-cache");
  iVar7 = iStack_8048;
  iVar5 = InternetOpenUrlW(iVar3,this,iStack_8048,*(undefined4 *)(iStack_8048 + -0xc),0x84000000,0);
  if (iVar5 == 0) {
    FUN_00418f70(L"Http Connection Open Failed!");
    InternetCloseHandle(iVar3);
  }
  else {
    iVar6 = FUN_00417ff0();
    if (iVar6 == 0) {
      FUN_00418f70(L"Download File Is Not Exist!");
      InternetCloseHandle(iVar5);
      InternetCloseHandle(iVar3);
      iStack_4 = -1;
      piVar4 = (int *)(iVar7 + -4);
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)(iVar7 + -0x10) + 4))((undefined4 *)(iVar7 + -0x10));
      }
      goto LAB_00417fc7;
    }
    CFile::CFile(aCStack_8038);
    iStack_4._0_1_ = 1;
    FUN_00416290(aCStack_8028,0,0xffffffff,(short *)0x0);
    iStack_4._0_1_ = 2;
    iVar6 = FUN_00453369(aCStack_8038,local_803c,0x1041,(int)aCStack_8028);
    if (iVar6 != 0) {
      FUN_00418fd0(L"Download File Start");
      bVar1 = false;
      while (iVar7 = InternetQueryDataAvailable(iVar5,&uStack_8040,0,0), iVar7 != 0) {
        iVar7 = InternetReadFile(iVar5,auStack_8014,uStack_8040,&uStack_8044);
        if (iVar7 == 0) {
          pwVar8 = L"InternetReadFile : reading file fail!";
          goto LAB_00417f45;
        }
        if ((uStack_8044 == 0) ||
           (CFile::Write(aCStack_8038,auStack_8014,uStack_8044), uStack_8044 == 0))
        goto LAB_00417f52;
      }
      pwVar8 = L"InternetQueryDataAvailable : data not available!";
LAB_00417f45:
      FUN_00418f70(pwVar8);
      bVar1 = true;
LAB_00417f52:
      InternetCloseHandle(iVar5);
      InternetCloseHandle(iVar3);
      CFile::Close(aCStack_8038);
      if (bVar1) {
        CFileException::~CFileException(aCStack_8028);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00453041(aCStack_8038);
        FUN_00410090(&iStack_8048);
      }
      else {
        FUN_00418fd0(L"Download File Success");
        CFileException::~CFileException(aCStack_8028);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00453041(aCStack_8038);
        FUN_00410090(&iStack_8048);
      }
      goto LAB_00417fc7;
    }
    FUN_00418f70(L"Download File Open Failed!");
    InternetCloseHandle(iVar5);
    InternetCloseHandle(iVar3);
    CFileException::~CFileException(aCStack_8028);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_00453041(aCStack_8038);
  }
  iStack_4 = -1;
  piVar4 = (int *)(iVar7 + -4);
  LOCK();
  iVar3 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(iVar7 + -0x10) + 4))((undefined4 *)(iVar7 + -0x10));
  }
LAB_00417fc7:
  ExceptionList = local_c;
  __security_check_cookie(local_14 ^ (uint)auStack_804c);
  return;
}

