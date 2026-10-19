// Address: 0x00416610
// Name: FUN_00416610
// Category: Launcher


undefined4 __fastcall FUN_00416610(LPCWSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  int *piVar6;
  CStringData *pCVar7;
  CStringData *pCVar8;
  int iStack_18;
  int iStack_14;
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a1a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar2 = timeGetTime();
  DVar3 = GetFileAttributesW(param_1);
  if (DVar3 != 0xffffffff) {
    uVar4 = timeGetTime();
    while( true ) {
      if (DVar2 + 5000 < uVar4) {
        piVar6 = (int *)FUN_00453ed1();
        if (piVar6 != (int *)0x0) {
          iStack_18 = (**(code **)(*piVar6 + 0xc))();
          iStack_18 = iStack_18 + 0x10;
          iStack_4 = 0;
          FUN_0040a2b0();
          FUN_00416590(&iStack_14);
          iStack_4._0_1_ = 1;
          FUN_00403f30(&iStack_18,L"%s %s");
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          piVar6 = (int *)(iStack_14 + -4);
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1 || iVar1 + -1 < 0) {
            (**(code **)(**(int **)(iStack_14 + -0x10) + 4))();
          }
          iVar1 = iStack_18;
          puStack_10 = &stack0xffffffd0;
          pCVar8 = (CStringData *)(iStack_18 + -0x10);
          pCVar7 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar8);
          FUN_00416510((wchar_t *)(pCVar7 + 0x10));
          iStack_4 = 0xffffffff;
          piVar6 = (int *)(iVar1 + -4);
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1 || iVar1 + -1 < 0) {
            (**(code **)(**(int **)pCVar8 + 4))();
          }
          ExceptionList = local_c;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      DVar3 = GetFileAttributesW(param_1);
      if ((DVar3 & 1) != 0) {
        SetFileAttributesW(param_1,DVar3 & 0xfffffffe);
      }
      BVar5 = DeleteFileW(param_1);
      if (BVar5 != 0) break;
      uVar4 = timeGetTime();
    }
  }
  ExceptionList = local_c;
  return 1;
}

