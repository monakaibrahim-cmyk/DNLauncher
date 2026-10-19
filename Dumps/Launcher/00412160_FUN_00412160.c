// Address: 0x00412160
// Name: FUN_00412160
// Category: Launcher


void FUN_00412160(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 local_220;
  undefined4 local_21c;
  wchar_t local_218;
  undefined1 local_216 [518];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498c58;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_220;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xfffffdd4;
  ExceptionList = &local_c;
  local_4 = 0;
  if (param_1 == 0) {
LAB_004121c3:
    piVar1 = (int *)(param_2 + -4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    iVar3 = InternetOpenUrlW(param_1,param_2,0,0,0x84000000,0);
    *(int *)(unaff_EDI + 0x14) = iVar3;
    if (iVar3 == 0) goto LAB_004121c3;
    iVar3 = FUN_00417ff0();
    if (iVar3 != 0) {
      local_218 = L'\0';
      _memset(local_216,0,0x206);
      local_220 = 0x104;
      local_21c = 0;
      iVar3 = HttpQueryInfoW(*(undefined4 *)(unaff_EDI + 0x14),5,&local_218,&local_220,&local_21c);
      if (iVar3 != 0) {
        thunk_FUN_0047642d(&local_218);
      }
      InternetCloseHandle(*(undefined4 *)(unaff_EDI + 0x14));
      local_4 = 0xffffffff;
      piVar1 = (int *)(param_2 + -4);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)(param_2 + -0x10) + 4))((undefined4 *)(param_2 + -0x10));
      }
      goto LAB_004122da;
    }
    FUN_00418f70(L"Download File Is Not Exist!");
    InternetCloseHandle(*(undefined4 *)(unaff_EDI + 0x14));
    piVar1 = (int *)(param_2 + -4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_4 = 0xffffffff;
  if (iVar3 + -1 < 1) {
    (**(code **)(**(int **)(param_2 + -0x10) + 4))((undefined4 *)(param_2 + -0x10),uVar2);
  }
LAB_004122da:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_220);
  return;
}

