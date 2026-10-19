// Address: 0x00419bd0
// Name: FUN_00419bd0
// Category: Launcher


CObject * FUN_00419bd0(void)

{
  int *piVar1;
  CObject *pCVar2;
  int iVar3;
  CWnd *pCVar4;
  
  piVar1 = (int *)FUN_0046419a();
  if (piVar1 != (int *)0x0) {
    pCVar2 = (CObject *)(**(code **)(*piVar1 + 0x74))();
    if (pCVar2 != (CObject *)0x0) {
      iVar3 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)&PTR_s_CFrameWnd_004a2988);
      if (iVar3 != 0) {
        pCVar2 = (CObject *)(**(code **)(*(int *)pCVar2 + 0x154))();
        pCVar2 = FUN_0046618c((CRuntimeClass *)&PTR_s_CStatusBar_004a3a24,pCVar2);
        return pCVar2;
      }
      pCVar4 = CWnd::GetDescendantWindow(*(HWND__ **)(pCVar2 + 0x20),0xe801,0);
      pCVar2 = FUN_0046618c((CRuntimeClass *)&PTR_s_CStatusBar_004a3a24,(CObject *)pCVar4);
      return pCVar2;
    }
  }
  return (CObject *)0x0;
}

