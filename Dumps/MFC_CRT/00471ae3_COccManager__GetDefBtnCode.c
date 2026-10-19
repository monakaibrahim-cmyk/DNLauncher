// Address: 0x00471ae3
// Name: COccManager::GetDefBtnCode
// Category: MFC_CRT


/* Library Function - Single Match
    public: static unsigned long __cdecl COccManager::GetDefBtnCode(class CWnd *)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl COccManager::GetDefBtnCode(CWnd *param_1)

{
  ulong uVar1;
  
  if (param_1 == (CWnd *)0x0) {
    return 0;
  }
  if (*(COleControlSite **)(param_1 + 0x50) != (COleControlSite *)0x0) {
    uVar1 = COleControlSite::GetDefBtnCode(*(COleControlSite **)(param_1 + 0x50));
    return uVar1;
  }
  uVar1 = _AfxGetDlgCode(param_1,(tagMSG *)0x0);
  return uVar1 & 0x30;
}

