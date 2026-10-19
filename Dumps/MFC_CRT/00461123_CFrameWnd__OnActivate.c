// Address: 0x00461123
// Name: CFrameWnd::OnActivate
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnActivate(unsigned int,class CWnd *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  CFrameWnd *pCVar3;
  CFrameWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  int *piVar7;
  
  CWnd::Default((CWnd *)this);
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  pCVar3 = this;
  if ((uVar2 & 0x40000000) == 0) {
    pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  bVar1 = false;
  if (pCVar3 != (CFrameWnd *)0x0) {
    if (param_1 != 0) {
      param_2 = (CWnd *)this;
    }
    if (param_2 != (CWnd *)0x0) {
      if ((pCVar3 == (CFrameWnd *)param_2) ||
         ((pCVar4 = CWnd::GetTopLevelFrame(param_2), pCVar3 == pCVar4 &&
          (LVar5 = SendMessageW(*(HWND *)(param_2 + 0x20),0x36d,0x40,0), LVar5 != 0)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    *(uint *)(pCVar3 + 0x3c) = *(uint *)(pCVar3 + 0x3c) & 0xffffffdf;
    if (bVar1) {
      *(uint *)(pCVar3 + 0x3c) = *(uint *)(pCVar3 + 0x3c) | 0x20;
    }
    NotifyFloatingWindows(this,(uint)!bVar1 * 4 + 4);
    piVar7 = *(int **)(this + 0xb0);
    if (piVar7 == (int *)0x0) {
      iVar6 = (**(code **)(*(int *)this + 0x140))();
      piVar7 = *(int **)(iVar6 + 0xb0);
      if (piVar7 == (int *)0x0) {
        return;
      }
    }
    if ((param_1 != 0) && (param_3 == 0)) {
      (**(code **)(*piVar7 + 0x160))(1,piVar7,piVar7);
    }
    (**(code **)(*piVar7 + 0x164))(param_1,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

