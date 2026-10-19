// Address: 0x00471799
// Name: CFrameWnd::OnHelp
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnHelp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnHelp(CFrameWnd *this)

{
  AFX_MODULE_STATE *pAVar1;
  
  if (*(int *)(this + 100) != 0) {
    if (*(int *)(this + 100) != 0x3f107) {
      pAVar1 = AfxGetModuleState();
      (**(code **)(**(int **)(pAVar1 + 4) + 0xac))(*(undefined4 *)(this + 100),1);
    }
    return;
  }
  CWnd::OnHelp((CWnd *)this);
  return;
}

