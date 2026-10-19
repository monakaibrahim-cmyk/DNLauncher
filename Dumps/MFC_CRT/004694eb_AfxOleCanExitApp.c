// Address: 0x004694eb
// Name: AfxOleCanExitApp
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall AfxOleCanExitApp(void)
   
   Library: Visual Studio 2005 Release */

int AfxOleCanExitApp(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return (uint)(*(int *)(pAVar1 + 0x2c) == 0);
}

