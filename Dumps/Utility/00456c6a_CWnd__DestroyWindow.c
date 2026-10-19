// Address: 0x00456c6a
// Name: CWnd::DestroyWindow
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CWnd::DestroyWindow(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  CHandleMap *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x20) == 0) {
    if (*(int *)(this + 0x50) == 0) {
      return 0;
    }
  }
  else {
    pCVar1 = afxMapHWND(0);
    if (pCVar1 == (CHandleMap *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),*(void **)(this + 0x20));
  }
  if ((*(HWND *)(this + 0x20) != (HWND)0x0) || (*(int *)(this + 0x50) != 0)) {
    if (*(int *)(this + 0x50) == 0) {
      iVar2 = ::DestroyWindow(*(HWND *)(this + 0x20));
    }
    else {
      iVar2 = (**(code **)(**(int **)(this + 0x50) + 0x58))();
    }
  }
  return iVar2;
}

