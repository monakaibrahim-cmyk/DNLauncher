// Address: 0x00469154
// Name: AfxLockGlobals
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxLockGlobals(int)
   
   Library: Visual Studio 2005 Release */

void AfxLockGlobals(int param_1)

{
  int *piVar1;
  
  if (0x10 < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (DAT_004cabbc == 0) {
    AfxCriticalInit();
  }
  piVar1 = &DAT_004cad70 + param_1;
  if (*piVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_004cad58);
    if (*piVar1 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_004cabc0 + param_1 * 0x18));
      *piVar1 = *piVar1 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_004cad58);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_004cabc0 + param_1 * 0x18));
  return;
}

