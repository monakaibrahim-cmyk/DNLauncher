// Address: 0x00464bc7
// Name: CWinApp::CloseAllDocuments
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWinApp::CloseAllDocuments(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::CloseAllDocuments(CWinApp *this,int param_1)

{
  if (*(int *)(this + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00464bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x58) + 0x24))();
    return;
  }
  return;
}

