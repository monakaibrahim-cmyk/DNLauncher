// Address: 0x0046368b
// Name: CWinApp::SaveStdProfileSettings
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CWinApp::SaveStdProfileSettings(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CWinApp::SaveStdProfileSettings(CWinApp *this)

{
  if (*(int *)(this + 0x88) != 0) {
    (**(code **)(**(int **)(this + 0x88) + 0x14))();
  }
  if (*(int *)(this + 0x94) != 0) {
    WriteProfileInt(this,L"Settings",L"PreviewPages",*(int *)(this + 0x94));
  }
  return;
}

