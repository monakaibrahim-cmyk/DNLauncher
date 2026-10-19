// Address: 0x004618a3
// Name: CFrameWnd::GetControlBar
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CControlBar * __thiscall CFrameWnd::GetControlBar(unsigned int)
   
   Library: Visual Studio 2005 Release */

CControlBar * __thiscall CFrameWnd::GetControlBar(CFrameWnd *this,uint param_1)

{
  CControlBar *pCVar1;
  void **ppvVar2;
  uint uVar3;
  __POSITION *local_8;
  
  if ((param_1 != 0) && (local_8 = *(__POSITION **)(this + 0x88), local_8 != (__POSITION *)0x0)) {
    do {
      ppvVar2 = CPtrList::GetNext((CPtrList *)(this + 0x84),&local_8);
      pCVar1 = *ppvVar2;
      uVar3 = GetDlgCtrlID(*(HWND *)(pCVar1 + 0x20));
      if ((uVar3 & 0xffff) == param_1) {
        return pCVar1;
      }
    } while (local_8 != (__POSITION *)0x0);
  }
  return (CControlBar *)0x0;
}

