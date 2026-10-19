// Address: 0x0045a523
// Name: CDataExchange::PrepareCtrl
// Category: Utility


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CDataExchange::PrepareCtrl(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

HWND__ * __thiscall CDataExchange::PrepareCtrl(CDataExchange *this,int param_1)

{
  int iVar1;
  COleControlSite *pCVar2;
  
  iVar1 = param_1;
  CWnd::GetDlgItem(*(CWnd **)(this + 4),param_1,(HWND__ **)&param_1);
  if (param_1 == 0) {
    pCVar2 = CWnd::GetOleControlSite(*(CWnd **)(this + 4),iVar1);
    if (pCVar2 == (COleControlSite *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529ce();
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 8) = iVar1;
  return (HWND__ *)param_1;
}

