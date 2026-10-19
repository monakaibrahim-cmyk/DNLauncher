// Address: 0x0045abfd
// Name: CWnd::AttachControlSite
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::AttachControlSite(class CWnd *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::AttachControlSite(CWnd *this,CWnd *param_1,uint param_2)

{
  if ((*(int *)(this + 0x50) == 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x9c))(this,param_2);
  }
  return;
}

