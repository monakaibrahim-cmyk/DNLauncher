// Address: 0x00463eb5
// Name: CWinApp::CWinApp
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CWinApp::CWinApp(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

CWinApp * __thiscall CWinApp::CWinApp(CWinApp *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  AFX_MODULE_STATE *pAVar2;
  AFX_MODULE_THREAD_STATE *pAVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  
  CWinThread::CWinThread((CWinThread *)this);
  *(undefined ***)this = vftable;
  if (param_1 == (wchar_t *)0x0) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  else {
    pwVar1 = __wcsdup(param_1);
    *(wchar_t **)(this + 0x50) = pwVar1;
  }
  pAVar2 = AfxGetModuleState();
  if (pAVar2 != (AFX_MODULE_STATE *)0x0) {
    pAVar3 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                       ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar2 + 0x74));
    if (pAVar3 != (AFX_MODULE_THREAD_STATE *)0x0) {
      *(CWinApp **)(pAVar3 + 4) = this;
      pvVar4 = GetCurrentThread();
      *(HANDLE *)(this + 0x2c) = pvVar4;
      DVar5 = GetCurrentThreadId();
      *(DWORD *)(this + 0x30) = DVar5;
      *(CWinApp **)(pAVar2 + 4) = this;
      *(undefined4 *)(this + 0x44) = 0;
      *(undefined4 *)(this + 0x7c) = 0;
      *(undefined4 *)(this + 100) = 0;
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined4 *)(this + 0x54) = 0;
      *(undefined4 *)(this + 0x60) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x58) = 0;
      *(undefined2 *)(this + 0x92) = 0;
      *(undefined2 *)(this + 0x90) = 0;
      *(undefined4 *)(this + 0x48) = 0;
      *(undefined4 *)(this + 0x8c) = 0;
      *(undefined4 *)(this + 0x80) = 0;
      *(undefined4 *)(this + 0x84) = 0;
      *(undefined4 *)(this + 0x70) = 0;
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x94) = 0;
      *(undefined4 *)(this + 0x9c) = 0;
      *(undefined4 *)(this + 0x5c) = 0;
      *(undefined4 *)(this + 0x6c) = 0;
      *(undefined4 *)(this + 0x98) = 0x200;
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

