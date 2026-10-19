// Address: 0x0040b720
// Name: FUN_0040b720
// Category: Launcher


undefined4 FUN_0040b720(void)

{
  CSimpleStringT<wchar_t,0> *pCVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  CSimpleStringT<wchar_t,0> *this;
  CSimpleStringT<wchar_t,0> *pCVar7;
  int unaff_EDI;
  bool bVar8;
  void *pvStack_30;
  CSimpleStringT<wchar_t,0> *local_2c;
  CSimpleStringT<wchar_t,0> *local_28;
  CSimpleStringT<wchar_t,0> *local_24;
  CSimpleStringT<wchar_t,0> *pCStack_20;
  CSimpleStringT<wchar_t,0> *local_1c;
  uint local_18;
  CSimpleStringT<wchar_t,0> *local_14;
  CSimpleStringT<wchar_t,0> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004992a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((((*(int *)(unaff_EDI + 0xc) != 0) &&
       (iVar6 = *(int *)(unaff_EDI + 0x10) - *(int *)(unaff_EDI + 0xc), iVar5 = iVar6 >> 0x1f,
       iVar6 / 0x14 + iVar5 != iVar5)) && (*(int *)(unaff_EDI + 0xc) != 0)) &&
     (iVar6 = *(int *)(unaff_EDI + 0x10) - *(int *)(unaff_EDI + 0xc), iVar5 = iVar6 >> 0x1f,
     iVar6 / 0x14 + iVar5 != iVar5)) {
    uVar2 = *(uint *)(unaff_EDI + 0xc);
    if (*(uint *)(unaff_EDI + 0x10) < uVar2) {
      FUN_00475b26();
    }
    local_1c = (CSimpleStringT<wchar_t,0> *)(unaff_EDI + 8);
    if ((*(uint *)(unaff_EDI + 0x10) < uVar2) || (uVar2 < *(uint *)(unaff_EDI + 0xc))) {
      FUN_00475b26();
    }
    local_18 = uVar2;
    if (*(uint *)(unaff_EDI + 0x10) <= uVar2) {
      FUN_00475b26();
    }
    if ((*(int *)(uVar2 + 8) != 0) &&
       (iVar6 = *(int *)(uVar2 + 0xc) - *(int *)(uVar2 + 8), iVar5 = iVar6 >> 0x1f,
       iVar6 / 0x30 + iVar5 != iVar5)) {
      if (*(uint *)(unaff_EDI + 0x10) <= uVar2) {
        FUN_00475b26();
      }
      if ((*(int *)(uVar2 + 8) != 0) &&
         (iVar6 = *(int *)(uVar2 + 0xc) - *(int *)(uVar2 + 8), iVar5 = iVar6 >> 0x1f,
         iVar6 / 0x30 + iVar5 != iVar5)) {
        uVar2 = FUN_0040dab0();
        local_10 = *(CSimpleStringT<wchar_t,0> **)(uVar2 + 8);
        local_14 = (CSimpleStringT<wchar_t,0> *)(uVar2 + 4);
        local_28 = local_10;
        local_24 = local_14;
        if (*(CSimpleStringT<wchar_t,0> **)(uVar2 + 0xc) < local_10) {
          FUN_00475b26();
        }
        FUN_0040c7f0();
        puVar3 = (undefined4 *)FUN_0040dab0();
        FID_conflict_operator_((void *)(unaff_EDI + 0x28),puVar3);
        uVar2 = FUN_0040dab0();
        FID_conflict_operator_((void *)(unaff_EDI + 0x2c),(undefined4 *)(uVar2 + 4));
        uVar2 = FUN_0040dab0();
        FID_conflict_operator_((void *)(unaff_EDI + 0x30),(undefined4 *)(uVar2 + 8));
        uVar2 = FUN_0040dab0();
        FID_conflict_operator_((void *)(unaff_EDI + 0x34),(undefined4 *)(uVar2 + 0xc));
        uVar2 = FUN_0040dab0();
        FID_conflict_operator_((void *)(unaff_EDI + 0x38),(undefined4 *)(uVar2 + 0x10));
        uVar2 = FUN_0040dab0();
        *(undefined2 *)(unaff_EDI + 0x60) = *(undefined2 *)(uVar2 + 0x1c);
        uVar2 = FUN_0040dab0();
        this = *(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x24);
        if (*(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x28) < this) {
          FUN_00475b26();
        }
        while( true ) {
          pCVar1 = local_28;
          if (*(CSimpleStringT<wchar_t,0> **)(local_24 + 8) <= local_28) {
            FUN_00475b26();
          }
          local_2c = *(CSimpleStringT<wchar_t,0> **)(pCVar1 + 0x28);
          if (local_2c < *(CSimpleStringT<wchar_t,0> **)(pCVar1 + 0x24)) {
            FUN_00475b26();
          }
          if ((CSimpleStringT<wchar_t,0> *)(uVar2 + 0x20) != pCVar1 + 0x20) {
            FUN_00475b26();
          }
          if (this == local_2c) {
            if ((*(int *)(unaff_EDI + 0x40) != 0) &&
               (*(int *)(unaff_EDI + 0x44) - *(int *)(unaff_EDI + 0x40) >> 3 != 0)) {
              ExceptionList = local_c;
              return 1;
            }
            FUN_00418f70(L"LoginServerList is Empty!");
            ExceptionList = local_c;
            return 0;
          }
          if (*(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x28) <= this) {
            FUN_00475b26();
          }
          FUN_0040d820();
          piVar4 = (int *)FUN_00453ed1();
          if (piVar4 == (int *)0x0) break;
          iVar5 = (**(code **)(*piVar4 + 0xc))();
          pvStack_30 = (void *)(iVar5 + 0x10);
          uStack_4 = 0;
          piVar4 = (int *)FUN_00453ed1();
          if (piVar4 == (int *)0x0) break;
          iVar5 = (**(code **)(*piVar4 + 0xc))();
          local_2c = (CSimpleStringT<wchar_t,0> *)(iVar5 + 0x10);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (*(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x28) <= this) {
            FUN_00475b26();
          }
          if (1 < *(int *)(*(int *)this + -4)) {
            ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
          }
          FUN_00403f30(&pvStack_30,(wchar_t *)&param_2_004b0a90);
          if (*(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x28) <= this) {
            FUN_00475b26();
          }
          FUN_00403f30(&local_2c,L"%d");
          pCVar1 = local_28;
          if (*(CSimpleStringT<wchar_t,0> **)(local_24 + 8) <= local_28) {
            FUN_00475b26();
          }
          local_1c = *(CSimpleStringT<wchar_t,0> **)(pCVar1 + 0x28);
          pCStack_20 = pCVar1 + 0x20;
          if (local_1c < *(CSimpleStringT<wchar_t,0> **)(pCVar1 + 0x24)) {
            FUN_00475b26();
          }
          pCVar1 = this + 8;
          local_14 = pCVar1;
          local_10 = this;
          if ((*(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x28) < pCVar1) ||
             (pCVar1 < *(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x24))) {
            FUN_00475b26();
          }
          if ((CSimpleStringT<wchar_t,0> *)(uVar2 + 0x20) != pCStack_20) {
            FUN_00475b26();
          }
          if (pCVar1 != local_1c) {
            FUN_004019b0(";");
            FUN_004019b0(";");
          }
          FUN_00403380((void *)(unaff_EDI + 0x68),pvStack_30,*(int *)((int)pvStack_30 + -0xc));
          pCVar1 = local_2c;
          FUN_00403380((void *)(unaff_EDI + 0x6c),local_2c,*(int *)(local_2c + -0xc));
          pCVar7 = pCVar1 + -0x10;
          uStack_4 = uStack_4 & 0xffffff00;
          pCVar1 = pCVar1 + -4;
          LOCK();
          iVar5 = *(int *)pCVar1;
          *(int *)pCVar1 = *(int *)pCVar1 + -1;
          UNLOCK();
          if (iVar5 == 1 || iVar5 + -1 < 0) {
            (**(code **)(**(int **)pCVar7 + 4))(pCVar7);
          }
          uStack_4 = 0xffffffff;
          piVar4 = (int *)((int)pvStack_30 + -4);
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 1 || iVar5 + -1 < 0) {
            (**(code **)(**(int **)((int)pvStack_30 + -0x10) + 4))
                      ((undefined4 *)((int)pvStack_30 + -0x10));
          }
          bVar8 = *(CSimpleStringT<wchar_t,0> **)(uVar2 + 0x28) <= this;
          this = local_14;
          if (bVar8) {
            FUN_00475b26();
            this = local_14;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}

