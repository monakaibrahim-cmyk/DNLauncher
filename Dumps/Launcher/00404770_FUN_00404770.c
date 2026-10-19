// Address: 0x00404770
// Name: FUN_00404770
// Category: Launcher


void __fastcall FUN_00404770(undefined4 *param_1)

{
  BSTR pOVar1;
  
  pOVar1 = SysAllocStringLen((OLECHAR *)*param_1,*(UINT *)((OLECHAR *)*param_1 + -6));
  if (pOVar1 == (BSTR)0x0) {
    FUN_0040fef0();
    return;
  }
  return;
}

