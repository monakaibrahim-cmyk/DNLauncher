// Address: 0x0046522e
// Name: CList<IControlSiteFactory*,IControlSiteFactory*>::CList<IControlSiteFactory*,IControlSiteFactory*>
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CList<class IControlSiteFactory *,class IControlSiteFactory *>::CList<class
   IControlSiteFactory *,class IControlSiteFactory *>(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CList<IControlSiteFactory*,IControlSiteFactory*>::CList<IControlSiteFactory*,IControlSiteFactory*>
          (CList<IControlSiteFactory*,IControlSiteFactory*> *this,int param_1)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = vftable;
  *(int *)(this + 0x18) = param_1;
  return;
}

