// Address: 0x0046246d
// Name: CFrameWnd::AddFrameWnd
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::AddFrameWnd(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::AddFrameWnd(CFrameWnd *this)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar1 = AfxGetModuleState();
  pAVar2 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                     ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar1 + 0x74));
  CSimpleList::AddHead((CSimpleList *)(pAVar2 + 8),this);
  return;
}

