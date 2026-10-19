// Address: 0x00460fa7
// Name: CFrameWnd::OnCmdMsg
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CPushRoutingFrame local_1c [20];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x460fb3;
  CPushRoutingFrame::CPushRoutingFrame(local_1c,this);
  local_8 = 0;
  if (((*(int **)(this + 0xb0) == (int *)0x0) ||
      (iVar1 = (**(code **)(**(int **)(this + 0xb0) + 0xc))(param_1,param_2,param_3,param_4),
      iVar1 == 0)) &&
     (iVar1 = CCmdTarget::OnCmdMsg((CCmdTarget *)this,param_1,param_2,param_3,param_4), iVar1 == 0))
  {
    pAVar2 = AfxGetModuleState();
    if ((*(int **)(pAVar2 + 4) == (int *)0x0) ||
       (iVar1 = (**(code **)(**(int **)(pAVar2 + 4) + 0xc))(param_1,param_2,param_3,param_4),
       iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
    CPushRoutingFrame::~CPushRoutingFrame(local_1c);
    return iVar1;
  }
  CPushRoutingFrame::~CPushRoutingFrame(local_1c);
  return 1;
}

