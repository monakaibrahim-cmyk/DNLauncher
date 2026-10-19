// Address: 0x00456ad3
// Name: AfxUnhookWindowCreate
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxUnhookWindowCreate(void)
   
   Library: Visual Studio 2005 Release */

int AfxUnhookWindowCreate(void)

{
  CNoTrackObject *pCVar1;
  AFX_MODULE_STATE *pAVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pAVar2 = AfxGetModuleState();
  if ((pAVar2[0x14] != (AFX_MODULE_STATE)0x0) && (*(HHOOK *)(pCVar1 + 0x28) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(pCVar1 + 0x28));
    *(undefined4 *)(pCVar1 + 0x28) = 0;
  }
  if (*(int *)(pCVar1 + 0x14) != 0) {
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    return 0;
  }
  return 1;
}

