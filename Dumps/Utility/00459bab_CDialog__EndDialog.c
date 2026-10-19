// Address: 0x00459bab
// Name: CDialog::EndDialog
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CDialog::EndDialog(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDialog::EndDialog(CDialog *this,int param_1)

{
  if (((byte)this[0x3c] & 0x18) != 0) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  ::EndDialog(*(HWND *)(this + 0x20),param_1);
  return;
}

