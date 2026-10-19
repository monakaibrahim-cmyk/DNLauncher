// Address: 0x00464b05
// Name: CWinApp::DoWaitCursor
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CWinApp::DoWaitCursor(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::DoWaitCursor(CWinApp *this,int param_1)

{
  HCURSOR pHVar1;
  
  if ((((param_1 == 0) || (param_1 == 1)) || (param_1 == -1)) && (hCursor_004cab64 != (HCURSOR)0x0))
  {
    AfxLockGlobals(2);
    *(int *)(this + 0x80) = *(int *)(this + 0x80) + param_1;
    if (*(int *)(this + 0x80) < 1) {
      *(undefined4 *)(this + 0x80) = 0;
      SetCursor(*(HCURSOR *)(this + 0x84));
    }
    else {
      pHVar1 = SetCursor(hCursor_004cab64);
      if ((0 < param_1) && (*(int *)(this + 0x80) == 1)) {
        *(HCURSOR *)(this + 0x84) = pHVar1;
      }
    }
    AfxUnlockGlobals(2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

