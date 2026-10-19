// Address: 0x0045aa79
// Name: FID_conflict:SetWindowTextW
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall CWnd::SetWindowTextA(char const *)
    public: void __thiscall CWnd::SetWindowTextW(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_SetWindowTextW(HWND hWnd,LPCWSTR lpString)

{
  BOOL BVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
LAB_0045aa80:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  BVar1 = IsWindow(*(HWND *)(in_ECX + 0x20));
  if (BVar1 == 0) {
    if (*(int *)(in_ECX + 0x50) == 0) goto LAB_0045aa80;
  }
  else if (*(int *)(in_ECX + 0x50) == 0) {
    BVar1 = SetWindowTextW(*(HWND *)(in_ECX + 0x20),(LPCWSTR)hWnd);
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0045aa9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x88))();
  return BVar1;
}

