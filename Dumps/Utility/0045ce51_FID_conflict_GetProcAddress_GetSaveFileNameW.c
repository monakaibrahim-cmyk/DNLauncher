// Address: 0x0045ce51
// Name: FID_conflict:GetProcAddress_GetSaveFileNameW
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: struct CCommDlgWrapper::GetSaveFileNameW_Type __thiscall
   CCommDlgWrapper::GetProcAddress_GetSaveFileNameW(void)
    public: struct CComCtlWrapper::ImageList_Destroy_Type __thiscall
   CComCtlWrapper::GetProcAddress_ImageList_Destroy(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall FID_conflict_GetProcAddress_GetSaveFileNameW(void *this,undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  char *lpProcName;
  
  if (*(int *)((int)this + 0x1c) == 0) {
    lpProcName = "ImageList_Destroy";
    hModule = FUN_0041c3f0((int)this);
    pFVar1 = GetProcAddress(hModule,lpProcName);
    *(FARPROC *)((int)this + 0x1c) = pFVar1;
  }
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  return;
}

