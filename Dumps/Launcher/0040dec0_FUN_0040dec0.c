// Address: 0x0040dec0
// Name: FUN_0040dec0
// Category: Launcher


void __thiscall FUN_0040dec0(void *this,int param_1,undefined4 param_2,int *param_3)

{
  CStringData *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uStack_40;
  CStringData *local_2c;
  undefined2 local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00498cf8;
  local_10 = ExceptionList;
  uStack_40 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_2c = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(*(int *)this + -0x10));
  local_2c = local_2c + 0x10;
  local_28 = *(undefined2 *)((int)this + 4);
  local_8 = 0;
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 == 0) {
    iVar8 = 0;
    iVar5 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xc) - iVar7 >> 3;
    iVar5 = *(int *)(param_1 + 8) - iVar7 >> 3;
  }
  uVar10 = CONCAT44(iVar8,iVar7);
  if (iVar5 == 0x1fffffff) {
    uVar10 = FUN_0040e7a0();
  }
  uVar9 = (uint)((ulonglong)uVar10 >> 0x20);
  iVar7 = (int)uVar10;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 8) - iVar7 >> 3;
  }
  uVar6 = iVar8 + 1;
  if (uVar9 < uVar6) {
    if (0x1fffffff - (uVar9 >> 1) < uVar9) {
      local_1c = 0;
    }
    else {
      local_1c = uVar9 + (uVar9 >> 1);
    }
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 8) - iVar7 >> 3;
    }
    if (local_1c < iVar8 + 1U) {
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 8) - iVar7 >> 3;
      }
      local_1c = iVar7 + 1;
    }
    local_20 = (undefined4 *)FUN_0040ff90(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_24 = local_24 & 0xffffff00;
    puVar3 = FUN_0040f5f0(*(void **)(param_1 + 4),param_3,local_20);
    FUN_0040f020((int *)&local_2c,1,puVar3);
    FUN_0040f5f0(param_3,*(int **)(param_1 + 8),puVar3 + 2);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0040ff60();
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    *(undefined4 **)(param_1 + 0xc) = local_20 + local_1c * 2;
    *(undefined4 **)(param_1 + 8) = local_20 + 2;
    *(undefined4 **)(param_1 + 4) = local_20;
  }
  else {
    piVar2 = *(int **)(param_1 + 8);
    if ((int)piVar2 - (int)param_3 >> 3 == 0) {
      FUN_0040edf0(uVar6,param_3 + 2,param_3,piVar2);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_24 = local_24 & 0xffffff00;
      FUN_0040f020((int *)&local_2c,1 - ((int)*(undefined4 **)(param_1 + 8) - (int)param_3 >> 3),
                   *(undefined4 **)(param_1 + 8));
      local_8 = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    }
    else {
      uVar4 = FUN_0040edf0(uVar6,piVar2,piVar2 + -2,piVar2);
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_0040ee40();
    }
    FUN_0040ee20();
  }
  local_8 = 0xffffffff;
  pCVar1 = local_2c + -4;
  LOCK();
  iVar7 = *(int *)pCVar1;
  *(int *)pCVar1 = *(int *)pCVar1 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))(local_2c + -0x10);
  }
  ExceptionList = local_10;
  return;
}

