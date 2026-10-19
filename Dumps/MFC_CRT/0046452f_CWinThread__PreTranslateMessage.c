// Address: 0x0046452f
// Name: CWinThread::PreTranslateMessage
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::PreTranslateMessage(struct tagMSG *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CWinThread::PreTranslateMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
  iVar1 = AfxInternalPreTranslateMessage(param_1);
  return iVar1;
}

