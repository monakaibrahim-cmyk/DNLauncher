// Address: 0x00456859
// Name: CComCtlWrapper::GetProcAddress_InitCommonControlsEx
// Category: Utility


/* Library Function - Single Match
    public: struct CComCtlWrapper::InitCommonControlsEx_Type __thiscall
   CComCtlWrapper::GetProcAddress_InitCommonControlsEx(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::GetProcAddress_InitCommonControlsEx(CComCtlWrapper *this)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 *in_stack_00000004;
  char *lpProcName;
  
  if (*(int *)(this + 0x14) == 0) {
    lpProcName = "InitCommonControlsEx";
    hModule = FUN_0041c3f0((int)this);
    pFVar1 = GetProcAddress(hModule,lpProcName);
    *(FARPROC *)(this + 0x14) = pFVar1;
  }
  *in_stack_00000004 = *(undefined4 *)(this + 0x14);
  return;
}

