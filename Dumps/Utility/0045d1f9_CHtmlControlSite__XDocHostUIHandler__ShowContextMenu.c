// Address: 0x0045d1f9
// Name: CHtmlControlSite::XDocHostUIHandler::ShowContextMenu
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall CHtmlControlSite::XDocHostUIHandler::ShowContextMenu(unsigned
   long,struct tagPOINT *,struct IUnknown *,struct IDispatch *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

long CHtmlControlSite::XDocHostUIHandler::ShowContextMenu
               (ulong param_1,tagPOINT *param_2,IUnknown *param_3,IDispatch *param_4)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 - 0xcc) + 0x20);
  if (piVar1 == (int *)0x0) {
    lVar2 = -0x7fffbffb;
  }
  else {
    lVar2 = (**(code **)(*piVar1 + 0x188))(param_2,param_3,param_4);
  }
  return lVar2;
}

