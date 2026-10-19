// Address: 0x00456b59
// Name: CWnd::OnNcDestroy
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnNcDestroy(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::OnNcDestroy(CWnd *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_0046419a();
  if (iVar1 == 0) goto LAB_00456ba4;
  if (*(CWnd **)(iVar1 + 0x20) == this) {
    pAVar2 = AfxGetModuleState();
    if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar2 = AfxGetModuleState();
      if (iVar1 == *(int *)(pAVar2 + 4)) {
        iVar3 = AfxOleCanExitApp();
        if (iVar3 == 0) goto LAB_00456b99;
      }
      AfxPostQuitMessage(0);
    }
LAB_00456b99:
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar1 + 0x24) == this) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
LAB_00456ba4:
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 0x50))();
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  *(undefined4 *)(this + 0x4c) = 0;
  if (((byte)this[0x3c] & 1) != 0) {
    pAVar4 = AfxGetModuleThreadState();
    iVar1 = *(int *)(pAVar4 + 0x3c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
      _memset(&local_34,0,0x30);
      local_2c = *(undefined4 *)(this + 0x20);
      local_34 = 0x28;
      local_30 = 1;
      local_28 = local_2c;
      SendMessageW(*(HWND *)(iVar1 + 0x20),0x433,0,(LPARAM)&local_34);
    }
  }
  LVar5 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  Default(this);
  LVar6 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*(int *)this + 0xf0))();
    if (*piVar7 != 0) {
      SetWindowLongW(*(HWND *)(this + 0x20),-4,*piVar7);
    }
  }
  Detach(this);
  (**(code **)(*(int *)this + 0x114))();
  return;
}

