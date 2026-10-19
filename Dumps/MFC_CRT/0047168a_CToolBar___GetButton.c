// Address: 0x0047168a
// Name: CToolBar::_GetButton
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CToolBar::_GetButton(int,struct _TBBUTTON *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CToolBar::_GetButton(CToolBar *this,int param_1,_TBBUTTON *param_2)

{
  (**(code **)(*(int *)this + 0x110))(0x417,param_1,param_2);
  param_2[8] = (_TBBUTTON)((byte)param_2[8] ^ 4);
  return;
}

