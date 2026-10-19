// Address: 0x00464740
// Name: AfxInternalPumpMessage
// Category: MFC_CRT


int AfxInternalPumpMessage(void)

{
  LPMSG lpMsg;
  _AFX_THREAD_STATE *p_Var1;
  BOOL BVar2;
  int iVar3;
  
  p_Var1 = AfxGetThreadState();
  lpMsg = (LPMSG)(p_Var1 + 0x30);
  BVar2 = GetMessageW(lpMsg,(HWND)0x0,0,0);
  iVar3 = 0;
  if (BVar2 != 0) {
    if (*(int *)(p_Var1 + 0x34) != 0x36a) {
      iVar3 = AfxPreTranslateMessage(lpMsg);
      if (iVar3 == 0) {
        TranslateMessage(lpMsg);
        DispatchMessageW(lpMsg);
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}

