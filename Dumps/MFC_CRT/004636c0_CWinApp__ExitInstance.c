// Address: 0x004636c0
// Name: CWinApp::ExitInstance
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::ExitInstance(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  AFX_MODULE_STATE *pAVar1;
  _AFX_THREAD_STATE *p_Var2;
  int iVar3;
  
  if ((*(int *)(this + 0x8c) == 0) ||
     ((iVar3 = *(int *)(*(int *)(this + 0x8c) + 0x10), iVar3 != 6 && (iVar3 != 5)))) {
    pAVar1 = AfxGetModuleState();
    if (pAVar1[0x14] == (AFX_MODULE_STATE)0x0) {
      SaveStdProfileSettings(this);
    }
  }
  if (*(code **)(this + 0x9c) != (code *)0x0) {
    (**(code **)(this + 0x9c))();
  }
  if (*(HMODULE *)(this + 0x7c) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  iVar3 = 0;
  p_Var2 = FUN_004641a3();
  if (p_Var2 != (_AFX_THREAD_STATE *)0x0) {
    p_Var2 = FUN_004641a3();
    iVar3 = *(int *)(p_Var2 + 8);
  }
  return iVar3;
}

