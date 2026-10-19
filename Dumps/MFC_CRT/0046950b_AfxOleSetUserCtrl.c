// Address: 0x0046950b
// Name: AfxOleSetUserCtrl
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxOleSetUserCtrl(int)
   
   Library: Visual Studio 2005 Release */

void AfxOleSetUserCtrl(int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  *(int *)(pAVar1 + 0x30) = param_1;
  return;
}

