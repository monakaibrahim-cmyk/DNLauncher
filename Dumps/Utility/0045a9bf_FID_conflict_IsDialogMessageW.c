// Address: 0x0045a9bf
// Name: FID_conflict:IsDialogMessageW
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CWnd::IsDialogMessageA(struct tagMSG *)
    public: int __thiscall CWnd::IsDialogMessageW(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_IsDialogMessageW(HWND hDlg,LPMSG lpMsg)

{
  AFX_MODULE_STATE *pAVar1;
  BOOL BVar2;
  int in_ECX;
  
  if ((*(ushort *)(in_ECX + 0x3c) & 0x100) == 0) {
    BVar2 = IsDialogMessageW(*(HWND *)(in_ECX + 0x20),(LPMSG)hDlg);
  }
  else {
    pAVar1 = AfxGetModuleState();
    BVar2 = (**(code **)(**(int **)(pAVar1 + 0x3c) + 0x28))();
  }
  return BVar2;
}

