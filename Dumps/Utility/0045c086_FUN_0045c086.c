// Address: 0x0045c086
// Name: FUN_0045c086
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045c086(int param_1,CGdiObject *param_2,ulong param_3)

{
  bool bVar1;
  DWORD DVar2;
  HDC pHVar3;
  int iVar4;
  HBITMAP pHVar5;
  undefined3 extraout_var;
  COLORREF CVar6;
  HGDIOBJ pvVar7;
  int iVar8;
  HGDIOBJ in_stack_ffffff88;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  ushort local_58;
  ushort local_56;
  undefined **local_50;
  HDC local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined **local_40;
  HDC local_3c;
  undefined4 local_38;
  undefined4 local_34;
  HDC__ local_30 [2];
  HDC__ local_28 [2];
  undefined **local_20;
  HGDIOBJ local_1c;
  int local_18;
  COLORREF local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_40 = CDC::vftable;
  local_3c = (HDC)0x0;
  local_38 = 0;
  local_34 = 0;
  local_50 = CDC::vftable;
  local_4c = (HDC)0x0;
  local_48 = 0;
  local_44 = 0;
  local_1c = (HGDIOBJ)0x0;
  local_20 = CBitmap::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  DVar2 = GetSysColor(0x14);
  CBrush::CBrush((CBrush *)local_30,DVar2);
  local_8._0_1_ = 3;
  DVar2 = GetSysColor(0x10);
  CBrush::CBrush((CBrush *)local_28,DVar2);
  local_8 = CONCAT31(local_8._1_3_,4);
  pHVar3 = CreateCompatibleDC((HDC)0x0);
  iVar4 = CDC::Attach((CDC *)&local_40,pHVar3);
  if (iVar4 != 0) {
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    iVar4 = CDC::Attach((CDC *)&local_50,pHVar3);
    if (iVar4 != 0) {
      GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_68);
      CGdiObject::DeleteObject(param_2);
      iVar4 = FUN_0045bf12(param_2,local_64,local_60,(uint)local_58,(uint)local_56,(void *)0x0);
      if (iVar4 != 0) {
        pHVar5 = CreateBitmap(local_64,local_60,1,1,(void *)0x0);
        bVar1 = Attach(&local_20,(int)pHVar5);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          iVar4 = FUN_0045bf56(local_3c,*(HGDIOBJ *)(param_1 + 4));
          local_18 = FUN_0045bf56(local_4c,local_1c);
          if ((iVar4 != 0) && (local_18 != 0)) {
            CVar6 = GetPixel(local_3c,0,0);
            local_14 = FUN_0045b485(&local_40,CVar6);
            BitBlt(local_4c,0,0,local_64,local_60,local_3c,0,0,0xcc0020);
            FUN_0045b485(&local_40,0xffffff);
            BitBlt(local_4c,0,0,local_64,local_60,local_3c,0,0,0x1100a6);
            if (param_2 == (CGdiObject *)0x0) {
              pvVar7 = (HGDIOBJ)0x0;
            }
            else {
              pvVar7 = *(HGDIOBJ *)(param_2 + 4);
            }
            iVar8 = FUN_0045bf56(local_3c,pvVar7);
            if (iVar8 != 0) {
              CDC::FillSolidRect((CDC *)&local_40,0,0,local_64,local_60,param_3);
              FUN_0045b485(&local_40,0xffffff);
              pHVar3 = SelectObject(local_30,in_stack_ffffff88);
              BitBlt(local_3c,1,1,local_64,local_60,local_4c,0,0,0xe20746);
              SelectObject(local_28,in_stack_ffffff88);
              BitBlt(local_3c,0,0,local_64,local_60,local_4c,0,0,0xe20746);
              SelectObject(pHVar3,in_stack_ffffff88);
              FUN_0045b485(&local_40,local_14);
            }
            FUN_0045bf56(local_4c,*(HGDIOBJ *)(local_18 + 4));
            FUN_0045bf56(local_3c,*(HGDIOBJ *)(iVar4 + 4));
          }
        }
      }
    }
  }
  local_8._0_1_ = 3;
  local_28[0].unused = (int)CBrush::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)local_28);
  local_8._0_1_ = 2;
  local_30[0].unused = (int)CBrush::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)local_30);
  local_8._0_1_ = 1;
  local_20 = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_20);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC((CDC *)&local_50);
  local_8 = 0xffffffff;
  CDC::~CDC((CDC *)&local_40);
  return;
}

