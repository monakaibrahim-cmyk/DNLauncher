// Address: 0x004609f3
// Name: CPushRoutingFrame::CPushRoutingFrame
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CPushRoutingFrame::CPushRoutingFrame(class CFrameWnd *)
   
   Library: Visual Studio 2005 Release */

CPushRoutingFrame * __thiscall
CPushRoutingFrame::CPushRoutingFrame(CPushRoutingFrame *this,CFrameWnd *param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  
  p_Var1 = AfxGetThreadState();
  *(_AFX_THREAD_STATE **)(this + 4) = p_Var1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(p_Var1 + 0x150);
  *(undefined4 *)this = *(undefined4 *)(p_Var1 + 0x14c);
  *(CFrameWnd **)(p_Var1 + 0x14c) = param_1;
  *(CPushRoutingFrame **)(*(int *)(this + 4) + 0x150) = this;
  return this;
}

