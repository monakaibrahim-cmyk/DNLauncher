// Address: 0x0045c943
// Name: FID_conflict:ModifyMenuW
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CMenu::ModifyMenuA(unsigned int,unsigned int,unsigned int,char const *)
    public: int __thiscall CMenu::ModifyMenuW(unsigned int,unsigned int,unsigned int,wchar_t const
   *)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_ModifyMenuW
               (HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCWSTR lpNewItem)

{
  BOOL BVar1;
  int in_ECX;
  
  BVar1 = ModifyMenuW(*(HMENU *)(in_ECX + 4),(UINT)hMnu,uPosition,uFlags,(LPCWSTR)uIDNewItem);
  return BVar1;
}

