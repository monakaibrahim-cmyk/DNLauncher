// Address: 0x00456f72
// Name: CWnd::OnHelpInfo
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CWnd::OnHelpInfo(struct tagHELPINFO *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CWnd::OnHelpInfo(CWnd *this,tagHELPINFO *param_1)

{
  SHORT SVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = GetExStyle(this);
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_0041c6c0(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageW(*(HWND *)(iVar3 + 0x20),0x111,0xe146,0);
    return 1;
  }
  lVar4 = Default(this);
  return (uint)(lVar4 != 0);
}

