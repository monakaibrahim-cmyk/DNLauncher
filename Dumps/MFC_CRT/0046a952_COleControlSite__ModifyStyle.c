// Address: 0x0046a952
// Name: COleControlSite::ModifyStyle
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::ModifyStyle(unsigned long,unsigned long,unsigned
   int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleControlSite::ModifyStyle(COleControlSite *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
  *(ulong *)(this + 0x6c) = (~param_1 & *(uint *)(this + 0x6c) | param_2) & *(uint *)(this + 0x68);
  if (((param_1 & 0x8000000) != 0) || ((param_2 & 0x8000000) != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x74))(this,0xfffffdfe,0xb,~param_2 & 0x8000000);
    if (iVar1 != 0) {
      param_1 = param_1 & 0xf7ffffff;
      param_2 = param_2 & 0xf7ffffff;
    }
  }
  if (((param_1 & 0x800000) != 0) || ((param_2 & 0x800000) != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x74))(this,0xfffffe08,2,param_2 & 0x800000);
    if (iVar1 != 0) {
      param_1 = param_1 & 0xff7fffff;
      param_2 = param_2 & 0xff7fffff;
    }
  }
  if (*(HWND__ **)(this + 0x24) == (HWND__ *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = CWnd::ModifyStyle(*(HWND__ **)(this + 0x24),param_1,param_2,param_3);
  }
  return iVar1;
}

