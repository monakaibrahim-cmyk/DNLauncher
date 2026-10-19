// Address: 0x00457d90
// Name: CWnd::OnCompareItem
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CWnd::OnCompareItem(int,struct tagCOMPAREITEMSTRUCT *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CWnd::OnCompareItem(CWnd *this,int param_1,tagCOMPAREITEMSTRUCT *param_2)

{
  int iVar1;
  
  iVar1 = ReflectLastMsg(*(HWND__ **)(param_2 + 8),(long *)&param_2);
  if (iVar1 == 0) {
    param_2 = (tagCOMPAREITEMSTRUCT *)Default(this);
  }
  return (int)param_2;
}

