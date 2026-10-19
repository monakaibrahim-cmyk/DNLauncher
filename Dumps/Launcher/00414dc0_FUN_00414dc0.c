// Address: 0x00414dc0
// Name: FUN_00414dc0
// Category: Launcher


void FUN_00414dc0(undefined4 param_1)

{
  LPCWSTR pWVar1;
  LPCWSTR pWVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  void *this;
  void *this_00;
  undefined1 auStack_24c [4];
  LPCWSTR pWStack_248;
  int iStack_244;
  undefined4 *puStack_240;
  char acStack_23c [4];
  char acStack_238 [4];
  char acStack_234 [4];
  char cStack_230;
  undefined4 uStack_22f;
  undefined4 uStack_22b;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined2 uStack_21f;
  undefined1 uStack_21d;
  char cStack_21c;
  undefined1 auStack_21b [255];
  CHAR CStack_11c;
  undefined1 auStack_11b [263];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a1e4;
  local_c = ExceptionList;
  local_14 = DAT_004c3750 ^ (uint)auStack_24c;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xfffffda4;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
    pWStack_248 = (LPCWSTR)(iVar5 + 0x10);
    iStack_4 = 0;
    FUN_0040a2b0();
    puVar6 = (undefined4 *)FUN_00416370();
    iStack_4._0_1_ = 1;
    FID_conflict_operator_(&pWStack_248,puVar6);
    iStack_4._0_1_ = 0;
    piVar4 = (int *)(iStack_244 + -4);
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(**(int **)(iStack_244 + -0x10) + 4))((undefined4 *)(iStack_244 + -0x10));
    }
    FUN_00403380(&pWStack_248,L"Resource00.pak",0xe);
    puStack_240 = FUN_00452728(0x2c0);
    iStack_4._0_1_ = 2;
    if (puStack_240 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_00428ee0(puStack_240);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    cStack_21c = '\0';
    _memset(auStack_21b,0,0xff);
    puVar7 = FUN_00404360();
    _sprintf_s(&cStack_21c,0x100,"version %d\r\nModule %d",param_1,*(undefined4 *)(puVar7 + 0x2c));
    (*(code *)Target_004c4f5c)();
    CStack_11c = '\0';
    _memset(auStack_11b,0,0x103);
    acStack_23c[0] = s__version_cfg_004b0cd8[0];
    acStack_23c[1] = s__version_cfg_004b0cd8[1];
    acStack_23c[2] = s__version_cfg_004b0cd8[2];
    acStack_23c[3] = s__version_cfg_004b0cd8[3];
    acStack_238[0] = s__version_cfg_004b0cd8[4];
    acStack_238[1] = s__version_cfg_004b0cd8[5];
    acStack_238[2] = s__version_cfg_004b0cd8[6];
    acStack_238[3] = s__version_cfg_004b0cd8[7];
    acStack_234[0] = s__version_cfg_004b0cd8[8];
    acStack_234[1] = s__version_cfg_004b0cd8[9];
    acStack_234[2] = s__version_cfg_004b0cd8[10];
    acStack_234[3] = s__version_cfg_004b0cd8[0xb];
    cStack_230 = s__version_cfg_004b0cd8[0xc];
    uStack_22f = 0;
    uStack_22b = 0;
    uStack_227 = 0;
    uStack_223 = 0;
    uStack_21f = 0;
    uStack_21d = 0;
    if (1 < *(int *)(pWStack_248 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pWStack_248,*(int *)(pWStack_248 + -6));
    }
    pWVar2 = pWStack_248;
    WideCharToMultiByte(0,0,pWStack_248,-1,&CStack_11c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar8 = FUN_004295b0(this,&CStack_11c,0);
    if ((char)uVar8 == '\0') {
      AfxMessageBox(L"Version can not be saved",0,0);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
      iStack_4 = 0xffffffff;
      pWVar1 = pWVar2 + -2;
      LOCK();
      iVar5 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(**(int **)(pWVar2 + -8) + 4))(pWVar2 + -8);
      }
    }
    else {
      FUN_0042acf0(puVar6,acStack_23c);
      FUN_0042a440(puVar6,acStack_23c);
      FUN_00429370(this_00,(int)puVar6);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
      iStack_4 = 0xffffffff;
      pWVar1 = pWVar2 + -2;
      LOCK();
      iVar5 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(**(int **)(pWVar2 + -8) + 4))(pWVar2 + -8);
      }
    }
    ExceptionList = local_c;
    __security_check_cookie(local_14 ^ (uint)auStack_24c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80004005);
}

