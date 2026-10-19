// Address: 0x0045692e
// Name: AfxInitCommonControlsEx
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxInitCommonControlsEx(struct tagINITCOMMONCONTROLSEX *)
   
   Library: Visual Studio 2005 Release */

int AfxInitCommonControlsEx(tagINITCOMMONCONTROLSEX *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  iVar2 = CComCtlWrapper::_InitCommonControlsEx
                    ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78),param_1);
  return iVar2;
}

