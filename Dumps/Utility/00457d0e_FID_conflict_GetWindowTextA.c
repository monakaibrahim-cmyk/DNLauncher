// Address: 0x00457d0e
// Name: FID_conflict:GetWindowTextA
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall CWnd::GetWindowTextA(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    public: void __thiscall CWnd::GetWindowTextW(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2005 Release */

int FID_conflict_GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  wchar_t *lpString_00;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) == 0) {
    iVar1 = GetWindowTextLengthW(*(HWND *)(in_ECX + 0x20));
    iVar2 = iVar1 + 1;
    lpString_00 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                            ((CSimpleStringT<wchar_t,0> *)hWnd,iVar1);
    GetWindowTextW(*(HWND *)(in_ECX + 0x20),lpString_00,iVar2);
    iVar2 = FUN_00404990(hWnd,-1);
    return iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00457d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x8c))();
  return iVar2;
}

