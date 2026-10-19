// Address: 0x0045fab9
// Name: FUN_0045fab9
// Category: Utility


void __thiscall FUN_0045fab9(void *this,undefined4 *param_1)

{
  CSplitterWnd *pCVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pCVar1 = CView::GetParentSplitter(this,0);
  if ((pCVar1 == (CSplitterWnd *)0x0) || (*(int *)(pCVar1 + 0x98) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)*param_1)(uVar2);
  return;
}

