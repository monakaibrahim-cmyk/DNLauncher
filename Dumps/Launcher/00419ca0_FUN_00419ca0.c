// Address: 0x00419ca0
// Name: FUN_00419ca0
// Category: Launcher


undefined4 __fastcall FUN_00419ca0(int param_1,CWnd *param_2)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  HBITMAP pHVar3;
  HDC pHVar4;
  HGDIOBJ pvVar5;
  int iVar6;
  COLORREF color;
  int iVar7;
  undefined4 uVar8;
  AFX_MODULE_STATE *pAVar9;
  CDC *this_00;
  int y;
  int x;
  undefined4 uVar10;
  int local_8c;
  undefined **local_80;
  HGDIOBJ local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  CDC local_68 [4];
  HDC pHStack_64;
  CDC local_58 [4];
  HDC pHStack_54;
  CDC local_48 [4];
  HDC pHStack_44;
  CClientDC local_38 [4];
  HDC pHStack_34;
  undefined1 auStack_24 [4];
  int iStack_20;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00498a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = (HGDIOBJ)0x0;
  local_80 = CBitmap::vftable;
  local_4 = 0;
  FUN_0045b649((undefined4 *)local_48);
  local_4._0_1_ = 1;
  FUN_0045b649((undefined4 *)local_58);
  local_4._0_1_ = 2;
  FUN_0045b649((undefined4 *)local_68);
  local_4._0_1_ = 3;
  SetRect((LPRECT)(param_2 + 0xc0),0,0,0,0);
  local_8c = 0;
  iVar1 = FUN_00419c40();
  if (iVar1 != 0) {
    CClientDC::CClientDC(local_38,param_2);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (*(int **)(param_2 + 0xd0) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0xd0) + 4))(1);
    }
    puVar2 = FUN_00452728(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = CBitmap::vftable;
    }
    *(undefined4 **)(param_2 + 0xd0) = puVar2;
    if (*(int **)(param_2 + 0xd4) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0xd4) + 4))(1);
    }
    puVar2 = FUN_00452728(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = CBitmap::vftable;
    }
    *(undefined4 **)(param_2 + 0xd4) = puVar2;
    if (param_1 == 0) {
      this = *(void **)(param_2 + 0xd0);
      pHVar3 = CreateBitmapIndirect((BITMAP *)&pbm_004c6ac8);
      Attach(this,(int)pHVar3);
    }
    else if (*(void **)(param_2 + 0xd0) != (void *)0x0) {
      FUN_0041a260(*(void **)(param_2 + 0xd0));
    }
    FUN_0041a2e0(*(void **)(param_2 + 0xd4),*(int *)(param_2 + 0xd0),local_38);
    GetObjectW(*(HANDLE *)(*(int *)(param_2 + 0xd4) + 4),0x18,auStack_24);
    *(int *)(param_2 + 0xac) = iStack_1c;
    *(int *)(param_2 + 0xa8) = iStack_20 / 9;
    if (*(int **)(param_2 + 0xd8) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0xd8) + 4))(1);
    }
    puVar2 = FUN_00452728(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = CBitmap::vftable;
    }
    *(undefined4 **)(param_2 + 0xd8) = puVar2;
    if (*(int *)(param_2 + 0x54) == 0) {
      pHVar3 = CreateCompatibleBitmap(pHStack_34,iStack_20,(iStack_6c - iStack_74) + -2);
    }
    else {
      pHVar3 = CreateCompatibleBitmap(pHStack_34,iStack_20,(iStack_70 - local_78) + -2);
      Attach(&local_80,(int)pHVar3);
      puVar2 = *(undefined4 **)(param_2 + 0xd8);
      pHVar3 = CreateCompatibleBitmap
                         (pHStack_34,((iStack_70 - local_78) + -2) * 9,*(int *)(param_2 + 0xa8));
    }
    Attach(puVar2,(int)pHVar3);
    pHVar4 = CreateCompatibleDC(pHStack_34);
    CDC::Attach(local_48,pHVar4);
    if (*(int *)(param_2 + 0xd4) == 0) {
      pvVar5 = (HGDIOBJ)0x0;
    }
    else {
      pvVar5 = *(HGDIOBJ *)(*(int *)(param_2 + 0xd4) + 4);
    }
    iVar1 = FUN_0045bf56(pHStack_44,pvVar5);
    pHVar4 = CreateCompatibleDC(pHStack_34);
    CDC::Attach(local_68,pHVar4);
    if (*(int *)(param_2 + 0xd8) == 0) {
      pvVar5 = (HGDIOBJ)0x0;
    }
    else {
      pvVar5 = *(HGDIOBJ *)(*(int *)(param_2 + 0xd8) + 4);
    }
    iVar6 = FUN_0045bf56(pHStack_64,pvVar5);
    if (*(int *)(param_2 + 0x54) == 0) {
      this_00 = local_68;
    }
    else {
      pHVar4 = CreateCompatibleDC(pHStack_34);
      CDC::Attach(local_58,pHVar4);
      local_8c = FUN_0045bf56(pHStack_54,local_7c);
      this_00 = local_58;
    }
    FUN_0045b4e2(this_00,4);
    if (*(int *)(param_2 + 0x54) == 0) {
      StretchBlt(pHStack_64,0,0,iStack_20,(iStack_6c - iStack_74) + -2,pHStack_44,0,0,iStack_20,
                 iStack_1c,0xcc0020);
    }
    else {
      StretchBlt(pHStack_54,0,0,iStack_20,(iStack_70 - local_78) + -2,pHStack_44,0,0,iStack_20,
                 iStack_1c,0xcc0020);
      y = 0;
      iVar7 = iStack_20;
      if (iStack_70 - local_78 != 2 && -1 < (iStack_70 - local_78) + -2) {
        do {
          x = 0;
          if (0 < iVar7) {
            do {
              color = GetPixel(pHStack_54,x,y);
              SetPixel(pHStack_64,((iStack_70 - local_78) + -2) * (x / *(int *)(param_2 + 0xa8)) + y
                       ,x % *(int *)(param_2 + 0xa8),color);
              x = x + 1;
              iVar7 = iStack_20;
            } while (x < iStack_20);
          }
          y = y + 1;
        } while (y < (iStack_70 - local_78) + -2);
      }
    }
    if (*(int *)(param_2 + 0x54) != 0) {
      if (local_8c == 0) {
        pvVar5 = (HGDIOBJ)0x0;
      }
      else {
        pvVar5 = *(HGDIOBJ *)(local_8c + 4);
      }
      FUN_0045bf56(pHStack_54,pvVar5);
      CDC::DeleteDC(local_58);
    }
    if (iVar6 == 0) {
      pvVar5 = (HGDIOBJ)0x0;
    }
    else {
      pvVar5 = *(HGDIOBJ *)(iVar6 + 4);
    }
    FUN_0045bf56(pHStack_64,pvVar5);
    CDC::DeleteDC(local_68);
    if (iVar1 == 0) {
      pvVar5 = (HGDIOBJ)0x0;
    }
    else {
      pvVar5 = *(HGDIOBJ *)(iVar1 + 4);
    }
    FUN_0045bf56(pHStack_44,pvVar5);
    CDC::DeleteDC(local_48);
    GetObjectW(*(HANDLE *)(*(int *)(param_2 + 0xd8) + 4),0x18,auStack_24);
    *(int *)(param_2 + 0xa8) = iStack_20 / 9;
    *(int *)(param_2 + 0xac) = iStack_1c;
    CImageList::DeleteImageList((CImageList *)(param_2 + 0xdc));
    iVar1 = CImageList::Create((CImageList *)(param_2 + 0xdc),*(int *)(param_2 + 0xa8),
                               *(int *)(param_2 + 0xac),0x20,0,0);
    if (iVar1 != 0) {
      if (*(int *)(param_2 + 0xd8) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(param_2 + 0xd8) + 4);
      }
      uVar10 = *(undefined4 *)(param_2 + 0xe0);
      pAVar9 = AfxGetModuleState();
      FUN_0041c490((void *)**(undefined4 **)(pAVar9 + 0x78),uVar10,uVar8);
      local_4._0_1_ = 3;
      CClientDC::~CClientDC(local_38);
      local_4._0_1_ = 2;
      CDC::~CDC(local_68);
      local_4._0_1_ = 1;
      CDC::~CDC(local_58);
      local_4 = (uint)local_4._1_3_ << 8;
      CDC::~CDC(local_48);
      local_4 = 0xffffffff;
      local_80 = CBitmap::vftable;
      CGdiObject::~CGdiObject((CGdiObject *)&local_80);
      ExceptionList = local_c;
      return 1;
    }
    local_4._0_1_ = 3;
    CClientDC::~CClientDC(local_38);
  }
  local_4._0_1_ = 2;
  CDC::~CDC(local_68);
  local_4._0_1_ = 1;
  CDC::~CDC(local_58);
  local_4 = (uint)local_4._1_3_ << 8;
  CDC::~CDC(local_48);
  local_4 = 0xffffffff;
  local_80 = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_80);
  ExceptionList = local_c;
  return 0;
}

