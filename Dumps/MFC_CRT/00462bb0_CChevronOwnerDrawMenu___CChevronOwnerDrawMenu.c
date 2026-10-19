// Address: 0x00462bb0
// Name: CChevronOwnerDrawMenu::~CChevronOwnerDrawMenu
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CChevronOwnerDrawMenu::~CChevronOwnerDrawMenu(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

void __thiscall CChevronOwnerDrawMenu::~CChevronOwnerDrawMenu(CChevronOwnerDrawMenu *this)

{
  *(undefined ***)(this + 8) = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(this + 8));
  *(undefined ***)this = CMenu::vftable;
  CMenu::DestroyMenu((CMenu *)this);
  return;
}

