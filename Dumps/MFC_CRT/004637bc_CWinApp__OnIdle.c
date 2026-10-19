// Address: 0x004637bc
// Name: CWinApp::OnIdle
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::OnIdle(long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::OnIdle(CWinApp *this,long param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = param_1;
  if (param_1 < 1) {
    CWinThread::OnIdle((CWinThread *)this,param_1);
    param_1 = 0;
    if (*(int *)(this + 0x58) != 0) {
      param_1 = (**(code **)(**(int **)(this + 0x58) + 0x10))();
      while (param_1 != 0) {
        piVar2 = (int *)(**(code **)(**(int **)(this + 0x58) + 0x14))(&param_1);
        (**(code **)(*piVar2 + 0x88))();
      }
    }
  }
  else if (param_1 == 1) {
    CWinThread::OnIdle((CWinThread *)this,1);
  }
  return (uint)(lVar1 < 1);
}

