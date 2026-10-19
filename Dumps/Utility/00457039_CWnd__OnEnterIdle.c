// Address: 0x00457039
// Name: CWnd::OnEnterIdle
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnEnterIdle(unsigned int,class CWnd *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CWnd::OnEnterIdle(CWnd *this,uint param_1,CWnd *param_2)

{
  BOOL BVar1;
  MSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageW(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageW(&local_20);
  }
  Default(this);
  return;
}

