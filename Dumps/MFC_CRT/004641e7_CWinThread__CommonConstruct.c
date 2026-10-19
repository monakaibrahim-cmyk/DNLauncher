// Address: 0x004641e7
// Name: CWinThread::CommonConstruct
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWinThread::CommonConstruct(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CWinThread::CommonConstruct(CWinThread *this)

{
  _AFX_THREAD_STATE *p_Var1;
  
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  p_Var1 = AfxGetThreadState();
  *(undefined4 *)(p_Var1 + 0x34) = 0;
  *(undefined4 *)(p_Var1 + 0x54) = 0;
  GetCursorPos((LPPOINT)(p_Var1 + 0x4c));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x28) = 1;
  return;
}

