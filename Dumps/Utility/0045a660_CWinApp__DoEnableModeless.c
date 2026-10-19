// Address: 0x0045a660
// Name: CWinApp::DoEnableModeless
// Category: Utility


/* Library Function - Single Match
    public: static void __cdecl CWinApp::DoEnableModeless(int)
   
   Library: Visual Studio 2005 Release */

void __cdecl CWinApp::DoEnableModeless(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0041c6c0();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x120))();
    if ((iVar2 != 0) && (piVar1[0x20] != 0)) {
      (**(code **)(*(int *)piVar1[0x20] + 100))(param_1);
    }
  }
  return;
}

