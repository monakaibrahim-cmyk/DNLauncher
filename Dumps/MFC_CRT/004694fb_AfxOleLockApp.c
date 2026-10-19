// Address: 0x004694fb
// Name: AfxOleLockApp
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxOleLockApp(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void AfxOleLockApp(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  InterlockedIncrement((LONG *)(pAVar1 + 0x2c));
  return;
}

