// Address: 0x0046a65c
// Name: COleControlSite::DetachWindow
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleControlSite::DetachWindow(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::DetachWindow(COleControlSite *this)

{
  int *piVar1;
  BOOL BVar2;
  
  piVar1 = *(int **)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[8] != 0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0xf0))();
      BVar2 = IsWindow(*(HWND *)(*(int *)(this + 0x28) + 0x20));
      if ((BVar2 != 0) && (*piVar1 != 0)) {
        CWnd::UnsubclassWindow(*(CWnd **)(this + 0x28));
      }
      CWnd::Detach(*(CWnd **)(this + 0x28));
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x50) = 0;
  }
  return;
}

