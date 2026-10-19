// Address: 0x0046be17
// Name: COleControlSite::SetFocus
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall COleControlSite::SetFocus(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall COleControlSite::SetFocus(COleControlSite *this,tagMSG *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  
  if (((*(ushort *)(this + 0x70) & 0x4000) == 0) || (*(int *)(this + 0x74) != 0)) {
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (((*(ushort *)(this + 0x70) & 0x400) == 0) &&
       (iVar3 = (**(code **)(*(int *)this + 0x5c))(0xfffffffc,param_1), -1 < iVar3)) {
      *(COleControlSite **)(*(int *)(this + 0x20) + 0x70) = this;
    }
  }
  else {
    pHVar1 = ::SetFocus(*(HWND *)(this + 0x24));
    pCVar2 = CWnd::FromHandle(pHVar1);
  }
  return pCVar2;
}

