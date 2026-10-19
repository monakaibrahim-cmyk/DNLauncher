// Address: 0x0046248a
// Name: CFrameWnd::RemoveFrameWnd
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::RemoveFrameWnd(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::RemoveFrameWnd(CFrameWnd *this)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar1 = AfxGetModuleState();
  pAVar2 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                     ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar1 + 0x74));
  CSimpleList::Remove((CSimpleList *)(pAVar2 + 8),this);
  return;
}

