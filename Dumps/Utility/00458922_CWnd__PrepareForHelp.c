// Address: 0x00458922
// Name: CWnd::PrepareForHelp
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::PrepareForHelp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::PrepareForHelp(CWnd *this)

{
  int iVar1;
  CWnd *pCVar2;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x120))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x170))();
  }
  SendMessageW(*(HWND *)(this + 0x20),0x1f,0,0);
  SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x1f,0,0,1,1);
  pCVar2 = GetTopLevelParent(this);
  if (pCVar2 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  SendMessageW(*(HWND *)(pCVar2 + 0x20),0x1f,0,0);
  SendMessageToDescendants(*(HWND__ **)(pCVar2 + 0x20),0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageW(hWnd,0x1f,0,0);
  }
  return;
}

