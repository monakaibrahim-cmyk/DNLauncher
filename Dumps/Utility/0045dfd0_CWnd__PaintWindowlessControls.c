// Address: 0x0045dfd0
// Name: CWnd::PaintWindowlessControls
// Category: Utility


int __thiscall CWnd::PaintWindowlessControls(CWnd *this,CDC *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x4c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045a959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)(this + 0x4c) + 0x98))();
    return iVar1;
  }
  return 0;
}

