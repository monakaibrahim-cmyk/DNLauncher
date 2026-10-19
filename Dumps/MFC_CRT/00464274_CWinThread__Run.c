// Address: 0x00464274
// Name: CWinThread::Run
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::Run(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinThread::Run(CWinThread *this)

{
  bool bVar1;
  _AFX_THREAD_STATE *p_Var2;
  BOOL BVar3;
  int iVar4;
  int local_8;
  
  p_Var2 = AfxGetThreadState();
  bVar1 = true;
  local_8 = 0;
  do {
    if (bVar1) {
      do {
        BVar3 = PeekMessageW((LPMSG)(p_Var2 + 0x30),(HWND)0x0,0,0,0);
        if (BVar3 != 0) break;
        iVar4 = (**(code **)(*(int *)this + 0x60))(local_8);
        local_8 = local_8 + 1;
        if (iVar4 == 0) {
          bVar1 = false;
        }
      } while (bVar1);
    }
    do {
      iVar4 = (**(code **)(*(int *)this + 0x5c))();
      if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004642fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(*(int *)this + 0x68))();
        return iVar4;
      }
      iVar4 = (**(code **)(*(int *)this + 100))((LPMSG)(p_Var2 + 0x30));
      if (iVar4 != 0) {
        bVar1 = true;
        local_8 = 0;
      }
      BVar3 = PeekMessageW((LPMSG)(p_Var2 + 0x30),(HWND)0x0,0,0,0);
    } while (BVar3 != 0);
  } while( true );
}

