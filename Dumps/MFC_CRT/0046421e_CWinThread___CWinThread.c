// Address: 0x0046421e
// Name: CWinThread::~CWinThread
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CWinThread::~CWinThread(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CWinThread::~CWinThread(CWinThread *this)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  *(undefined ***)this = vftable;
  if (*(HANDLE *)(this + 0x2c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 0x2c));
  }
  pAVar1 = AfxGetModuleThreadState();
  if (*(CWinThread **)(pAVar1 + 4) == this) {
    *(undefined4 *)(pAVar1 + 4) = 0;
  }
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  return;
}

