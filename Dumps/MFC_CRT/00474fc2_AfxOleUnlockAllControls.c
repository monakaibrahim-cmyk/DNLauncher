// Address: 0x00474fc2
// Name: AfxOleUnlockAllControls
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxOleUnlockAllControls(void)
   
   Library: Visual Studio 2005 Release */

void AfxOleUnlockAllControls(void)

{
  undefined4 *puVar1;
  AFX_MODULE_STATE *pAVar2;
  
  pAVar2 = AfxGetModuleState();
  AfxLockGlobals(0xb);
  while (puVar1 = *(undefined4 **)(pAVar2 + 0x40), puVar1 != (undefined4 *)0x0) {
    CSimpleList::Remove((CSimpleList *)(pAVar2 + 0x40),puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  AfxUnlockGlobals(0xb);
  return;
}

