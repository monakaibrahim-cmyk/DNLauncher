// Address: 0x0046aaf6
// Name: COleControlSite::ShowWindow
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::ShowWindow(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlSite::ShowWindow(COleControlSite *this,int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = IsWindowVisible(*(HWND *)(this + 0x24));
  if (param_1 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    if (param_1 != 1) {
      if (param_1 < 4) {
        return BVar1;
      }
      if (5 < param_1) {
        return BVar1;
      }
    }
    uVar2 = 0xffffffff;
  }
  (**(code **)(*(int *)this + 0x5c))(uVar2,0);
  return BVar1;
}

