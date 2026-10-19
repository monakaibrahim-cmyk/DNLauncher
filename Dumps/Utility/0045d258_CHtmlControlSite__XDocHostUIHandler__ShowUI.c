// Address: 0x0045d258
// Name: CHtmlControlSite::XDocHostUIHandler::ShowUI
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall CHtmlControlSite::XDocHostUIHandler::ShowUI(unsigned long,struct
   IOleInPlaceActiveObject *,struct IOleCommandTarget *,struct IOleInPlaceFrame *,struct
   IOleInPlaceUIWindow *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

long CHtmlControlSite::XDocHostUIHandler::ShowUI
               (ulong param_1,IOleInPlaceActiveObject *param_2,IOleCommandTarget *param_3,
               IOleInPlaceFrame *param_4,IOleInPlaceUIWindow *param_5)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 - 0xcc) + 0x20);
  if (piVar1 == (int *)0x0) {
    lVar2 = -0x7fffbffb;
  }
  else {
    lVar2 = (**(code **)(*piVar1 + 0x194))(param_2,param_3,param_4,param_5);
  }
  return lVar2;
}

