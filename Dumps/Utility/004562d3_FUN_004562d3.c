// Address: 0x004562d3
// Name: FUN_004562d3
// Category: Utility


long __thiscall
FUN_004562d3(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            long *param_5,long *param_6,long *param_7,long *param_8)

{
  int iVar1;
  tagVARIANT tVar2;
  long lVar3;
  long lVar4;
  void **ppvVar5;
  tagRECT local_1c;
  __POSITION *local_c;
  int local_8;
  
  tVar2.n1.decVal.Hi32 = param_2;
  tVar2.n1._0_4_ = param_1;
  tVar2.n1._8_4_ = param_3;
  tVar2.n1._12_4_ = param_4;
  lVar3 = CWnd::accLocation(this,param_5,param_6,param_7,param_8,tVar2);
  if (lVar3 < 0) {
    (**(code **)(**(int **)((int)this + 0x28) + 0x20))(*(int **)((int)this + 0x28),&local_8);
    lVar4 = CWnd::GetWindowLessChildCount(this);
    if (param_3 <= lVar4 + local_8) {
      local_c = *(__POSITION **)(*(int *)((int)this + 0x4c) + 0x44);
      while (local_c != (__POSITION *)0x0) {
        ppvVar5 = CPtrList::GetNext((CPtrList *)(*(int *)((int)this + 0x4c) + 0x40),&local_c);
        iVar1 = *(int *)((int)*ppvVar5 + 4);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x74) != 0) {
            local_8 = local_8 + 1;
          }
          if (local_8 == param_3) {
            iVar1 = *(int *)((int)*ppvVar5 + 4);
            local_1c.left = *(int *)(iVar1 + 0x30);
            local_1c.top = *(int *)(iVar1 + 0x34);
            local_1c.right = *(int *)(iVar1 + 0x38);
            local_1c.bottom = *(int *)(iVar1 + 0x3c);
            CWnd::ClientToScreen(this,&local_1c);
            *param_5 = local_1c.left;
            *param_6 = local_1c.top;
            *param_7 = local_1c.right - local_1c.left;
            *param_8 = local_1c.bottom - local_1c.top;
            lVar3 = 0;
          }
        }
      }
    }
  }
  return lVar3;
}

