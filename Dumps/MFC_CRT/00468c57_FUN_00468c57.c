// Address: 0x00468c57
// Name: FUN_00468c57
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00468c57(int param_1)

{
  CObject *pCVar1;
  CDC *this;
  BOOL BVar2;
  int iVar3;
  LONG LVar4;
  HDC pHVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined **ppuVar9;
  UINT options;
  UINT c;
  tagMENUITEMINFOW local_bc;
  CDC local_8c [16];
  void *local_7c;
  uint local_74;
  tagRECT local_70;
  undefined1 local_60 [4];
  int local_5c;
  tagRECT local_58;
  undefined4 local_48;
  CDC local_44 [4];
  HDC local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  CObject *local_30;
  int local_2c;
  tagRECT local_28;
  DWORD local_18;
  LPCWSTR local_14;
  BOOL local_10;
  undefined **local_c;
  int local_8;
  
  local_70.left = 0x40;
  local_74 = 0x468c67;
  FUN_004035c0(&local_14,(short *)&PTR_004b1080);
  local_74 = 0;
  this = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_48 = (**(code **)(*(int *)this + 0x1c))();
  _memset(&local_bc,0,0x30);
  local_bc.cbSize = 0x30;
  local_bc.fMask = 0x40;
  local_10 = 0;
  BVar2 = GetMenuItemInfoW(*(HMENU *)(local_2c + 4),*(UINT *)(param_1 + 8),0,&local_bc);
  if (BVar2 != 0) {
    local_bc.dwTypeData = (LPWSTR)FID_conflict_PrepareWrite(&local_14,local_bc.cch);
    local_bc.cch = local_bc.cch + 1;
    local_10 = GetMenuItemInfoW(*(HMENU *)(local_2c + 4),*(UINT *)(param_1 + 8),0,&local_bc);
    FUN_00404990(&local_14,-1);
  }
  local_30 = *(CObject **)(param_1 + 0x2c);
  CopyRect(&local_70,(RECT *)(param_1 + 0x1c));
  pCVar1 = local_30;
  if ((local_30 == (CObject *)0x0) ||
     (iVar3 = CObject::IsKindOf(local_30,(CRuntimeClass *)&PTR_s_CBitmap_004a12a0), iVar3 == 0)) {
    local_34 = 0;
    LVar4 = GetSystemMetrics(0x32);
    local_5c = GetSystemMetrics(0x31);
  }
  else {
    local_34 = 1;
    GetObjectW(*(HANDLE *)(pCVar1 + 4),0x18,local_60);
    LVar4 = local_58.left;
  }
  local_28.top = ((local_70.bottom - local_70.top) / 2 - LVar4 / 2) + -1 + local_70.top;
  local_28.right = local_5c + 1;
  local_28.bottom = LVar4 + 1 + local_28.top;
  local_28.left = 0;
  local_18 = local_5c;
  local_18 = GetSysColor(4);
  FUN_0045b649((undefined4 *)local_8c);
  local_74 = CONCAT31(local_74._1_3_,1);
  pHVar5 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_8c,pHVar5);
  (**(code **)(*(int *)this + 0x28))(local_2c + 8);
  puVar6 = (undefined4 *)FUN_0041c430(this,(LONG *)&local_c,&local_14);
  local_3c = *puVar6;
  local_38 = puVar6[1];
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    CDC::FillSolidRect(this,(tagRECT *)(param_1 + 0x1c),local_18);
    (**(code **)(*(int *)this + 0x2c))(local_18);
    if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
      if ((local_34 != 0) && ((*(uint *)(param_1 + 0x10) & 8) != 0)) {
        local_8 = local_28.bottom - local_28.top;
        local_2c = local_28.right - local_28.left;
        DVar7 = GetSysColor(0x14);
        DVar8 = GetSysColor(0x10);
        CDC::Draw3dRect(this,local_28.left,local_28.top,local_2c + 1,local_8 + 1,DVar8,DVar7);
      }
      if (local_10 != 0) {
        (**(code **)(*(int *)this + 0x2c))(local_18);
        local_8 = *(int *)this;
        DVar7 = GetSysColor(7);
        (**(code **)(local_8 + 0x30))(DVar7);
        goto LAB_00468fb4;
      }
    }
    else {
      local_8 = *(int *)this;
      DVar7 = GetSysColor(0x14);
      (**(code **)(local_8 + 0x30))(DVar7);
      FUN_0045b4b4(this,1);
      if (local_10 != 0) {
        local_10 = local_38 / 2;
        ExtTextOutW(*(HDC *)(this + 4),local_28.right + 4,
                    ((local_28.bottom - local_28.top) / 2 - local_10) + 1 + local_28.top,2,
                    (RECT *)0x0,local_14,*(UINT *)(local_14 + -6),(INT *)0x0);
        local_8 = *(int *)this;
        DVar7 = GetSysColor(0x11);
        (**(code **)(local_8 + 0x30))(DVar7);
        c = *(UINT *)(local_14 + -6);
        iVar3 = ((local_28.bottom - local_28.top) / 2 - local_10) + local_28.top;
        options = 0;
        pHVar5 = *(HDC *)(this + 4);
        goto LAB_00468fe5;
      }
    }
  }
  else {
    CopyRect(&local_58,(RECT *)(param_1 + 0x1c));
    local_58.left = local_28.right + 2;
    DVar7 = GetSysColor(0xd);
    CDC::FillSolidRect(this,&local_58,DVar7);
    if ((local_34 != 0) && ((*(byte *)(param_1 + 0x10) & 10) == 0)) {
      local_2c = local_28.bottom - local_28.top;
      local_8 = local_28.right - local_28.left;
      DVar7 = GetSysColor(0x10);
      DVar8 = GetSysColor(0x14);
      CDC::Draw3dRect(this,local_28.left,local_28.top,local_8 + 1,local_2c + 1,DVar8,DVar7);
    }
    if (local_10 != 0) {
      local_8 = *(int *)this;
      DVar7 = GetSysColor(0xd);
      (**(code **)(local_8 + 0x2c))(DVar7);
      DVar7 = local_18;
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        DVar7 = GetSysColor(0xe);
      }
      (**(code **)(*(int *)this + 0x30))(DVar7);
LAB_00468fb4:
      c = *(UINT *)(local_14 + -6);
      iVar3 = ((local_28.bottom - local_28.top) / 2 - local_38 / 2) + local_28.top;
      options = 2;
      pHVar5 = *(HDC *)(this + 4);
LAB_00468fe5:
      ExtTextOutW(pHVar5,local_28.right + 3,iVar3,options,(RECT *)0x0,local_14,c,(INT *)0x0);
    }
  }
  if (local_34 == 0) goto LAB_004690b6;
  local_8 = 0;
  local_c = CBitmap::vftable;
  local_74._0_1_ = 2;
  if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x10) & 8) != 0) {
      FUN_0045c303((int)local_30,(CGdiObject *)&local_c,local_18,0xffffff);
      goto LAB_00469036;
    }
  }
  else {
    FUN_0045c086((int)local_30,(CGdiObject *)&local_c,local_18);
LAB_00469036:
    local_30 = (CObject *)&local_c;
  }
  FUN_0045b649((undefined4 *)local_44);
  local_74._0_1_ = 3;
  pHVar5 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_44,pHVar5);
  if (local_30 == (CObject *)0x0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar9 = *(undefined ***)(local_30 + 4);
  }
  FUN_0045bf56(local_40,ppuVar9);
  InflateRect(&local_28,-1,-1);
  FUN_0041c200(this,local_28.left,local_28.top,local_28.right,local_28.bottom,(int)local_44,0,0,
               0xcc0020);
  local_74._0_1_ = 2;
  CDC::~CDC(local_44);
  local_74 = CONCAT31(local_74._1_3_,1);
  local_c = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_c);
LAB_004690b6:
  (**(code **)(*(int *)this + 0x20))(local_48);
  local_74 = local_74 & 0xffffff00;
  CDC::~CDC(local_8c);
  FUN_004031b0((undefined4 *)(local_14 + -8));
  ExceptionList = local_7c;
  return;
}

