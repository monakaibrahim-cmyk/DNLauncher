// Address: 0x00460e2a
// Name: GetIconWndClass
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: char const * __thiscall CFrameWnd::GetIconWndClass(unsigned long,unsigned int)
    protected: wchar_t const * __thiscall CFrameWnd::GetIconWndClass(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

_AFX_THREAD_STATE * __thiscall GetIconWndClass(void *this,undefined4 param_1,ushort param_2)

{
  AFX_MODULE_STATE *pAVar1;
  HICON pHVar2;
  BOOL BVar3;
  _AFX_THREAD_STATE *p_Var4;
  undefined1 local_5c [32];
  undefined4 local_3c;
  LPCWSTR local_34;
  tagWNDCLASSW local_2c;
  
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadIconW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)(uint)param_2);
  if (pHVar2 != (HICON)0x0) {
    _memset(local_5c,0,0x30);
    local_3c = param_1;
    (**(code **)(*(int *)this + 100))(local_5c);
    if (local_34 != (LPCWSTR)0x0) {
      pAVar1 = AfxGetModuleState();
      BVar3 = FID_conflict_AfxCtxGetClassInfoW(*(HINSTANCE *)(pAVar1 + 8),local_34,&local_2c);
      if ((BVar3 != 0) && (local_2c.hIcon != pHVar2)) {
        p_Var4 = AfxRegisterWndClass(local_2c.style,local_2c.hCursor,local_2c.hbrBackground,pHVar2);
        return p_Var4;
      }
    }
  }
  return (_AFX_THREAD_STATE *)0x0;
}

