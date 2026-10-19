// Address: 0x00464522
// Name: CWinThread::IsIdleMessage
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::IsIdleMessage(struct tagMSG *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CWinThread::IsIdleMessage(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  
  iVar1 = AfxInternalIsIdleMessage(param_1);
  return iVar1;
}

