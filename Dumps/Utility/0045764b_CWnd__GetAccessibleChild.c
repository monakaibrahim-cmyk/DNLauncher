// Address: 0x0045764b
// Name: CWnd::GetAccessibleChild
// Category: Utility


/* Library Function - Single Match
    public: long __thiscall CWnd::GetAccessibleChild(struct tagVARIANT,struct IDispatch * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::GetAccessibleChild(CWnd *this,tagVARIANT param_1,IDispatch **param_2)

{
  long lVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  HRESULT HVar4;
  int iVar5;
  
  if (param_2 == (IDispatch **)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = (IDispatch *)0x0;
    iVar5 = param_1.n1._8_4_ + -1;
    if (iVar5 < 0) {
      lVar1 = -0x7ff8ffa9;
    }
    else {
      pHVar2 = GetWindow(*(HWND *)(this + 0x20),5);
      pCVar3 = FromHandle(pHVar2);
      if (pCVar3 != (CWnd *)0x0) {
        do {
          if (iVar5 == 0) break;
          pHVar2 = GetWindow(*(HWND *)(pCVar3 + 0x20),2);
          pCVar3 = FromHandle(pHVar2);
          iVar5 = iVar5 + -1;
        } while (pCVar3 != (CWnd *)0x0);
        if (pCVar3 != (CWnd *)0x0) {
          HVar4 = AccessibleObjectFromWindow
                            (*(HWND *)(pCVar3 + 0x20),0,(IID *)&riid_004ab71c,param_2);
          return HVar4;
        }
      }
      lVar1 = 1;
    }
  }
  return lVar1;
}

