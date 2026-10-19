// Address: 0x004548f1
// Name: _AfxModifyStyle
// Category: Utility


/* Library Function - Single Match
    int __stdcall _AfxModifyStyle(struct HWND__ *,int,unsigned long,unsigned long,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int _AfxModifyStyle(HWND__ *param_1,int param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint dwNewLong;
  
  uVar1 = GetWindowLongW(param_1,param_2);
  dwNewLong = ~param_3 & uVar1 | param_4;
  if (uVar1 == dwNewLong) {
    iVar2 = 0;
  }
  else {
    SetWindowLongW(param_1,param_2,dwNewLong);
    if (param_5 != 0) {
      SetWindowPos(param_1,(HWND)0x0,0,0,0,0,param_5 | 0x17);
    }
    iVar2 = 1;
  }
  return iVar2;
}

