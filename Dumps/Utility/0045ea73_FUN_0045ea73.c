// Address: 0x0045ea73
// Name: FUN_0045ea73
// Category: Utility


void __thiscall
FUN_0045ea73(void *this,int param_1,int param_2,uint *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  CScrollView::GetScrollBarSizes(this,(CSize *)&local_c);
  iVar1 = *(int *)((int)this + 0x6c);
  *param_4 = *(int *)((int)this + 0x68) - param_1;
  param_4[1] = iVar1 - param_2;
  piVar2 = (int *)CScrollView::GetDeviceScrollPosition(this);
  *param_5 = *piVar2;
  param_5[1] = piVar2[1];
  uVar3 = (uint)(0 < *param_4);
  if (uVar3 == 0) {
    *param_5 = 0;
  }
  else if (param_6 != 0) {
    param_4[1] = param_4[1] + local_8;
  }
  uVar4 = (uint)(0 < param_4[1]);
  if (uVar4 == 0) {
    param_5[1] = 0;
  }
  else {
    if (param_6 != 0) {
      *param_4 = *param_4 + local_c;
    }
    if (uVar3 == 0) {
      if (*param_4 < 1) goto LAB_0045eb0e;
      uVar3 = 1;
      param_4[1] = param_4[1] + local_8;
    }
  }
  iVar1 = *param_4;
  if ((0 < iVar1) && (iVar1 <= *param_5)) {
    *param_5 = iVar1;
  }
LAB_0045eb0e:
  iVar1 = param_4[1];
  if ((0 < iVar1) && (iVar1 <= param_5[1])) {
    param_5[1] = iVar1;
  }
  *param_3 = uVar3;
  param_3[1] = uVar4;
  return;
}

