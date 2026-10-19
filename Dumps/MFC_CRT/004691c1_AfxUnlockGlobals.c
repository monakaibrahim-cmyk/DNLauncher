// Address: 0x004691c1
// Name: AfxUnlockGlobals
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxUnlockGlobals(int)
   
   Library: Visual Studio 2005 Release */

void AfxUnlockGlobals(int param_1)

{
  if (0x10 < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_004cabc0 + param_1 * 0x18));
  return;
}

