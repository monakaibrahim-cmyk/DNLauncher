// Address: 0x004705c6
// Name: COleControlContainer::GetDlgItem
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::GetDlgItem(int,struct HWND__ * *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::GetDlgItem(COleControlContainer *this,int param_1,HWND__ **param_2)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = (HWND)0x0;
  if (*(int *)(this + 0x20) != 0) {
    pHVar1 = *(HWND *)(*(int *)(this + 0x20) + 0x20);
  }
  pHVar1 = ::GetDlgItem(pHVar1,param_1);
  if (pHVar1 == (HWND)0x0) {
    iVar2 = (**(code **)(*(int *)this + 0x54))(param_1);
    if (iVar2 != 0) {
      pHVar1 = *(HWND *)(iVar2 + 0x24);
    }
  }
  *param_2 = pHVar1;
  return;
}

