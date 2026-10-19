// Address: 0x0045b050
// Name: FID_conflict:GetWindowTextW
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CWnd::GetWindowTextA(char *,int)const 
    public: int __thiscall CWnd::GetWindowTextW(wchar_t *,int)const 
   
   Library: Visual Studio 2005 Release */

int FID_conflict_GetWindowTextW(HWND hWnd,LPWSTR lpString,int nMaxCount)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x45b05c;
  if (*(int *)(in_ECX + 0x50) == 0) {
    iVar1 = GetWindowTextW(*(HWND *)(in_ECX + 0x20),(LPWSTR)hWnd,(int)lpString);
  }
  else {
    piVar2 = (int *)FUN_00453ed1();
    FUN_004031d0(local_14,piVar2);
    local_8 = 0;
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x8c))(local_14);
    ATL::Checked::tcsncpy_s((wchar_t *)hWnd,(uint)lpString,local_14[0],0xffffffff);
    iVar1 = lstrlenW((LPCWSTR)hWnd);
    FUN_004031b0((undefined4 *)(local_14[0] + -8));
  }
  return iVar1;
}

