// Address: 0x0045899e
// Name: CWnd::OnWndMsg
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnWndMsg(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  CWnd *pCVar3;
  int *piVar4;
  void *pvVar5;
  CDC *pCVar6;
  CWnd *pCVar7;
  CMenu *pCVar8;
  AFX_MSGMAP_ENTRY *pAVar9;
  code *pcVar10;
  short sVar11;
  short sVar12;
  CWnd local_80 [32];
  HWND__ *local_60;
  void *local_30;
  CDC local_2c [4];
  undefined4 local_28;
  uint *local_1c;
  undefined4 local_18;
  int local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  pCVar6 = (CDC *)param_3;
  uStack_4 = 0x70;
  local_14[0] = 0;
  local_18 = 0x7fffffff;
  local_8 = 0;
  if (param_1 == 0x111) {
    iVar2 = (**(code **)(*(int *)this + 0xe8))(param_2,param_3);
    if (iVar2 == 0) goto LAB_00458bae;
LAB_004589dc:
    local_14[0] = 1;
    goto switchD_00458b51_caseD_38;
  }
  if (param_1 == 0x4e) {
    if (*(int *)param_3 == 0) goto LAB_00458bae;
    iVar2 = (**(code **)(*(int *)this + 0xec))(param_2,param_3,local_14);
LAB_00458a0a:
    if (iVar2 == 0) {
LAB_00458bae:
      local_8 = 0xffffffff;
      CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
      return 0;
    }
    goto switchD_00458b51_caseD_38;
  }
  if (param_1 == 6) {
    pCVar3 = FromHandle((HWND__ *)param_3);
    _AfxHandleActivate(this,param_2,pCVar3);
  }
  sVar11 = (short)param_3;
  if ((param_1 == 0x20) &&
     (iVar2 = _AfxHandleSetCursor(this,(int)sVar11,(uint)param_3 >> 0x10), iVar2 != 0))
  goto LAB_004589dc;
  if ((((*(int *)(this + 0x4c) != 0) && (0 < *(int *)(*(int *)(this + 0x4c) + 0x74))) &&
      ((((0x1ff < param_1 && (param_1 < 0x20a)) || ((0xff < param_1 && (param_1 < 0x110)))) ||
       (param_1 - 0x281 < 0x11)))) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x4c) + 0x94))(param_1,param_2,param_3,local_14),
     iVar2 != 0)) goto switchD_00458b51_caseD_38;
  piVar4 = (int *)(**(code **)(*(int *)this + 0x28))();
  CInternalGlobalLock::Lock((CInternalGlobalLock *)&local_18,7);
  iVar2 = (((uint)piVar4 ^ param_1) & 0x1ff) * 0xc;
  local_1c = (uint *)(&DAT_004c8f20 + iVar2);
  if ((param_1 != *local_1c) || (piVar4 != *(int **)(&DAT_004c8f28 + iVar2))) {
    *local_1c = param_1;
    *(int **)(&DAT_004c8f28 + iVar2) = piVar4;
    for (; *piVar4 != 0; piVar4 = (int *)(*(code *)*piVar4)()) {
      if (param_1 < 0xc000) {
        param_3 = (long)AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar4[1],param_1,0,0);
        if ((AFX_MSGMAP_ENTRY *)param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          local_1c[1] = param_3;
          CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
          goto LAB_00458b3c;
        }
      }
      else {
        pAVar9 = (AFX_MSGMAP_ENTRY *)piVar4[1];
        while (param_3 = (long)AfxFindMessageEntry(pAVar9,0xc000,0,0),
              (AFX_MSGMAP_ENTRY *)param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          if (**(uint **)(param_3 + 0x10) == param_1) {
            local_1c[1] = param_3;
            CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
            goto LAB_00458e87;
          }
          pAVar9 = (AFX_MSGMAP_ENTRY *)(param_3 + 0x18);
        }
      }
    }
    local_1c[1] = 0;
    CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
    goto LAB_00458bae;
  }
  param_3 = *(long *)(&DAT_004c8f24 + iVar2);
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  if ((AFX_MSGMAP_ENTRY *)param_3 == (AFX_MSGMAP_ENTRY *)0x0) goto LAB_00458bae;
  if (0xbfff < param_1) {
LAB_00458e87:
    pcVar10 = *(code **)(param_3 + 0x14);
switchD_00458b51_caseD_e:
    goto LAB_00458e8e;
  }
LAB_00458b3c:
  pcVar10 = *(code **)(param_3 + 0x14);
  sVar12 = (short)((uint)pCVar6 >> 0x10);
  switch(*(int *)(param_3 + 0x10)) {
  case 1:
    pCVar6 = CDC::FromHandle((HDC__ *)param_2);
    goto LAB_00458bdd;
  case 2:
  case 3:
  case 4:
  case 0x1b:
  case 0x1c:
    pCVar6 = (CDC *)param_2;
    goto LAB_00458bdd;
  case 5:
  case 0xc:
    pCVar8 = (CMenu *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    pCVar7 = FromHandle((HWND__ *)param_2);
    goto LAB_00458c12;
  case 6:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_00458e8e;
  case 7:
  case 0xd:
LAB_00458bdd:
    local_14[0] = (*pcVar10)(pCVar6);
    break;
  case 8:
    FUN_0045b649((undefined4 *)local_2c);
    local_28 = *(undefined4 *)((int)pCVar6 + 4);
    local_8._0_1_ = 1;
    CWnd(local_80);
    local_60 = *(HWND__ **)pCVar6;
    uVar1 = *(undefined4 *)((int)pCVar6 + 8);
    local_8 = CONCAT31(local_8._1_3_,2);
    pCVar3 = FromHandlePermanent(local_60);
    if (pCVar3 == (CWnd *)0x0) {
      if ((*(int *)(this + 0x4c) != 0) &&
         (pvVar5 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(*(int *)(this + 0x4c) + 0x24),local_60)
         , pvVar5 != (void *)0x0)) {
        local_30 = pvVar5;
      }
      pCVar3 = local_80;
    }
    local_14[0] = (*pcVar10)(local_2c,pCVar3,uVar1);
    local_28 = 0;
    local_60 = (HWND__ *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    ~CWnd(local_80);
    goto LAB_00458cbd;
  case 9:
    FUN_0045b649((undefined4 *)local_2c);
    local_28 = *(undefined4 *)((int)pCVar6 + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14[0] = (*pcVar10)(local_2c,*(undefined4 *)((int)pCVar6 + 8));
    local_28 = 0;
LAB_00458cbd:
    local_8 = local_8 & 0xffffff00;
    CDC::~CDC(local_2c);
    break;
  case 10:
    pCVar8 = (CMenu *)(param_2 >> 0x10);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_00458cdb;
  case 0xb:
    pCVar6 = (CDC *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_00458e8e;
  case 0xe:
  case 0x2f:
    goto switchD_00458b51_caseD_e;
  case 0xf:
    pCVar8 = CMenu::FromHandle((HMENU__ *)pCVar6);
    pCVar3 = (CWnd *)(param_2 >> 0x10);
LAB_00458cdb:
    pCVar7 = (CWnd *)(param_2 & 0xffff);
LAB_00458c12:
    local_14[0] = (*pcVar10)(pCVar7,pCVar3,pCVar8);
    break;
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x1e:
  case 0x2d:
  case 0x32:
    pCVar3 = (CWnd *)pCVar6;
    goto LAB_00458e06;
  case 0x11:
  case 0x14:
    goto LAB_00458e10;
  case 0x13:
    (*pcVar10)();
    break;
  case 0x16:
    pCVar3 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_00458e06;
  case 0x17:
    param_2 = (uint)sVar11;
    pCVar3 = (CWnd *)(int)sVar12;
    goto LAB_00458e06;
  case 0x18:
  case 0x19:
    pCVar7 = (CWnd *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    goto LAB_00458e33;
  case 0x1a:
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_00458e06;
  case 0x1d:
  case 0x28:
  case 0x31:
    local_14[0] = (*pcVar10)();
    break;
  case 0x1f:
    pCVar7 = FromHandle((HWND__ *)param_2);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    param_2 = (uint)((CDC *)*(int *)(this + 0x20) == pCVar6);
    goto LAB_00458e33;
  case 0x20:
    param_2 = (uint)CDC::FromHandle((HDC__ *)param_2);
    goto LAB_00458e10;
  case 0x21:
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_00458e10;
  case 0x22:
    pCVar7 = (CWnd *)(int)sVar12;
    pCVar3 = (CWnd *)(int)sVar11;
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_00458e33;
  case 0x23:
    goto LAB_00458d95;
  case 0x24:
    param_2 = (uint)pCVar6;
LAB_00458d95:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_00458e10;
  case 0x25:
    pCVar7 = (CWnd *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    goto LAB_00458db2;
  case 0x26:
    pCVar3 = (CWnd *)(int)sVar11;
    pCVar7 = (CWnd *)(int)sVar12;
LAB_00458db2:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_00458e33;
  case 0x27:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    pCVar3 = (CWnd *)pCVar6;
    goto LAB_00458e06;
  case 0x29:
    pCVar7 = (CWnd *)(param_2 >> 0x10);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_00458e1d;
  case 0x2a:
  case 0x2b:
    pCVar8 = (CMenu *)(int)(short)param_2;
    pCVar3 = (CWnd *)(int)(short)(param_2 >> 0x10);
    param_2 = (uint)pCVar8;
    if (*(int *)(param_3 + 0x10) == 0x2a) {
      pCVar7 = FromHandle((HWND__ *)pCVar6);
      goto LAB_00458e33;
    }
LAB_00458e06:
    (*pcVar10)(param_2,pCVar3);
    break;
  case 0x2c:
  case 0x33:
    param_2 = (uint)pCVar6;
LAB_00458e10:
    (*pcVar10)(param_2);
    break;
  case 0x2e:
  case 0x36:
    (*pcVar10)(param_2,pCVar6);
    goto LAB_004589dc;
  case 0x30:
  case 0x45:
    param_2 = (uint)sVar11;
    pCVar6 = (CDC *)(int)sVar12;
LAB_00458e8e:
    local_14[0] = (*pcVar10)(param_2,pCVar6);
    break;
  case 0x34:
    pCVar3 = (CWnd *)(param_2 >> 0x10);
    pCVar7 = (CWnd *)pCVar6;
LAB_00458e1d:
    param_2 = param_2 & 0xffff;
    goto LAB_00458e33;
  case 0x35:
    pCVar3 = (CWnd *)(int)sVar11;
    pCVar7 = (CWnd *)(int)sVar12;
LAB_00458e33:
    (*pcVar10)(param_2,pCVar3,pCVar7);
    break;
  case 0x37:
    iVar2 = (*pcVar10)(param_2 & 0xffff,param_2 >> 0x10,(int)sVar11,(int)sVar12);
    local_14[0] = iVar2;
    goto LAB_00458a0a;
  case 0x44:
    local_14[0] = (*pcVar10)();
    if (local_14[0] != 0) goto LAB_00458bae;
  }
switchD_00458b51_caseD_38:
  if (param_4 != (long *)0x0) {
    *param_4 = local_14[0];
  }
  local_8 = 0xffffffff;
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  return 1;
}

