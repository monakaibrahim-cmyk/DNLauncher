// Address: 0x0040a320
// Name: FUN_0040a320
// Category: Launcher


void __fastcall FUN_0040a320(int param_1)

{
  WCHAR WVar1;
  int iVar2;
  WCHAR *pWVar3;
  CSimpleStringT<char,0> *pCVar4;
  int *piVar5;
  int local_21c;
  WCHAR local_218;
  undefined1 local_216 [518];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a54b;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_21c;
  ExceptionList = &local_c;
  FUN_00418fd0(L"PatchInfo Init Start!");
  iVar2 = FUN_0040a7f0(param_1);
  if ((iVar2 < 0) || (iVar2 = FUN_0040aaf0(param_1), iVar2 < 0)) goto LAB_0040a47b;
  local_218 = L'\0';
  _memset(local_216,0,0x206);
  GetCurrentDirectoryW(0x104,&local_218);
  pWVar3 = &local_218;
  piVar5 = (int *)(param_1 + 100);
  do {
    WVar1 = *pWVar3;
    pWVar3 = pWVar3 + 1;
  } while (WVar1 != L'\0');
  FUN_00403520(piVar5,&local_218,(int)pWVar3 - (int)local_216 >> 1);
  iVar2 = *(int *)(*piVar5 + -0xc);
  if ((iVar2 < 0) || (*(int *)(*piVar5 + -0xc) < iVar2)) {
LAB_0040a4a0:
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  if (*(short *)(*piVar5 + iVar2 * 2) == 0x5c) {
    if (*(int *)(*piVar5 + -0xc) < iVar2) goto LAB_0040a4a0;
    if (*(short *)(*piVar5 + iVar2 * 2) != 0x2f) goto LAB_0040a413;
  }
  else {
LAB_0040a413:
    FUN_00407050(piVar5,0x5c);
  }
  pCVar4 = FUN_00401ae0((CSimpleStringT<char,0> *)&local_21c,piVar5,L"PatchConfigList.xml");
  local_4 = 0;
  FUN_00416610(*(LPCWSTR *)pCVar4);
  local_4 = 0xffffffff;
  piVar5 = (int *)(local_21c + -4);
  LOCK();
  iVar2 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_21c + -0x10) + 4))((undefined4 *)(local_21c + -0x10));
  }
  FUN_00418fd0(L"PatchInfo Init Success!");
LAB_0040a47b:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_21c);
  return;
}

