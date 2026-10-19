// Address: 0x004643c2
// Name: AfxInternalPreTranslateMessage
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl AfxInternalPreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxInternalPreTranslateMessage(tagMSG *param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWnd *pCVar3;
  HWND__ *pHVar4;
  CWnd *pCVar5;
  
  pAVar1 = AfxGetModuleThreadState();
  if (((*(CWinThread **)(pAVar1 + 4) != (CWinThread *)0x0) && (param_1->hwnd == (HWND)0x0)) &&
     (iVar2 = CWinThread::DispatchThreadMessageEx(*(CWinThread **)(pAVar1 + 4),param_1), iVar2 != 0)
     ) {
    return 1;
  }
  pCVar3 = (CWnd *)FUN_0041c6c0();
  pHVar4 = (HWND__ *)0x0;
  if (pCVar3 != (CWnd *)0x0) {
    pHVar4 = *(HWND__ **)(pCVar3 + 0x20);
  }
  iVar2 = CWnd::WalkPreTranslateTree(pHVar4,param_1);
  if (iVar2 == 0) {
    if (pCVar3 != (CWnd *)0x0) {
      pCVar5 = CWnd::FromHandle(param_1->hwnd);
      pCVar5 = CWnd::GetTopLevelParent(pCVar5);
      if (pCVar5 != pCVar3) {
        iVar2 = (**(code **)(*(int *)pCVar3 + 0x100))(param_1);
        return iVar2;
      }
    }
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

