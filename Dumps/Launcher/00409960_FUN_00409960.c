// Address: 0x00409960
// Name: FUN_00409960
// Category: Launcher


void __thiscall FUN_00409960(void *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  undefined *puVar3;
  HWND pHVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  switch(param_1 & 0xffff) {
  case 0x1b62:
    if ((param_1 >> 0x10 == 1) && (pCVar1 = CWnd::GetDlgItem(this,0x1b62), pCVar1 != (CWnd *)0x0)) {
      iVar7 = FUN_00409c90();
      if (iVar7 == 0) {
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 0xc) = 2;
        CWnd::OnCommand(this,param_1,param_2);
        return;
      }
      if (iVar7 == 1) {
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 0xc) = 1;
        CWnd::OnCommand(this,param_1,param_2);
        return;
      }
      if (iVar7 == 2) {
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 0xc) = 0;
        CWnd::OnCommand(this,param_1,param_2);
        return;
      }
    }
    break;
  case 0x1b63:
    if (param_1 >> 0x10 == 1) {
      pHVar4 = GetParent(*(HWND *)((int)this + 0x20));
      CWnd::FromHandle(pHVar4);
      pCVar1 = CWnd::GetDlgItem(this,0x1b63);
      if (((pCVar1 != (CWnd *)0x0) && (iVar7 = FUN_00409c90(), -1 < iVar7)) &&
         (iVar5 = FUN_00409c50(), iVar7 < iVar5)) {
        puVar6 = (undefined4 *)FUN_00409c70();
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 4) = *puVar6;
        iVar7 = FUN_00409c70();
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(iVar7 + 4);
        CWnd::OnCommand(this,param_1,param_2);
        return;
      }
    }
    break;
  case 0x1b67:
    puVar3 = FUN_00407210();
    FUN_00407280((int)puVar3,*(HWND *)((int)this + 0x20));
    CDialog::EndDialog(this,1);
    CWnd::OnCommand(this,param_1,param_2);
    return;
  case 0x1b68:
    CDialog::EndDialog(this,0);
    CWnd::OnCommand(this,param_1,param_2);
    return;
  case 0x1b6d:
    if ((param_1 >> 0x10 == 1) && (pCVar1 = CWnd::GetDlgItem(this,0x1b6d), pCVar1 != (CWnd *)0x0)) {
      iVar7 = FUN_00409c90();
      if (iVar7 == 0) {
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 0x10) = 1;
        CWnd::OnCommand(this,param_1,param_2);
        return;
      }
      if (iVar7 == 1) {
        puVar3 = FUN_00407210();
        *(undefined4 *)(puVar3 + 0x10) = 0;
      }
    }
    break;
  case 0x1b6e:
    pCVar1 = CWnd::GetDlgItem(this,0x1b6e);
    if (pCVar1 != (CWnd *)0x0) {
      uVar2 = FUN_00409cb0();
      puVar3 = FUN_00407210();
      *(undefined4 *)(puVar3 + 0x18) = uVar2;
      CWnd::OnCommand(this,param_1,param_2);
      return;
    }
    break;
  case 0x1b7f:
    if (((short)(param_1 >> 0x10) == 1) &&
       (pCVar1 = CWnd::GetDlgItem(this,0x1b7f), pCVar1 != (CWnd *)0x0)) {
      uVar2 = FUN_00409c90();
      puVar3 = FUN_00407210();
      *(undefined4 *)(puVar3 + 0x14) = uVar2;
      pCVar1 = CWnd::GetDlgItem(this,0x1b63);
      if (pCVar1 != (CWnd *)0x0) {
        puVar3 = FUN_00407210();
        CWnd::EnableWindow(pCVar1,(uint)(*(int *)(puVar3 + 0x14) != 2));
        CWnd::OnCommand(this,param_1,param_2);
        return;
      }
    }
  }
  CWnd::OnCommand(this,param_1,param_2);
  return;
}

