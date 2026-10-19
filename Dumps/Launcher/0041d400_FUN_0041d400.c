// Address: 0x0041d400
// Name: FUN_0041d400
// Category: Launcher


void FUN_0041d400(int param_1,HANDLE param_2,int param_3,int param_4,int param_5,int param_6)

{
  int x;
  HDC pHVar1;
  HGDIOBJ h;
  int iVar2;
  int iVar3;
  int cx;
  CDC local_4c [4];
  HDC local_48;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_24 [4];
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != (HANDLE)0x0) {
    FUN_0045b649((undefined4 *)local_4c);
    local_4 = 0;
    pHVar1 = (HDC)0x0;
    if (param_1 != 0) {
      pHVar1 = *(HDC *)(param_1 + 4);
    }
    pHVar1 = CreateCompatibleDC(pHVar1);
    CDC::Attach(local_4c,pHVar1);
    h = SelectObject(local_48,param_2);
    iVar2 = param_5 - param_3;
    iVar3 = param_6 - param_4;
    GetObjectW(param_2,0x18,local_24);
    GetObjectW(param_2,0x18,local_3c);
    cx = local_20;
    for (; param_4 < iVar3; param_4 = param_4 + local_34) {
      x = param_3;
      local_20 = cx;
      if (iVar3 < param_4 + local_34) {
        local_34 = iVar3 - param_4;
      }
      for (; x < iVar2; x = x + cx) {
        if (iVar2 < x + cx) {
          cx = iVar2 - x;
        }
        BitBlt(*(HDC *)(param_1 + 4),x,param_4,cx,local_34,local_48,0,0,0xcc0020);
      }
      cx = local_20;
    }
    if (h != (HGDIOBJ)0x0) {
      SelectObject(local_48,h);
    }
    CDC::DeleteDC(local_4c);
    local_4 = 0xffffffff;
    CDC::~CDC(local_4c);
  }
  ExceptionList = local_c;
  return;
}

