// Address: 0x0045775e
// Name: CWnd::SubclassWindow
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::SubclassWindow(struct HWND__ *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CWnd::SubclassWindow(CWnd *this,HWND__ *param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  int iVar4;
  
  iVar1 = Attach(this,param_1);
  iVar4 = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x50))();
    piVar2 = (int *)(**(code **)(*(int *)this + 0xf0))();
    LVar3 = SetWindowLongW(param_1,-4,0x4572a2);
    if (*piVar2 == 0) {
      *piVar2 = LVar3;
    }
    iVar4 = 1;
  }
  return iVar4;
}

