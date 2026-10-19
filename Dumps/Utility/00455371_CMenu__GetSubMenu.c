// Address: 0x00455371
// Name: CMenu::GetSubMenu
// Category: Utility


/* Library Function - Single Match
    public: class CMenu * __thiscall CMenu::GetSubMenu(int)const 
   
   Library: Visual Studio 2005 Release */

CMenu * __thiscall CMenu::GetSubMenu(CMenu *this,int param_1)

{
  HMENU pHVar1;
  CMenu *pCVar2;
  
  pHVar1 = ::GetSubMenu(*(HMENU *)(this + 4),param_1);
  pCVar2 = FromHandle(pHVar1);
  return pCVar2;
}

