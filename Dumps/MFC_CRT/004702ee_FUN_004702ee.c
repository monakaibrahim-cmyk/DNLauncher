// Address: 0x004702ee
// Name: FUN_004702ee
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __thiscall FUN_004702ee(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  undefined4 uVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  uint uVar8;
  
  piVar1 = (int *)((int)this + 0x4c);
  if (*piVar1 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x124))(piVar1);
    if ((iVar3 != 0) && (*piVar1 == 0)) {
      pAVar4 = AfxGetModuleState();
      iVar3 = (**(code **)(**(int **)(pAVar4 + 0x3c) + 8))(this);
      *piVar1 = iVar3;
      bVar2 = FUN_00470347();
      return bVar2;
    }
    if (param_1 == 0) {
      iVar3 = **(int **)((int)this + 0x4c);
      uVar5 = (**(code **)(*(int *)this + 0x130))();
      (**(code **)(iVar3 + 0xa0))(uVar5);
    }
  }
  pCVar7 = this;
  if (*(int *)((int)this + 0x4c) != 0) {
    while ((*(uint *)(pCVar7 + 0x3c) & 0x100) == 0) {
      *(uint *)(pCVar7 + 0x3c) = *(uint *)(pCVar7 + 0x3c) | 0x100;
      pHVar6 = GetParent(*(HWND *)(pCVar7 + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar6);
      pHVar6 = (HWND)0x0;
      if (pCVar7 != (CWnd *)0x0) {
        pHVar6 = *(HWND *)(pCVar7 + 0x20);
      }
      uVar8 = GetWindowLongW(pHVar6,-0x10);
      if (((uVar8 & 0x40000000) == 0) || (pCVar7 == (CWnd *)0x0)) break;
    }
  }
  return *(int *)((int)this + 0x4c) != 0;
}

