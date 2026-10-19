// Address: 0x004653e5
// Name: CList<IControlSiteFactory*,IControlSiteFactory*>::AddHead
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<class IControlSiteFactory *,class
   IControlSiteFactory *>::AddHead(class IControlSiteFactory *)
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall
CList<IControlSiteFactory*,IControlSiteFactory*>::AddHead
          (CList<IControlSiteFactory*,IControlSiteFactory*> *this,IControlSiteFactory *param_1)

{
  CNode *pCVar1;
  
  pCVar1 = NewNode(this,(CNode *)0x0,*(CNode **)(this + 4));
  *(IControlSiteFactory **)(pCVar1 + 8) = param_1;
  if (*(int *)(this + 4) == 0) {
    *(CNode **)(this + 8) = pCVar1;
  }
  else {
    *(CNode **)(*(int *)(this + 4) + 4) = pCVar1;
  }
  *(CNode **)(this + 4) = pCVar1;
  return (__POSITION *)pCVar1;
}

