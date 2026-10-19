// Address: 0x00468a75
// Name: CMenu::DestroyMenu
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CGdiObject::DeleteObject(void)
    public: int __thiscall CMenu::DestroyMenu(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

int __thiscall CMenu::DestroyMenu(CMenu *this)

{
  HMENU hMenu;
  BOOL BVar1;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)Detach((int)this);
  BVar1 = ::DestroyMenu(hMenu);
  return BVar1;
}

