// Address: 0x00411e60
// Name: FUN_00411e60
// Category: Launcher


undefined4 __thiscall FUN_00411e60(void *this,int param_1,short *param_2,int *param_3)

{
  int *piVar1;
  short sVar2;
  void *pvVar3;
  CStringData *pCVar4;
  int iVar5;
  short *psVar6;
  FILE *_File;
  undefined4 uVar7;
  int *unaff_EBX;
  void *unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar8;
  undefined1 local_20 [4];
  int iStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a3d8;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_004c3750 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData
                     ((CStringData *)(*(int *)((int)this + 0x28) + -0x10));
  iVar5 = FUN_00412160(param_1,(int)(pCVar4 + 0x10));
  *param_3 = iVar5;
  if (iVar5 == 0) {
    FUN_00418f70(L"Get Download File Size Failed!");
    InternetCloseHandle();
    ExceptionList = local_c;
    return 0;
  }
  FUN_00418fd0(L"Download Total File Size : %d");
  if (param_2 == (short *)0x0) {
    iVar5 = 0;
  }
  else {
    psVar6 = param_2;
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar2 != 0);
    iVar5 = (int)psVar6 - (int)(param_2 + 1) >> 1;
  }
  FUN_00403520(&DAT_004cbea8,param_2,iVar5);
  DAT_004cbeb0 = *param_3;
  DAT_004cbeb4 = 0;
  FUN_00418fd0(L"Check Downloaded Temp File");
  FUN_00416290(local_20,0,0xffffffff,(short *)0x0);
  puVar8 = local_20;
  local_4 = 0;
  iVar5 = (**(code **)(*unaff_EBX + 0x20))(*(undefined4 *)((int)this + 0x30));
  if (iVar5 == 0) {
    if (unaff_EBP != (void *)0x2) {
      FUN_00415170((int)&stack0xffffffd4);
    }
  }
  else {
    iVar5 = (**(code **)(*unaff_EBX + 0x30))();
    (**(code **)(*unaff_EBX + 0x4c))();
    if (iVar5 == *param_3) {
      FUN_00418f70(L"Already Exist Download Temp File!");
      InternetCloseHandle(puStack_8);
      uStack_10 = 0xffffffff;
      piVar1 = (int *)(iStack_1c + -4);
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(**(int **)(iStack_1c + -0x10) + 4))((undefined4 *)(iStack_1c + -0x10));
      }
      ExceptionList = pvStack_18;
      return 2;
    }
    FUN_00418f70(L"Already Exist Download Temp File But Delete Wrong File!");
    iVar5 = FUN_00416610(*(LPCWSTR *)((int)this + 0x30));
    if (iVar5 == 0) {
      InternetCloseHandle(puStack_8);
      CFileException::~CFileException((CFileException *)&stack0xffffffd4);
      ExceptionList = pvStack_18;
      return 0;
    }
  }
  _File = __wfopen(*(wchar_t **)((int)this + 0x2c),L"r");
  uVar7 = 0x1041;
  if (_File != (FILE *)0x0) {
    _fclose(_File);
    uVar7 = 0x3041;
  }
  iVar5 = (**(code **)(*unaff_EBX + 0x20))(*(undefined4 *)((int)this + 0x2c),uVar7,&stack0xffffffd4)
  ;
  if (iVar5 == 0) {
    FUN_00418f70(L"Downloaded Temp File Open Failed!");
    FUN_00415170((int)&stack0xffffffc8);
    InternetCloseHandle(uStack_14);
    iStack_1c = 0xffffffff;
    piVar1 = (int *)(unaff_ESI + -4);
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(**(int **)(unaff_ESI + -0x10) + 4))((undefined4 *)(unaff_ESI + -0x10));
    }
    ExceptionList = unaff_EBP;
    return 0;
  }
  (**(code **)(*unaff_EBX + 0x28))(0,0,2);
  uVar7 = (**(code **)(*unaff_EBX + 0x30))();
  *(undefined4 *)((int)this + 0x18) = uVar7;
  piVar1 = (int *)(puVar8 + -4);
  LOCK();
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(puVar8 + -0x10) + 4))(puVar8 + -0x10);
  }
  ExceptionList = pvVar3;
  return 1;
}

