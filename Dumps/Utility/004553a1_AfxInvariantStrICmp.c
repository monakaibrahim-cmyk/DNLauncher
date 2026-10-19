// Address: 0x004553a1
// Name: AfxInvariantStrICmp
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    int __cdecl AfxInvariantStrICmp(char const *,char const *)
    int __cdecl AfxInvariantStrICmp(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxInvariantStrICmp(PCNZWCH param_1,PCNZWCH param_2)

{
  int iVar1;
  
  iVar1 = CompareStringW(0x409,1,param_1,-1,param_2,-1);
  return iVar1 + -2;
}

