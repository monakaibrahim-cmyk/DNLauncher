// Address: 0x00459ea8
// Name: AfxHelpEnabled
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxHelpEnabled(void)
   
   Library: Visual Studio 2005 Release */

int AfxHelpEnabled(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_c [8];
  
  pAVar1 = AfxGetModuleState();
  if (*(int *)(pAVar1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    piVar3 = (int *)FUN_0041c6c0();
    if ((piVar3 == (int *)0x0) ||
       (iVar2 = (**(code **)(*piVar3 + 0xc))(0xe146,0,0,local_c), iVar2 == 0)) {
      pAVar1 = AfxGetModuleState();
      iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0xc))(0xe146,0,0,local_c);
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar2;
}

