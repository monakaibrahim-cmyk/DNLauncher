// Address: 0x004570a0
// Name: _AfxInitCommonControls
// Category: Utility


/* Library Function - Single Match
    long __stdcall _AfxInitCommonControls(struct tagINITCOMMONCONTROLSEX *,long)
   
   Library: Visual Studio 2005 Release */

long _AfxInitCommonControls(tagINITCOMMONCONTROLSEX *param_1,long param_2)

{
  AFX_MODULE_STATE *pAVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  pAVar1 = AfxGetModuleState();
  piVar2 = (int *)CComCtlWrapper::GetProcAddress_InitCommonControlsEx
                            ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
  if (*piVar2 == 0) {
    if ((param_2 & 0x3fc0U) == param_2) {
      pAVar1 = AfxGetModuleState();
      CComCtlWrapper::_InitCommonControls((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
      lVar4 = 0x3fc0;
    }
  }
  else {
    iVar3 = AfxInitCommonControlsEx(param_1);
    if (iVar3 != 0) {
      lVar4 = param_2;
    }
  }
  return lVar4;
}

