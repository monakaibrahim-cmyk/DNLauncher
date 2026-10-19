// Address: 0x00465251
// Name: CList<IControlSiteFactory*,IControlSiteFactory*>::Find
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<class IControlSiteFactory *,class
   IControlSiteFactory *>::Find(class IControlSiteFactory *,struct __POSITION *)const 
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall
CList<IControlSiteFactory*,IControlSiteFactory*>::Find
          (CList<IControlSiteFactory*,IControlSiteFactory*> *this,IControlSiteFactory *param_1,
          __POSITION *param_2)

{
  int iVar1;
  __POSITION *p_Var2;
  
  if (param_2 == (__POSITION *)0x0) {
    p_Var2 = *(__POSITION **)(this + 4);
  }
  else {
    p_Var2 = *(__POSITION **)param_2;
  }
  while( true ) {
    if (p_Var2 == (__POSITION *)0x0) {
      return (__POSITION *)0x0;
    }
    iVar1 = CompareElements<IControlSiteFactory*,IControlSiteFactory*>
                      ((IControlSiteFactory **)(p_Var2 + 8),&param_1);
    if (iVar1 != 0) break;
    p_Var2 = *(__POSITION **)p_Var2;
  }
  return p_Var2;
}

