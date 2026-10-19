// Address: 0x00454b88
// Name: AfxRepositionWindow
// Category: Utility


/* Library Function - Single Match
    void __stdcall AfxRepositionWindow(struct AFX_SIZEPARENTPARAMS *,struct HWND__ *,struct tagRECT
   const *)
   
   Library: Visual Studio 2005 Release */

void AfxRepositionWindow(AFX_SIZEPARENTPARAMS *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int Y;
  int X;
  HWND hWnd;
  BOOL BVar1;
  HDWP pvVar2;
  int cy;
  int cx;
  undefined1 local_14 [16];
  
  hWnd = GetParent(param_2);
  if ((param_1 == (AFX_SIZEPARENTPARAMS *)0x0) || (*(int *)param_1 != 0)) {
    GetWindowRect(param_2,(LPRECT)local_14);
    ScreenToClient(hWnd,(LPPOINT)local_14);
    ScreenToClient(hWnd,(LPPOINT)(local_14 + 8));
    BVar1 = EqualRect((RECT *)local_14,param_3);
    if (BVar1 == 0) {
      Y = param_3->top;
      X = param_3->left;
      cy = param_3->bottom - Y;
      cx = param_3->right - X;
      if (param_1 == (AFX_SIZEPARENTPARAMS *)0x0) {
        SetWindowPos(param_2,(HWND)0x0,X,Y,cx,cy,0x14);
      }
      else {
        pvVar2 = DeferWindowPos(*(HDWP *)param_1,param_2,(HWND)0x0,X,Y,cx,cy,0x14);
        *(HDWP *)param_1 = pvVar2;
      }
    }
  }
  return;
}

