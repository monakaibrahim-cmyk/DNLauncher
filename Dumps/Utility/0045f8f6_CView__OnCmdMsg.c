// Address: 0x0045f8f6
// Name: CView::OnCmdMsg
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CView::OnCmdMsg(unsigned int,int,void *,struct AFX_CMDHANDLERINFO
   *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CView::OnCmdMsg(CView *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  CPushRoutingView local_1c [20];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x45f902;
  iVar1 = CCmdTarget::OnCmdMsg((CCmdTarget *)this,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x54) == 0) {
      iVar1 = 0;
    }
    else {
      CPushRoutingView::CPushRoutingView(local_1c,this);
      local_8 = 0;
      iVar1 = (**(code **)(**(int **)(this + 0x54) + 0xc))(param_1,param_2,param_3,param_4);
      CPushRoutingView::~CPushRoutingView(local_1c);
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

