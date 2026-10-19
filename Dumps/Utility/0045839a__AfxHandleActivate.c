// Address: 0x0045839a
// Name: _AfxHandleActivate
// Category: Utility


/* Library Function - Single Match
    void __stdcall _AfxHandleActivate(class CWnd *,unsigned int,class CWnd *)
   
   Library: Visual Studio 2005 Release */

void _AfxHandleActivate(CWnd *param_1,uint param_2,CWnd *param_3)

{
  ulong uVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = CWnd::GetExStyle(param_1);
  if ((((uVar1 & 0x40000000) == 0) &&
      (pCVar2 = CWnd::GetTopLevelParent(param_1), pCVar2 != (CWnd *)0x0)) &&
     ((param_3 == (CWnd *)0x0 ||
      ((BVar3 = IsWindow(*(HWND *)(param_3 + 0x20)), BVar3 == 0 ||
       (pCVar4 = CWnd::GetTopLevelParent(param_3), pCVar2 != pCVar4)))))) {
    local_c = *(undefined4 *)(param_1 + 0x20);
    if (param_3 == (CWnd *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(param_3 + 0x20);
    }
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x36e,param_2,(LPARAM)&local_c);
  }
  return;
}

