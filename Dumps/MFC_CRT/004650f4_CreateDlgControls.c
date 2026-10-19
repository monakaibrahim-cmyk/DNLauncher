// Address: 0x004650f4
// Name: CreateDlgControls
// Category: MFC_CRT


/* WARNING: Variable defined which should be unmapped: param_3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall COccManager::CreateDlgControls(class CWnd *,char const *,struct
   _AFX_OCC_DIALOG_INFO *)
    public: virtual int __thiscall COccManager::CreateDlgControls(class CWnd *,wchar_t const
   *,struct _AFX_OCC_DIALOG_INFO *)
   
   Library: Visual Studio 2005 Release */

LPCWSTR __thiscall CreateDlgControls(int *param_1,int param_2,LPCWSTR param_3,undefined4 param_4)

{
  HMODULE hModule;
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  LPVOID pvVar2;
  HGLOBAL local_8;
  
  pvVar2 = (LPVOID)0x0;
  local_8 = (HGLOBAL)0x0;
  if (param_3 != (LPCWSTR)0x0) {
    pAVar1 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar1 + 0xc);
    hResInfo = FindResourceW(hModule,param_3,(LPCWSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      local_8 = LoadResource(hModule,hResInfo);
      if (local_8 == (HGLOBAL)0x0) {
        return param_3;
      }
      pvVar2 = LockResource(local_8);
    }
  }
  param_3 = (LPCWSTR)&DAT_00000001;
  if ((pvVar2 != (LPVOID)0x0) &&
     (param_3 = (LPCWSTR)(**(code **)(*param_1 + 0x20))(param_2,pvVar2,param_4),
     local_8 != (HGLOBAL)0x0)) {
    FreeResource(local_8);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    (**(code **)(**(int **)(param_2 + 0x4c) + 0xa0))(param_4);
  }
  return param_3;
}

