// Address: 0x00460823
// Name: CFrameWnd::SetActiveView
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::SetActiveView(class CView *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::SetActiveView(CFrameWnd *this,CView *param_1,int param_2)

{
  CView *pCVar1;
  
  pCVar1 = *(CView **)(this + 0xb0);
  if (param_1 != pCVar1) {
    *(undefined4 *)(this + 0xb0) = 0;
    if (pCVar1 != (CView *)0x0) {
      (**(code **)(*(int *)pCVar1 + 0x160))(0,param_1,pCVar1);
    }
    if (((*(int *)(this + 0xb0) == 0) &&
        (*(CView **)(this + 0xb0) = param_1, param_1 != (CView *)0x0)) && (param_2 != 0)) {
      (**(code **)(*(int *)param_1 + 0x160))(1,param_1,pCVar1);
    }
  }
  return;
}

