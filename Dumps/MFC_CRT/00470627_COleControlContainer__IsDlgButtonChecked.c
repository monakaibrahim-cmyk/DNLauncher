// Address: 0x00470627
// Name: COleControlContainer::IsDlgButtonChecked
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned int __thiscall COleControlContainer::IsDlgButtonChecked(int)const 
   
   Library: Visual Studio 2008 Release */

uint __thiscall COleControlContainer::IsDlgButtonChecked(COleControlContainer *this,int param_1)

{
  CWnd *this_00;
  
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x74))(param_1);
  if (this_00 == (CWnd *)0x0) {
    param_1 = 0;
  }
  else if (*(int *)(this_00 + 0x50) == 0) {
    param_1 = SendMessageW(*(HWND *)(this_00 + 0x20),0xf0,0,0);
  }
  else {
    CWnd::GetProperty(this_00,0,3,&param_1);
    if (param_1 == 0xffff) {
      param_1 = 1;
    }
  }
  return param_1;
}

