// Address: 0x0045f876
// Name: CPushRoutingView::CPushRoutingView
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CPushRoutingView::CPushRoutingView(class CView *)
   
   Library: Visual Studio 2005 Release */

CPushRoutingView * __thiscall
CPushRoutingView::CPushRoutingView(CPushRoutingView *this,CView *param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  
  p_Var1 = AfxGetThreadState();
  *(_AFX_THREAD_STATE **)(this + 4) = p_Var1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(p_Var1 + 0x148);
  *(undefined4 *)this = *(undefined4 *)(p_Var1 + 0x144);
  *(CView **)(p_Var1 + 0x144) = param_1;
  *(CPushRoutingView **)(*(int *)(this + 4) + 0x148) = this;
  return this;
}

