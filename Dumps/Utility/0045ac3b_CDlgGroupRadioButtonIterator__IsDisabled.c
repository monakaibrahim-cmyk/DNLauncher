// Address: 0x0045ac3b
// Name: CDlgGroupRadioButtonIterator::IsDisabled
// Category: Utility


/* Library Function - Single Match
    public: static bool __cdecl CDlgGroupRadioButtonIterator::IsDisabled(struct COleControlSiteOrWnd
   const *)
   
   Library: Visual Studio 2005 Release */

bool __cdecl CDlgGroupRadioButtonIterator::IsDisabled(COleControlSiteOrWnd *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(HWND *)param_1 != (HWND)0x0) {
    uVar1 = SendMessageW(*(HWND *)param_1,0x87,0,0);
    if ((uVar1 & 0x100) != 0) {
      return true;
    }
  }
  uVar2 = COleControlSiteOrWnd::GetStyle(param_1);
  if (((uVar2 & 0x10000000) != 0) && ((uVar2 & 0x8000000) == 0)) {
    return false;
  }
  return true;
}

