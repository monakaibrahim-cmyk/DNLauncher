// Address: 0x00456b1e
// Name: CWnd::OnDestroy
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDestroy(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CWnd::OnDestroy(CWnd *this)

{
  int *piVar1;
  
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  piVar1 = *(int **)(this + 0x2c);
  *(undefined4 *)(this + 0x4c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
  }
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  Default(this);
  return;
}

