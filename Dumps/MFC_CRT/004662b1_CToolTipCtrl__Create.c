// Address: 0x004662b1
// Name: CToolTipCtrl::Create
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CToolTipCtrl::Create(class CWnd *,unsigned long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CToolTipCtrl::Create(CToolTipCtrl *this,CWnd *param_1,ulong param_2)

{
  HWND__ *pHVar1;
  int iVar2;
  
  AfxEndDeferRegisterClass(0x1000);
  pHVar1 = (HWND__ *)0x0;
  if (param_1 != (CWnd *)0x0) {
    pHVar1 = *(HWND__ **)(param_1 + 0x20);
  }
  iVar2 = CWnd::CreateEx((CWnd *)this,0,L"tooltips_class32",(wchar_t *)0x0,param_2 | 0x80000000,
                         -0x80000000,-0x80000000,-0x80000000,-0x80000000,pHVar1,(HMENU__ *)0x0,
                         (void *)0x0);
  if (iVar2 != 0) {
    CWnd::SetOwner((CWnd *)this,param_1);
  }
  return iVar2;
}

