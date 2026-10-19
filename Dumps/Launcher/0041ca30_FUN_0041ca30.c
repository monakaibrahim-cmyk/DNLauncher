// Address: 0x0041ca30
// Name: FUN_0041ca30
// Category: Launcher


void __thiscall FUN_0041ca30(void *this,int param_1)

{
  int iVar1;
  POINT Point;
  char cVar2;
  LPSTR lpString;
  HWND pHVar3;
  BOOL BVar4;
  HWND pHVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  CDC *this_00;
  DWORD DVar9;
  HANDLE pvVar10;
  void *this_01;
  int unaff_EBX;
  int unaff_EDI;
  HANDLE in_stack_ffffff94;
  HDC pHVar11;
  UINT edge;
  HWND__ HStack_44;
  undefined1 local_40 [12];
  LONG LStack_34;
  int iStack_30;
  undefined1 auStack_2c [8];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00499038;
  local_14 = ExceptionList;
  lpString = (LPSTR)(DAT_004c3750 ^ (uint)&stack0xffffffb0);
  ExceptionList = &local_14;
  if (*(char *)((int)this + 0x5d) != '\0') {
    pHVar3 = GetCapture();
    if (pHVar3 == *(HWND *)((int)this + 0x20)) {
      BVar4 = GetCursorPos((LPPOINT)local_40);
      if (BVar4 != 0) {
        pHVar3 = *(HWND *)((int)this + 0x20);
        Point.y = local_40._4_4_;
        Point.x = local_40._0_4_;
        pHVar5 = WindowFromPoint(Point);
        if (pHVar5 == pHVar3) {
          uVar6 = SendMessageW(pHVar3,0xf2,0,0);
          if ((uVar6 & 4) == 0) {
            SendMessageW(*(HWND *)((int)this + 0x20),0xf3,1,0);
            ExceptionList = local_14;
            return;
          }
        }
        else {
          uVar6 = SendMessageW(pHVar3,0xf2,0,0);
          if ((uVar6 & 4) != 0) {
            SendMessageW(*(HWND *)((int)this + 0x20),0xf3,0,0);
            ExceptionList = local_14;
            return;
          }
        }
      }
    }
  }
  piVar7 = (int *)FUN_00453ed1();
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar8 = (**(code **)(*piVar7 + 0xc))();
  HStack_44.unused = iVar8 + 0x10;
  uStack_c = 0;
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  auStack_2c._0_4_ = *(int *)(param_1 + 0x28);
  local_40._8_4_ = *(int *)(param_1 + 0x1c);
  LStack_34 = *(int *)(param_1 + 0x20);
  iStack_30 = *(int *)(param_1 + 0x24);
  auStack_2c._4_4_ = *(short *)((int)this + 0x8f4) + 2 + local_40._8_4_;
  iStack_20 = (iStack_30 - *(short *)((int)this + 0x8f4)) + -2;
  iStack_24 = LStack_34;
  iStack_1c = auStack_2c._0_4_;
  FID_conflict_GetWindowTextA(&HStack_44,lpString,unaff_EDI);
  FUN_0045b4b4(this_00,1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 4) != 0) {
    if (*(int *)((int)this + 0x8f0) == 0) {
      if (*(int *)((int)this + 0xe4) == 0) {
        DVar9 = GetSysColor(0xf);
        CDC::FillSolidRect(this_00,(tagRECT *)(local_40 + 8),DVar9);
      }
      else {
        if (this == (void *)0xffffff20) {
          pvVar10 = (HANDLE)0x0;
        }
        else {
          pvVar10 = *(HANDLE *)((int)this + 0xe4);
        }
        FUN_0041cfa0(this,this_00,pvVar10,(int)*(short *)((int)this + 0x904),(HGDIOBJ)local_40._8_4_
                     ,LStack_34,iStack_30,auStack_2c._0_4_);
      }
    }
    else if (*(int *)((int)this + 0x8f0) == 1) {
      cVar2 = FUN_00434fd0((int)this + 0x6f4);
      if (cVar2 == '\0') {
        DVar9 = GetSysColor(0xf);
        CDC::FillSolidRect(this_00,(tagRECT *)(local_40 + 8),DVar9);
      }
      else {
        FUN_00436150((void *)((int)this + 0x6f4),*(HDC *)(param_1 + 0x18),(int *)(local_40 + 8),
                     (RECT *)0x0);
      }
    }
    if (*(int *)((int)this + 0x900) != 0) {
      DrawEdge(*(HDC *)(this_00 + 4),(LPRECT)(local_40 + 8),5,0xf);
    }
    iVar8 = *(int *)this_00;
    DVar9 = GetSysColor(0x14);
    (**(code **)(iVar8 + 0x30))(DVar9);
    if (*(char *)((int)this + 0x54) != '\0') {
      OffsetRect((LPRECT)auStack_2c,1,1);
    }
    iVar8 = 0x25;
    (**(code **)(*(int *)this_00 + 0x68))(unaff_EBX,*(undefined4 *)(unaff_EBX + -0xc),auStack_2c);
    iVar1 = *(int *)this_00;
    in_stack_ffffff94 = (HANDLE)GetSysColor(0x11);
    (**(code **)(iVar1 + 0x30))();
    OffsetRect((LPRECT)local_40,-1,-1);
    goto LAB_0041cf43;
  }
  if (((uVar6 & 1) == 0) && (*(char *)((int)this + 0x54) == '\0')) {
    if (*(int *)((int)this + 0x8f0) == 0) {
      if (*(int *)((int)this + 0xd4) == 0) {
        DVar9 = GetSysColor(0xf);
        CDC::FillSolidRect(this_00,(tagRECT *)(local_40 + 8),DVar9);
      }
      else {
        if ((*(char *)((int)this + 0x5c) == '\0') || (*(int *)((int)this + 0xf4) == 0)) {
          if (((uVar6 & 0x10) == 0) || (*(int *)((int)this + 0xfc) == 0)) {
            iVar8 = (int)this + 0xd0;
            if (iVar8 != 0) goto LAB_0041cd5f;
            in_stack_ffffff94 = (HANDLE)0x0;
          }
          else {
            iVar8 = (int)this + 0xf8;
            if (iVar8 == 0) {
              in_stack_ffffff94 = (HANDLE)0x0;
            }
            else {
LAB_0041cd5f:
              in_stack_ffffff94 = *(HANDLE *)(iVar8 + 4);
            }
          }
        }
        else {
          iVar8 = (int)this + 0xf0;
          if (iVar8 != 0) goto LAB_0041cd5f;
          in_stack_ffffff94 = (HANDLE)0x0;
        }
        FUN_0041cfa0(this,this_00,in_stack_ffffff94,(int)*(short *)((int)this + 0x904),
                     (HGDIOBJ)local_40._8_4_,LStack_34,iStack_30,auStack_2c._0_4_);
      }
    }
    else if (*(int *)((int)this + 0x8f0) == 1) {
      cVar2 = FUN_00434fd0((int)this + 0x100);
      if (cVar2 == '\0') {
        DVar9 = GetSysColor(0xf);
        CDC::FillSolidRect(this_00,(tagRECT *)(local_40 + 8),DVar9);
      }
      else {
        if (*(char *)((int)this + 0x5c) == '\0') {
LAB_0041cde9:
          pHVar11 = *(HDC *)(param_1 + 0x18);
          this_01 = (void *)((int)this + 0x100);
        }
        else {
          cVar2 = FUN_00434fd0((int)this + 0x4f8);
          if (cVar2 == '\0') goto LAB_0041cde9;
          pHVar11 = *(HDC *)(param_1 + 0x18);
          this_01 = (void *)((int)this + 0x4f8);
        }
        FUN_00436150(this_01,pHVar11,(int *)(local_40 + 8),(RECT *)0x0);
      }
    }
    if (*(int *)((int)this + 0x900) != 0) {
      pHVar11 = *(HDC *)(this_00 + 4);
      edge = 5;
LAB_0041cef7:
      DrawEdge(pHVar11,(LPRECT)(local_40 + 8),edge,0xf);
    }
  }
  else {
    if (*(int *)((int)this + 0x8f0) == 0) {
      if (*(int *)((int)this + 0xdc) == 0) {
        DVar9 = GetSysColor(0xf);
        CDC::FillSolidRect(this_00,(tagRECT *)(local_40 + 8),DVar9);
      }
      else {
        if (this == (void *)0xffffff28) {
          in_stack_ffffff94 = (HANDLE)0x0;
        }
        else {
          in_stack_ffffff94 = *(HANDLE *)((int)this + 0xdc);
        }
        FUN_0041cfa0(this,this_00,in_stack_ffffff94,(int)*(short *)((int)this + 0x904),
                     (HGDIOBJ)local_40._8_4_,LStack_34,iStack_30,auStack_2c._0_4_);
      }
    }
    else if (*(int *)((int)this + 0x8f0) == 1) {
      cVar2 = FUN_00434fd0((int)this + 0x2fc);
      if (cVar2 == '\0') {
        DVar9 = GetSysColor(0xf);
        CDC::FillSolidRect(this_00,(tagRECT *)(local_40 + 8),DVar9);
      }
      else {
        FUN_00436150((void *)((int)this + 0x2fc),*(HDC *)(param_1 + 0x18),(int *)(local_40 + 8),
                     (RECT *)0x0);
      }
    }
    OffsetRect((LPRECT)(auStack_2c + 4),1,1);
    if (*(int *)((int)this + 0x900) != 0) {
      pHVar11 = *(HDC *)(this_00 + 4);
      edge = 10;
      goto LAB_0041cef7;
    }
  }
  if (((*(byte *)(param_1 + 0x10) & 0x10) != 0) && (0 < *(short *)((int)this + 0x8f4))) {
    iVar8 = (int)*(short *)((int)this + 0x8f4);
    local_40._8_4_ = local_40._8_4_ + iVar8;
    LStack_34 = LStack_34 + iVar8;
    iStack_30 = iStack_30 - iVar8;
    auStack_2c._0_4_ = auStack_2c._0_4_ - iVar8;
    DrawFocusRect(*(HDC *)(param_1 + 0x18),(RECT *)(local_40 + 8));
  }
  iVar8 = 0x41cf43;
  (**(code **)(*(int *)this_00 + 0x30))(*(undefined4 *)((int)this + 0x8f8));
LAB_0041cf43:
  (**(code **)(*(int *)this_00 + 0x68))(iVar8,*(undefined4 *)(iVar8 + -0xc),local_40,0x25);
  LStack_34 = -1;
  piVar7 = (int *)((int)in_stack_ffffff94 - 4);
  LOCK();
  iVar8 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)((int)in_stack_ffffff94 - 0x10U) + 4))
              ((undefined4 *)((int)in_stack_ffffff94 - 0x10U));
  }
  ExceptionList = (void *)local_40._4_4_;
  return;
}

