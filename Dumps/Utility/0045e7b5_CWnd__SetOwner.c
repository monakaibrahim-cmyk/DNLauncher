// Address: 0x0045e7b5
// Name: CWnd::SetOwner
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::SetOwner(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::SetOwner(CWnd *this,CWnd *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (CWnd *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

