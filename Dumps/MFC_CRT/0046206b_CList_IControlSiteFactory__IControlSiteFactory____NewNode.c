// Address: 0x0046206b
// Name: CList<IControlSiteFactory*,IControlSiteFactory*>::NewNode
// Category: MFC_CRT


/* Library Function - Single Match
    protected: struct CList<class IControlSiteFactory *,class IControlSiteFactory *>::CNode *
   __thiscall CList<class IControlSiteFactory *,class IControlSiteFactory *>::NewNode(struct
   CList<class IControlSiteFactory *,class IControlSiteFactory *>::CNode *,struct CList<class
   IControlSiteFactory *,class IControlSiteFactory *>::CNode *)
   
   Library: Visual Studio 2005 Release */

CNode * __thiscall
CList<IControlSiteFactory*,IControlSiteFactory*>::NewNode
          (CList<IControlSiteFactory*,IControlSiteFactory*> *this,CNode *param_1,CNode *param_2)

{
  int iVar1;
  CNode *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(this + 0x10) == 0) {
    iVar3 = FUN_00471627((undefined4 *)(this + 0x14),*(int *)(this + 0x18),0xc);
    iVar1 = *(int *)(this + 0x18);
    puVar4 = (undefined4 *)(iVar3 + -8 + iVar1 * 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *puVar4 = *(undefined4 *)(this + 0x10);
      *(undefined4 **)(this + 0x10) = puVar4;
      puVar4 = puVar4 + -3;
    }
  }
  pCVar2 = *(CNode **)(this + 0x10);
  if (pCVar2 != (CNode *)0x0) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)pCVar2;
    *(CNode **)(pCVar2 + 4) = param_1;
    *(CNode **)pCVar2 = param_2;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

