// Address: 0x004651b9
// Name: CControlSiteFactoryMgr::~CControlSiteFactoryMgr
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CControlSiteFactoryMgr::~CControlSiteFactoryMgr(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CControlSiteFactoryMgr::~CControlSiteFactoryMgr(CControlSiteFactoryMgr *this)

{
  CList<HWND__*,HWND__*> *this_00;
  
  *(undefined ***)this = vftable;
  if (*(undefined4 **)(this + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x20))(1);
  }
  this_00 = (CList<HWND__*,HWND__*> *)(this + 4);
  CList<HWND__*,HWND__*>::RemoveAll(this_00);
  *(undefined ***)this_00 = CList<IControlSiteFactory*,IControlSiteFactory*>::vftable;
  CList<HWND__*,HWND__*>::RemoveAll(this_00);
  return;
}

