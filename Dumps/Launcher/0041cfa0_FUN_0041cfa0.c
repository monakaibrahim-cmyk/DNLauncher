// Address: 0x0041cfa0
// Name: FUN_0041cfa0
// Category: Launcher


void FUN_0041cfa0(HGDIOBJ param_1,void *param_2,HANDLE param_3,int param_4,HGDIOBJ param_5,
                 int param_6,int param_7,int param_8)

{
  HGDIOBJ x;
  HDC pHVar1;
  HGDIOBJ h;
  HBITMAP pHVar2;
  int cx;
  int cy;
  undefined **local_74;
  HGDIOBJ local_70;
  CDC local_6c [4];
  HDC local_68;
  CDC local_5c [4];
  HDC local_58;
  CDC local_4c [4];
  HDC local_48;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  x = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00499010;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_4 == 2) {
    FUN_0041d400((int)param_2,param_3,(int)param_5,param_6,param_7,param_8);
  }
  else if (param_3 != (HANDLE)0x0) {
    cx = param_7 - (int)param_5;
    cy = param_8 - param_6;
    FUN_0045b649((undefined4 *)local_5c);
    local_4 = 0;
    FUN_0045b649((undefined4 *)local_4c);
    local_4 = CONCAT31(local_4._1_3_,1);
    pHVar1 = (HDC)0x0;
    if (param_2 != (void *)0x0) {
      pHVar1 = *(HDC *)((int)param_2 + 4);
    }
    pHVar1 = CreateCompatibleDC(pHVar1);
    CDC::Attach(local_5c,pHVar1);
    h = SelectObject(local_58,param_3);
    if (*(int *)((int)param_1 + 0xec) == 0) {
      if (param_4 == 0) {
        FUN_0041c200(param_2,(int)param_5,param_6,cx,cy,(int)local_5c,0,0,0xcc0020);
      }
      else {
        GetObjectW(param_3,0x18,local_24);
        GetObjectW(param_3,0x18,local_3c);
        FUN_0041c5d0(0xcc0020,local_34,(int)param_2,(int)param_5,param_6,cx,cy,local_20);
      }
    }
    else {
      FUN_0041c610(local_4c,(int)param_2);
      if ((param_1 == (HGDIOBJ)0xffffff18) || (*(HGDIOBJ *)((int)param_1 + 0xec) == (HGDIOBJ)0x0)) {
        param_5 = (HGDIOBJ)0x0;
      }
      else {
        param_5 = SelectObject(local_48,*(HGDIOBJ *)((int)param_1 + 0xec));
      }
      FUN_0045b649((undefined4 *)local_6c);
      local_4._0_1_ = 2;
      FUN_0041c610(local_6c,(int)param_2);
      local_70 = (HGDIOBJ)0x0;
      local_74 = CBitmap::vftable;
      local_4 = CONCAT31(local_4._1_3_,3);
      pHVar2 = CreateCompatibleBitmap(*(HDC *)((int)param_2 + 4),cx,cy);
      Attach(&local_74,(int)pHVar2);
      if (local_70 == (HGDIOBJ)0x0) {
        param_1 = (HGDIOBJ)0x0;
      }
      else {
        param_1 = SelectObject(local_68,local_70);
      }
      BitBlt(local_68,(int)x,param_6,cx,cy,*(HDC *)((int)param_2 + 4),0,0,0xcc0020);
      if (param_4 == 0) {
        FUN_0041c200(local_6c,(int)x,param_6,cx,cy,(int)local_5c,0,0,0x660046);
        FUN_0041c200(local_6c,(int)x,param_6,cx,cy,(int)local_4c,0,0,0x8800c6);
        FUN_0041c200(local_6c,(int)x,param_6,cx,cy,(int)local_5c,0,0,0x660046);
      }
      else {
        GetObjectW(param_3,0x18,local_3c);
        GetObjectW(param_3,0x18,local_24);
        FUN_0041c5d0(0x660046,local_1c,(int)local_6c,(int)x,param_6,cx,cy,local_38);
        FUN_0041c5d0(0x8800c6,local_1c,(int)local_6c,(int)x,param_6,cx,cy,local_38);
        FUN_0041c5d0(0x660046,local_1c,(int)local_6c,(int)x,param_6,cx,cy,local_38);
      }
      BitBlt(*(HDC *)((int)param_2 + 4),(int)x,param_6,cx,cy,local_68,0,0,0xcc0020);
      if (param_1 != (HGDIOBJ)0x0) {
        SelectObject(local_68,param_1);
      }
      CDC::DeleteDC(local_6c);
      CGdiObject::DeleteObject((CGdiObject *)&local_74);
      if (param_5 != (HGDIOBJ)0x0) {
        SelectObject(local_48,param_5);
      }
      CDC::DeleteDC(local_4c);
      local_4._0_1_ = 2;
      local_74 = CBitmap::vftable;
      CGdiObject::~CGdiObject((CGdiObject *)&local_74);
      local_4 = CONCAT31(local_4._1_3_,1);
      CDC::~CDC(local_6c);
    }
    if (h != (HGDIOBJ)0x0) {
      SelectObject(local_58,h);
    }
    CDC::DeleteDC(local_5c);
    local_4 = local_4 & 0xffffff00;
    CDC::~CDC(local_4c);
    local_4 = 0xffffffff;
    CDC::~CDC(local_5c);
  }
  ExceptionList = local_c;
  return;
}

