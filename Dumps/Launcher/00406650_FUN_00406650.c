// Address: 0x00406650
// Name: FUN_00406650
// Category: Launcher


void FUN_00406650(int param_1,CStringData *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  CStringData *pCVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  CStringData *pCVar11;
  CStringData *pCVar12;
  undefined8 uVar13;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00498748;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar2 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*(int *)param_2 + -0x10));
  param_2 = pCVar2 + 0x10;
  local_8 = 0;
  iVar8 = *(int *)(param_1 + 4);
  if (iVar8 == 0) {
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0xc) - iVar8 >> 2;
    iVar6 = *(int *)(param_1 + 8) - iVar8 >> 2;
  }
  uVar13 = CONCAT44(iVar9,iVar8);
  if (iVar6 == 0x3fffffff) {
    uVar13 = FUN_004065a0();
  }
  piVar10 = param_4;
  local_18 = (uint)((ulonglong)uVar13 >> 0x20);
  iVar8 = (int)uVar13;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 8) - iVar8 >> 2;
  }
  uVar7 = iVar9 + 1;
  if (local_18 < uVar7) {
    if (0x3fffffff - (local_18 >> 1) < local_18) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 + (local_18 >> 1);
    }
    if (iVar8 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 8) - iVar8 >> 2;
    }
    if (local_18 < iVar9 + 1U) {
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(param_1 + 8) - iVar8 >> 2;
      }
      local_18 = iVar8 + 1;
    }
    puVar3 = (undefined4 *)FUN_00402340(local_18);
    piVar10 = param_4;
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar4 = FUN_00406fa0(*(void **)(param_1 + 4),param_4,puVar3);
    param_4 = (int *)((uint)param_4 & 0xffffff00);
    FUN_00406d80(&DAT_00000001,puVar4,(int *)&param_2);
    param_4 = (int *)((uint)param_4 & 0xffffff00);
    FUN_00406fa0(piVar10,*(int **)(param_1 + 8),puVar4 + 1);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00406620();
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    *(undefined4 **)(param_1 + 0xc) = puVar3 + local_18;
    *(undefined4 **)(param_1 + 8) = puVar3 + 1;
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
    if ((int)piVar1 - (int)param_4 >> 2 == 0) {
      FUN_00406cc0(uVar7,param_4 + 1,param_4,piVar1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00406d80((void *)(1 - ((int)*(undefined4 **)(param_1 + 8) - (int)piVar10 >> 2)),
                   *(undefined4 **)(param_1 + 8),(int *)&param_2);
      local_8 = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
      param_4 = (int *)(*(int *)(param_1 + 8) + -4);
      if (piVar10 != param_4) {
        do {
          iVar8 = *piVar10;
          pCVar2 = param_2 + -0x10;
          pCVar11 = (CStringData *)(iVar8 + -0x10);
          if (pCVar2 != pCVar11) {
            piVar1 = (int *)(iVar8 + -4);
            if ((*(int *)(iVar8 + -4) < 0) || (*(int *)pCVar2 != *(int *)pCVar11)) {
              FUN_00403520(piVar10,param_2,*(int *)(param_2 + -0xc));
            }
            else {
              pCVar2 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar2);
              LOCK();
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1 || iVar8 + -1 < 0) {
                (**(code **)(**(int **)pCVar11 + 4))(pCVar11);
              }
              *piVar10 = (int)(pCVar2 + 0x10);
            }
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != param_4);
      }
    }
    else {
      uVar5 = FUN_00406cc0(uVar7,piVar1,piVar1 + -1,piVar1);
      *(undefined4 *)(param_1 + 8) = uVar5;
      FUN_00406cf0();
      param_4 = piVar10 + 1;
      pCVar2 = param_2;
      if (piVar10 != param_4) {
        do {
          iVar8 = *piVar10;
          pCVar12 = (CStringData *)(iVar8 + -0x10);
          pCVar11 = pCVar2 + -0x10;
          if (pCVar11 != pCVar12) {
            piVar1 = (int *)(iVar8 + -4);
            if ((*(int *)(iVar8 + -4) < 0) || (*(int *)pCVar11 != *(int *)pCVar12)) {
              FUN_00403520(piVar10,pCVar2,*(int *)(pCVar2 + -0xc));
              pCVar2 = param_2;
            }
            else {
              pCVar2 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar11);
              LOCK();
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1 || iVar8 + -1 < 0) {
                (**(code **)(**(int **)pCVar12 + 4))(pCVar12);
              }
              *piVar10 = (int)(pCVar2 + 0x10);
              pCVar2 = param_2;
            }
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != param_4);
      }
    }
  }
  local_8 = 0xffffffff;
  pCVar2 = param_2 + -4;
  LOCK();
  iVar8 = *(int *)pCVar2;
  *(int *)pCVar2 = *(int *)pCVar2 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(param_2 + -0x10) + 4))(param_2 + -0x10);
  }
  ExceptionList = local_10;
  return;
}

