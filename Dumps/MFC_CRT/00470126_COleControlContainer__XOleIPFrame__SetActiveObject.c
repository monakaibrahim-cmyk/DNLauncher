// Address: 0x00470126
// Name: COleControlContainer::XOleIPFrame::SetActiveObject
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlContainer::XOleIPFrame::SetActiveObject(struct
   IOleInPlaceActiveObject *,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

long COleControlContainer::XOleIPFrame::SetActiveObject
               (IOleInPlaceActiveObject *param_1,wchar_t *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + -0x10) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + -0x10) + 0x58);
    if (param_2 != (wchar_t *)0x0) {
      (**(code **)(*(int *)param_2 + 4))(param_2);
    }
    *(wchar_t **)(*(int *)(param_1 + -0x10) + 0x58) = param_2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return 0;
}

