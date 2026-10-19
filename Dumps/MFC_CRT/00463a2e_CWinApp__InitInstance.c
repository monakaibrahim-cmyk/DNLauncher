// Address: 0x00463a2e
// Name: CWinApp::InitInstance
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::InitInstance(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::InitInstance(CWinApp *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  
  (**(code **)(*(int *)this + 0x7c))();
  iVar1 = (**(code **)(*(int *)this + 0xb0))();
  *(int *)(this + 0x7c) = iVar1;
  if (iVar1 != 0) {
    pAVar2 = AfxGetModuleState();
    *(int *)(pAVar2 + 0xc) = iVar1;
    InterlockedExchange((LONG *)&Target_004cbc2c,*(LONG *)(this + 0x7c));
  }
  return 1;
}

