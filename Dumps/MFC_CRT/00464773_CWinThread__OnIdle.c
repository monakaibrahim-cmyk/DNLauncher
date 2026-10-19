// Address: 0x00464773
// Name: CWinThread::OnIdle
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::OnIdle(long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinThread::OnIdle(CWinThread *this,long param_1)

{
  CWnd *pCVar1;
  BOOL BVar2;
  AFX_MODULE_STATE *pAVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  CWnd *this_00;
  
  if (param_1 < 1) {
    pCVar1 = *(CWnd **)(this + 0x20);
    if (((pCVar1 != (CWnd *)0x0) && (*(HWND *)(pCVar1 + 0x20) != (HWND)0x0)) &&
       (BVar2 = IsWindowVisible(*(HWND *)(pCVar1 + 0x20)), BVar2 != 0)) {
      FUN_004571af(pCVar1,*(undefined4 *)(pCVar1 + 0x20),0x363,1,0);
      CWnd::SendMessageToDescendants(*(HWND__ **)(pCVar1 + 0x20),0x363,1,0,1,1);
    }
    pAVar3 = AfxGetModuleState();
    pAVar4 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                       ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar3 + 0x74));
    for (this_00 = *(CWnd **)(pAVar4 + 8); this_00 != (CWnd *)0x0;
        this_00 = *(CWnd **)(this_00 + 0x6c)) {
      if ((*(int *)(this_00 + 0x20) != 0) && (this_00 != pCVar1)) {
        if (*(int *)(this_00 + 0xa0) == 0) {
          CWnd::ShowWindow(this_00,0);
        }
        BVar2 = IsWindowVisible(*(HWND *)(this_00 + 0x20));
        if ((BVar2 != 0) || (-1 < *(int *)(this_00 + 0xa0))) {
          FUN_004571af(this_00,*(undefined4 *)(this_00 + 0x20),0x363,1,0);
          CWnd::SendMessageToDescendants(*(HWND__ **)(this_00 + 0x20),0x363,1,0,1,1);
        }
        if (0 < *(int *)(this_00 + 0xa0)) {
          CWnd::ShowWindow(this_00,*(int *)(this_00 + 0xa0));
        }
        *(undefined4 *)(this_00 + 0xa0) = 0xffffffff;
      }
    }
  }
  else {
    pAVar3 = AfxGetModuleState();
    pAVar4 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                       ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar3 + 0x74));
    if (*(int *)(pAVar4 + 0x10) == 0) {
      FUN_004691e1();
      FUN_004693f2(1);
    }
  }
  return (uint)(param_1 < 0);
}

