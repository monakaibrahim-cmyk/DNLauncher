// Address: 0x00460ba9
// Name: FUN_00460ba9
// Category: MFC_CRT


undefined4 __thiscall FUN_00460ba9(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  
  if (param_2 == 0) {
    iVar1 = CFrameWnd::IsTracking(this);
    if (iVar1 == 0) {
      param_2 = *(int *)((int)this + 0xa4) + 0x20000;
    }
    else {
      param_2 = *(int *)((int)this + 0xa8) + 0x10000;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  pAVar2 = AfxGetModuleState();
  if (*(int **)(pAVar2 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(pAVar2 + 4) + 0xac))(param_2,1);
  }
  return 1;
}

