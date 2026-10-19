// Address: 0x004217e0
// Name: FUN_004217e0
// Category: Launcher


undefined4 __thiscall FUN_004217e0(void *this,int param_1)

{
  int iVar1;
  CWnd *pCVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  HWND pHVar6;
  BOOL BVar7;
  int *piVar8;
  int *extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a978;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(int *)((int)this + 0xb4) = param_1;
  puVar4 = FUN_0040a2b0();
  piVar8 = (int *)(*(int *)(&DAT_004c539c + *(int *)((int)this + 0xb4) * 8) +
                  *(int *)(puVar4 + 0x5c));
  if (piVar8 != (int *)0xffffffff) {
    FUN_0040a2b0();
    puVar5 = FUN_00416590(&param_1);
    local_4 = 0;
    FID_conflict_operator_((void *)((int)this + 0x4140),puVar5);
    local_4 = 0xffffffff;
    piVar8 = (int *)(param_1 + -4);
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    piVar8 = (int *)(iVar1 + -1);
    if ((int)piVar8 < 1) {
      (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10),uVar3);
      piVar8 = extraout_EDX;
    }
  }
  FUN_00421b80((int)this,piVar8);
  switch(*(undefined4 *)((int)this + 0xb4)) {
  case 0:
    FUN_00421a10();
    break;
  case 1:
    *(undefined4 *)((int)this + 0x18c) = 1;
    ExceptionList = local_c;
    return 0;
  default:
    goto switchD_004218a7_caseD_2;
  case 10:
    (**(code **)(*(int *)this + 0x16c))();
    if (DAT_004cbcdc != 0) {
      (*(code *)**(undefined4 **)(DAT_004cbcdc + 4))(1);
      DAT_004cbcdc = 0;
    }
    pCVar2 = *(CWnd **)((int)this + 0xb8);
    if (pCVar2 == (CWnd *)0x0) {
      pHVar6 = (HWND)0x0;
    }
    else {
      pHVar6 = *(HWND *)(pCVar2 + 0x20);
    }
    BVar7 = IsWindow(pHVar6);
    if (BVar7 != 0) {
      *(undefined4 *)(pCVar2 + 0x70) = 0;
      *(undefined4 *)(pCVar2 + 0x74) = 100;
      *(undefined4 *)(pCVar2 + 0x78) = 1;
      FUN_0041a4f0(pCVar2);
    }
    FUN_0041a430(1);
    pCVar2 = *(CWnd **)((int)this + 0xbc);
    if (pCVar2 == (CWnd *)0x0) {
      pHVar6 = (HWND)0x0;
    }
    else {
      pHVar6 = *(HWND *)(pCVar2 + 0x20);
    }
    BVar7 = IsWindow(pHVar6);
    if (BVar7 != 0) {
      *(undefined4 *)(pCVar2 + 0x70) = 0;
      *(undefined4 *)(pCVar2 + 0x74) = 100;
      *(undefined4 *)(pCVar2 + 0x78) = 1;
      FUN_0041a4f0(pCVar2);
    }
    FUN_0041a430(1);
    FUN_00403f30((void *)((int)this + 0x413c),L"%d%%");
    puVar4 = FUN_00407210();
    if (*(int *)(puVar4 + 0x1c) != 0) {
      FUN_004208c0(this);
    }
    break;
  case 0xb:
    CWnd::DestroyWindow(this);
    break;
  case 0xc:
  case 0xd:
    if (DAT_004cbcdc != 0) {
      (*(code *)**(undefined4 **)(DAT_004cbcdc + 4))(1);
      DAT_004cbcdc = 0;
    }
  }
  *(undefined4 *)((int)this + 0x18c) = 0;
switchD_004218a7_caseD_2:
  ExceptionList = local_c;
  return 0;
}

