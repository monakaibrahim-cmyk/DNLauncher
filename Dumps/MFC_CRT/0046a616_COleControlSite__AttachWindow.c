// Address: 0x0046a616
// Name: COleControlSite::AttachWindow
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleControlSite::AttachWindow(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::AttachWindow(COleControlSite *this)

{
  int *piVar1;
  int iVar2;
  COleControlSite *local_8;
  
  piVar1 = *(int **)(this + 0x54);
  if (piVar1 == (int *)0x0) {
    local_8 = this;
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  local_8 = (COleControlSite *)0x0;
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_8);
  if ((-1 < iVar2) && (*(COleControlSite **)(this + 0x24) != local_8)) {
    *(COleControlSite **)(this + 0x24) = local_8;
    if (*(CWnd **)(this + 0x28) != (CWnd *)0x0) {
      CWnd::Attach(*(CWnd **)(this + 0x28),(HWND__ *)local_8);
      *(COleControlSite **)(*(int *)(this + 0x28) + 0x50) = this;
    }
  }
  return;
}

