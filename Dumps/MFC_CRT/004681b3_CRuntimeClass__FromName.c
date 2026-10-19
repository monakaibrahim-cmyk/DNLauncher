// Address: 0x004681b3
// Name: CRuntimeClass::FromName
// Category: MFC_CRT


/* Library Function - Single Match
    public: static struct CRuntimeClass * __stdcall CRuntimeClass::FromName(char const *)
   
   Library: Visual Studio 2005 Release */

CRuntimeClass * CRuntimeClass::FromName(char *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  CRuntimeClass *pCVar3;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(0);
  pCVar3 = *(CRuntimeClass **)(pAVar1 + 0x1c);
  while( true ) {
    if (pCVar3 == (CRuntimeClass *)0x0) {
      AfxUnlockGlobals(0);
      return (CRuntimeClass *)0x0;
    }
    iVar2 = lstrcmpA(param_1,*(LPCSTR *)pCVar3);
    if (iVar2 == 0) break;
    pCVar3 = *(CRuntimeClass **)(pCVar3 + 0x14);
  }
  AfxUnlockGlobals(0);
  return pCVar3;
}

