// Address: 0x0045fb97
// Name: FUN_0045fb97
// Category: Utility


void __thiscall
FUN_0045fb97(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  CFrameWnd *this_00;
  CObject *pCVar1;
  CFrameWnd *pCVar2;
  
  if ((int *)param_5[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_5[0x23] + 0x17c))(param_1,param_2);
  }
  this_00 = CWnd::GetParentFrame(this);
  pCVar1 = FUN_0046618c((CRuntimeClass *)&PTR_s_CFrameWnd_004a2988,(CObject *)this_00);
  if (pCVar1 == (CObject *)0x0) {
    this_00 = (CFrameWnd *)FUN_0041c6c0();
  }
  (**(code **)(*(int *)this_00 + 0x150))(0,param_5[0x2a]);
  CFrameWnd::SetActiveView(this_00,*(CView **)(param_5[0x2a] + 0xc),1);
  pCVar2 = CWnd::GetParentFrame(this);
  if (this_00 != pCVar2) {
    (**(code **)(*(int *)this + 0x160))(1,this,this);
  }
  (**(code **)(*param_5 + 0x60))();
  (**(code **)(*(int *)this_00 + 0x148))(1);
  SendMessageW(*(HWND *)(this_00 + 0x20),0x362,0xe001,0);
  UpdateWindow(*(HWND *)(this_00 + 0x20));
  return;
}

