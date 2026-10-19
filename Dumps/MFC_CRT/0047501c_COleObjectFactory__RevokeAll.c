// Address: 0x0047501c
// Name: COleObjectFactory::RevokeAll
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __stdcall COleObjectFactory::RevokeAll(void)
   
   Library: Visual Studio 2005 Release */

void COleObjectFactory::RevokeAll(void)

{
  AFX_MODULE_STATE *pAVar1;
  COleObjectFactory *this;
  
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(0);
  for (this = *(COleObjectFactory **)(pAVar1 + 0x24); this != (COleObjectFactory *)0x0;
      this = *(COleObjectFactory **)(this + 0x20)) {
    Revoke(this);
  }
  AfxUnlockGlobals(0);
  return;
}

