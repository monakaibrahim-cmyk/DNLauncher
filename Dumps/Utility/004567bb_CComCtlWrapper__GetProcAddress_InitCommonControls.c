// Address: 0x004567bb
// Name: CComCtlWrapper::GetProcAddress_InitCommonControls
// Category: Utility


/* Library Function - Single Match
    public: struct CComCtlWrapper::InitCommonControls_Type __thiscall
   CComCtlWrapper::GetProcAddress_InitCommonControls(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::GetProcAddress_InitCommonControls(CComCtlWrapper *this)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 *in_stack_00000004;
  char *lpProcName;
  
  if (*(int *)(this + 0x10) == 0) {
    lpProcName = "InitCommonControls";
    hModule = FUN_0041c3f0((int)this);
    pFVar1 = GetProcAddress(hModule,lpProcName);
    *(FARPROC *)(this + 0x10) = pFVar1;
  }
  *in_stack_00000004 = *(undefined4 *)(this + 0x10);
  return;
}

