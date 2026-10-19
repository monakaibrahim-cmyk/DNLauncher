// Address: 0x00457fdf
// Name: CWnd::OnSysColorChange
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnSysColorChange(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CWnd::OnSysColorChange(CWnd *this)

{
  AFX_MODULE_STATE *pAVar1;
  ulong uVar2;
  
  pAVar1 = AfxGetModuleState();
  if ((*(int *)(pAVar1 + 4) != 0) && (*(CWnd **)(*(int *)(pAVar1 + 4) + 0x20) == this)) {
    AUX_DATA::UpdateSysColors((AUX_DATA *)&DAT_004cab28);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x15,0,0,1,1);
  }
  Default(this);
  return;
}

