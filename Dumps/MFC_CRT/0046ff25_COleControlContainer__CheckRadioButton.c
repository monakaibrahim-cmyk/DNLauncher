// Address: 0x0046ff25
// Name: COleControlContainer::CheckRadioButton
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::CheckRadioButton(int,int,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall
COleControlContainer::CheckRadioButton
          (COleControlContainer *this,int param_1,int param_2,int param_3)

{
  for (; param_1 <= param_2; param_1 = param_1 + 1) {
    (**(code **)(*(int *)this + 0x68))(param_1,param_1 == param_3);
  }
  return;
}

