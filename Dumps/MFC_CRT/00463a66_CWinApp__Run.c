// Address: 0x00463a66
// Name: CWinApp::Run
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::Run(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::Run(CWinApp *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x20) == 0) {
    iVar1 = FUN_0046951a();
    if (iVar1 != 0) {
      AfxPostQuitMessage(0);
    }
  }
  iVar1 = CWinThread::Run((CWinThread *)this);
  return iVar1;
}

