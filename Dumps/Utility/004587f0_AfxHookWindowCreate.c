// Address: 0x004587f0
// Name: AfxHookWindowCreate
// Category: Utility


/* Library Function - Single Match
    void __stdcall AfxHookWindowCreate(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void AfxHookWindowCreate(CWnd *param_1)

{
  CNoTrackObject *pCVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(CWnd **)(pCVar1 + 0x14) != param_1) {
    if (*(int *)(pCVar1 + 0x28) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExW(5,(HOOKPROC)&lpfn_004585d0,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(pCVar1 + 0x28) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529b4();
      }
    }
    *(CWnd **)(pCVar1 + 0x14) = param_1;
  }
  return;
}

