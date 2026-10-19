// Address: 0x004576ba
// Name: CWnd::GetAccessibilityHitTest
// Category: Utility


/* Library Function - Single Match
    public: long __thiscall CWnd::GetAccessibilityHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
CWnd::GetAccessibilityHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  POINT pt;
  long lVar2;
  void **ppvVar3;
  BOOL BVar4;
  long lVar5;
  tagPOINT local_c;
  
  lVar2 = param_2;
  lVar5 = param_1;
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(int *)(this + 0x4c) != 0) {
    local_c.x = param_1;
    local_c.y = param_2;
    ::ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    param_2 = GetWindowedChildCount(this);
    if (*(int *)(this + 0x4c) != 0) {
      param_1 = *(int *)(*(int *)(this + 0x4c) + 0x44);
      while (param_1 != 0) {
        ppvVar3 = CPtrList::GetNext((CPtrList *)(*(int *)(this + 0x4c) + 0x40),
                                    (__POSITION **)&param_1);
        iVar1 = *(int *)((int)*ppvVar3 + 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x74) != 0)) {
          param_2 = param_2 + 1;
          pt.y = local_c.y;
          pt.x = local_c.x;
          BVar4 = PtInRect((RECT *)(iVar1 + 0x30),pt);
          if (BVar4 != 0) {
            (param_3->n1).n2.vt = 3;
            *(long *)((int)&param_3->n1 + 8) = param_2;
            return 0;
          }
        }
      }
    }
  }
  lVar5 = accHitTest(this,lVar5,lVar2,param_3);
  return lVar5;
}

