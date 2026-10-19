// Address: 0x00459367
// Name: CWnd::OnChildNotify
// Category: Utility


/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnChildNotify(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  LRESULT LVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) != 0) {
    LVar1 = SendMessageW(*(HWND *)(this + 0x20),param_1 + 0x2000,param_2,param_3);
    if ((6 < param_1 - 0x132) || (iVar2 = 0, LVar1 != 0)) {
      if (param_4 != (long *)0x0) {
        *param_4 = LVar1;
      }
      iVar2 = 1;
    }
    return iVar2;
  }
  iVar2 = ReflectChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar2;
}

