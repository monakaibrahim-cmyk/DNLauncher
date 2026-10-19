// Address: 0x004755ef
// Name: COleBusyDialog::COleBusyDialog
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall COleBusyDialog::COleBusyDialog(struct HTASK__ *,int,unsigned long,class CWnd
   *)
   
   Library: Visual Studio 2005 Release */

COleBusyDialog * __thiscall
COleBusyDialog::COleBusyDialog
          (COleBusyDialog *this,HTASK__ *param_1,int param_2,ulong param_3,CWnd *param_4)

{
  COleDialog::COleDialog((COleDialog *)this,param_4);
  *(undefined ***)this = vftable;
  _memset(this + 0x78,0,0x2c);
  *(undefined4 *)(this + 0x78) = 0x2c;
  *(ulong *)(this + 0x7c) = param_3;
  if (param_2 != 0) {
    *(ulong *)(this + 0x7c) = param_3 | 8;
  }
  *(HTASK__ **)(this + 0x9c) = param_1;
  *(code **)(this + 0x88) = AfxOleHookProc;
  return this;
}

