// Address: 0x00470028
// Name: FID_conflict:GetDlgItemTextA
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    public: virtual int __thiscall COleControlContainer::GetDlgItemTextA(int,char *,int)const 
    public: virtual int __thiscall COleControlContainer::GetDlgItemTextW(int,wchar_t *,int)const 
   
   Library: Visual Studio 2005 Release */

UINT FID_conflict_GetDlgItemTextA(HWND hDlg,int nIDDlgItem,LPSTR lpString,int cchMax)

{
  int iVar1;
  UINT UVar2;
  int *in_ECX;
  HWND nMaxCount;
  
  nMaxCount = hDlg;
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  UVar2 = 0;
  if (iVar1 != 0) {
    UVar2 = FID_conflict_GetWindowTextW(hDlg,(LPWSTR)nIDDlgItem,(int)nMaxCount);
  }
  return UVar2;
}

