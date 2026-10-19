// Address: 0x0046a9ec
// Name: COleControlSite::ModifyStyleEx
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::ModifyStyleEx(unsigned long,unsigned
   long,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleControlSite::ModifyStyleEx(COleControlSite *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
  if (((param_1 & 0x200) != 0) || ((param_2 & 0x200) != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x74))(this,0xfffffdf8,2,param_2 & 0x200);
    if (iVar1 != 0) {
      param_1 = param_1 & 0xfffffdff;
      param_2 = param_2 & 0xfffffdff;
    }
  }
  if (*(HWND__ **)(this + 0x24) == (HWND__ *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = CWnd::ModifyStyleEx(*(HWND__ **)(this + 0x24),param_1,param_2,param_3);
  }
  return iVar1;
}

