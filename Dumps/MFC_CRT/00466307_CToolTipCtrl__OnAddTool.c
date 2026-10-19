// Address: 0x00466307
// Name: CToolTipCtrl::OnAddTool
// Category: MFC_CRT


/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnAddTool(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall CToolTipCtrl::OnAddTool(CToolTipCtrl *this,uint param_1,long param_2)

{
  CToolTipCtrl *this_00;
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_38 [8];
  int local_18;
  wchar_t *local_14;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)param_2;
  puVar5 = local_38;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  if (((local_18 == 0) && (local_14 != (wchar_t *)0xffffffff)) && (local_14 != (wchar_t *)0x0)) {
    this_00 = this + 0x54;
    bVar1 = Lookup(this_00,local_14,&local_8);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      puVar2 = CMapStringToPtr__operator__(this_00,local_14);
      *puVar2 = 0;
    }
    param_2 = 0;
    LookupKey(this_00,local_14,&param_2);
    local_14 = (wchar_t *)param_2;
  }
  lVar3 = (**(code **)(*(int *)this + 0x110))(0x432,param_1,local_38);
  return lVar3;
}

