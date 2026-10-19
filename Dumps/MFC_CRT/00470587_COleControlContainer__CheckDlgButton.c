// Address: 0x00470587
// Name: COleControlContainer::CheckDlgButton
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::CheckDlgButton(int,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::CheckDlgButton(COleControlContainer *this,int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x74))(param_1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x50) == 0) {
      SendMessageW(*(HWND *)(iVar1 + 0x20),0xf1,param_1,0);
    }
    else {
      (**(code **)(**(int **)(iVar1 + 0x50) + 0x74))(*(int **)(iVar1 + 0x50),0,3,param_1);
    }
  }
  return;
}

