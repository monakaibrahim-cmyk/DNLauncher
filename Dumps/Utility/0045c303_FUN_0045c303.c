// Address: 0x0045c303
// Name: FUN_0045c303
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045c303(int param_1,CGdiObject *param_2,COLORREF param_3,COLORREF param_4)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  COLORREF CVar4;
  HGDIOBJ pvVar5;
  int iVar6;
  COLORREF CVar7;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  ushort local_6c;
  ushort local_6a;
  RECT local_64;
  undefined **local_54;
  HDC local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined **local_44;
  HDC local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34;
  HDC local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined **local_24;
  HBRUSH local_20;
  undefined **local_1c;
  HGDIOBJ local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_44 = CDC::vftable;
  local_40 = (HDC)0x0;
  local_3c = 0;
  local_38 = 0;
  local_54 = CDC::vftable;
  local_50 = (HDC)0x0;
  local_4c = 0;
  local_48 = 0;
  local_34 = CDC::vftable;
  local_30 = (HDC)0x0;
  local_2c = 0;
  local_28 = 0;
  local_18 = (HGDIOBJ)0x0;
  local_1c = CBitmap::vftable;
  local_20 = (HBRUSH)0x0;
  local_24 = CBrush::vftable;
  local_8 = 4;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  iVar2 = CDC::Attach((CDC *)&local_44,pHVar1);
  if (iVar2 != 0) {
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    iVar2 = CDC::Attach((CDC *)&local_54,pHVar1);
    if (iVar2 != 0) {
      pHVar1 = CreateCompatibleDC((HDC)0x0);
      iVar2 = CDC::Attach((CDC *)&local_34,pHVar1);
      if (iVar2 != 0) {
        iVar2 = GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_7c);
        if (iVar2 != 0) {
          CGdiObject::DeleteObject(param_2);
          iVar2 = FUN_0045bf12(param_2,local_78,local_74,(uint)local_6c,(uint)local_6a,(void *)0x0);
          if (iVar2 != 0) {
            pHVar3 = CreateBitmap(8,8,1,1,&lpBits_004a153c);
            Attach(&local_1c,(int)pHVar3);
            FUN_0045bef1(&local_24,(int)&local_1c);
            CGdiObject::DeleteObject((CGdiObject *)&local_1c);
            pHVar3 = CreateBitmap(local_78,local_74,1,1,(void *)0x0);
            Attach(&local_1c,(int)pHVar3);
            iVar2 = FUN_0045bf56(local_40,*(HGDIOBJ *)(param_1 + 4));
            local_14 = FUN_0045bf56(local_50,local_18);
            if ((iVar2 != 0) && (local_14 != 0)) {
              CVar4 = GetPixel(local_40,0,0);
              CVar4 = FUN_0045b485(&local_44,CVar4);
              BitBlt(local_50,0,0,local_78,local_74,local_40,0,0,0xcc0020);
              FUN_0045b485(&local_44,0xffffff);
              BitBlt(local_50,0,0,local_78,local_74,local_40,0,0,0xee0086);
              FUN_0045b485(&local_44,CVar4);
              if (param_2 == (CGdiObject *)0x0) {
                pvVar5 = (HGDIOBJ)0x0;
              }
              else {
                pvVar5 = *(HGDIOBJ *)(param_2 + 4);
              }
              iVar6 = FUN_0045bf56(local_30,pvVar5);
              if (iVar6 == 0) {
                pvVar5 = (HGDIOBJ)0x0;
              }
              else {
                CVar4 = FUN_0045b510(&local_34,param_3);
                CVar7 = FUN_0045b485(&local_34,param_4);
                local_64.right = local_78;
                local_64.bottom = local_74;
                local_64.left = 0;
                local_64.top = 0;
                FillRect(local_30,&local_64,local_20);
                FUN_0045b510(&local_34,CVar4);
                FUN_0045b485(&local_34,CVar7);
                BitBlt(local_30,0,0,local_78,local_74,local_40,0,0,0x660046);
                BitBlt(local_30,0,0,local_78,local_74,local_50,0,0,0x8800c6);
                BitBlt(local_30,0,0,local_78,local_74,local_40,0,0,0x660046);
                pvVar5 = *(HGDIOBJ *)(iVar6 + 4);
              }
              FUN_0045bf56(local_30,pvVar5);
              FUN_0045bf56(local_50,*(HGDIOBJ *)(local_14 + 4));
              FUN_0045bf56(local_40,*(HGDIOBJ *)(iVar2 + 4));
            }
          }
        }
      }
    }
  }
  local_8._0_1_ = 3;
  local_24 = CBrush::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_24);
  local_8._0_1_ = 2;
  local_1c = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_1c);
  local_8._0_1_ = 1;
  CDC::~CDC((CDC *)&local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC((CDC *)&local_54);
  local_8 = 0xffffffff;
  CDC::~CDC((CDC *)&local_44);
  return;
}

