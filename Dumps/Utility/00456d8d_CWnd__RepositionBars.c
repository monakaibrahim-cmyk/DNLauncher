// Address: 0x00456d8d
// Name: CWnd::RepositionBars
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::RepositionBars(unsigned int,unsigned int,unsigned int,unsigned
   int,struct tagRECT *,struct tagRECT const *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CWnd::RepositionBars
          (CWnd *this,uint param_1,uint param_2,uint param_3,uint param_4,tagRECT *param_5,
          tagRECT *param_6,int param_7)

{
  HWND__ *pHVar1;
  uint uVar2;
  HWND hWnd;
  uint uVar3;
  CWnd *pCVar4;
  HDWP local_28;
  tagRECT local_24;
  LONG local_14;
  LONG local_10;
  int local_c;
  HWND__ *local_8;
  
  local_8 = (HWND__ *)0x0;
  local_c = param_7;
  local_10 = 0;
  local_14 = 0;
  if (param_6 == (tagRECT *)0x0) {
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
  }
  else {
    local_24.left = param_6->left;
    local_24.top = param_6->top;
    local_24.right = param_6->right;
    local_24.bottom = param_6->bottom;
  }
  uVar2 = param_4 & 0xffff7fff;
  if (uVar2 == 1) {
    local_28 = (HDWP)0x0;
  }
  else {
    local_28 = BeginDeferWindowPos(8);
  }
  for (hWnd = GetTopWindow(*(HWND *)(this + 0x20)); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    uVar3 = ::GetDlgCtrlID(hWnd);
    uVar3 = uVar3 & 0xffff;
    pCVar4 = FromHandlePermanent(hWnd);
    pHVar1 = hWnd;
    if ((((uVar3 != param_3) && (pHVar1 = local_8, param_1 <= uVar3)) && (uVar3 <= param_2)) &&
       (pCVar4 != (CWnd *)0x0)) {
      SendMessageW(hWnd,0x361,0,(LPARAM)&local_28);
      pHVar1 = local_8;
    }
    local_8 = pHVar1;
  }
  if (uVar2 == 1) {
    if (param_7 == 0) {
      param_5->right = local_14;
      param_5->top = 0;
      param_5->left = 0;
      param_5->bottom = local_10;
    }
    else {
      CopyRect(param_5,&local_24);
    }
  }
  else {
    if ((param_3 != 0) && (local_8 != (HWND__ *)0x0)) {
      pCVar4 = FromHandle(local_8);
      if (uVar2 == 2) {
        local_24.left = local_24.left + param_5->left;
        local_24.top = local_24.top + param_5->top;
        local_24.right = local_24.right - param_5->right;
        local_24.bottom = local_24.bottom - param_5->bottom;
      }
      if ((param_4 & 0x8000) == 0) {
        (**(code **)(*(int *)pCVar4 + 0x68))(&local_24,0);
        AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)&local_28,local_8,&local_24);
      }
    }
    if (local_28 != (HDWP)0x0) {
      EndDeferWindowPos(local_28);
    }
  }
  return;
}

