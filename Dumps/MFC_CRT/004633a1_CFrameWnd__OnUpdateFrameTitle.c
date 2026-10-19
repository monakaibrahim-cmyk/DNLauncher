// Address: 0x004633a1
// Name: CFrameWnd::OnUpdateFrameTitle
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
  ulong uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((short)uVar1 < 0) {
    if ((*(int *)(this + 0x80) != 0) &&
       (iVar2 = (**(code **)(**(int **)(this + 0x80) + 0x68))(), iVar2 != 0)) {
      return;
    }
    iVar2 = (**(code **)(*(int *)this + 0x13c))();
    if ((param_1 == 0) || (iVar2 == 0)) {
      pwVar3 = (wchar_t *)0x0;
    }
    else {
      pwVar3 = *(wchar_t **)(iVar2 + 0x20);
    }
    UpdateFrameTitleForDocument(this,pwVar3);
  }
  return;
}

