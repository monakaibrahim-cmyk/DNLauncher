// Address: 0x004661ac
// Name: AfxClassInit
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxClassInit(struct CRuntimeClass *)
   
   Library: Visual Studio 2005 Release */

void AfxClassInit(CRuntimeClass *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(0);
  CSimpleList::AddHead((CSimpleList *)(pAVar1 + 0x1c),param_1);
  AfxUnlockGlobals(0);
  return;
}

