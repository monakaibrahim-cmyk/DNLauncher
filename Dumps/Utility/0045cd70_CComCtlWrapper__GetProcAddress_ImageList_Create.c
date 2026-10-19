// Address: 0x0045cd70
// Name: CComCtlWrapper::GetProcAddress_ImageList_Create
// Category: Utility


/* Library Function - Single Match
    public: struct CComCtlWrapper::ImageList_Create_Type __thiscall
   CComCtlWrapper::GetProcAddress_ImageList_Create(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::GetProcAddress_ImageList_Create(CComCtlWrapper *this)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 *in_stack_00000004;
  char *lpProcName;
  
  if (*(int *)(this + 0x18) == 0) {
    lpProcName = "ImageList_Create";
    hModule = FUN_0041c3f0((int)this);
    pFVar1 = GetProcAddress(hModule,lpProcName);
    *(FARPROC *)(this + 0x18) = pFVar1;
  }
  *in_stack_00000004 = *(undefined4 *)(this + 0x18);
  return;
}

