// Address: 0x00471dda
// Name: COccManager::SetDefaultButton
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __cdecl COccManager::SetDefaultButton(class CWnd *,int)
   
   Library: Visual Studio 2005 Release */

void __cdecl COccManager::SetDefaultButton(CWnd *param_1,int param_2)

{
  ulong uVar1;
  
  if (*(COleControlSite **)(param_1 + 0x50) != (COleControlSite *)0x0) {
    COleControlSite::SetDefaultButton(*(COleControlSite **)(param_1 + 0x50),param_2);
    return;
  }
  uVar1 = _AfxGetDlgCode(param_1,(tagMSG *)0x0);
  if (((-(uint)(param_2 != 0) & 0x10) + 0x10 & uVar1) != 0) {
    SendMessageW(*(HWND *)(param_1 + 0x20),0xf4,(uint)(param_2 != 0),1);
  }
  return;
}

