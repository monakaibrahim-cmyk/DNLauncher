// Address: 0x00465285
// Name: COccManager::BindControls
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall COccManager::BindControls(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __thiscall COccManager::BindControls(COccManager *this,CWnd *param_1)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  CWnd *this_00;
  void **ppvVar4;
  CDataBoundProperty *this_01;
  CWnd *pCVar5;
  
  this_00 = param_1;
  if (*(int *)(param_1 + 0x4c) != 0) {
    param_1 = *(CWnd **)(*(int *)(param_1 + 0x4c) + 0x44);
    while (param_1 != (CWnd *)0x0) {
      ppvVar4 = CPtrList::GetNext((CPtrList *)(*(int *)(this_00 + 0x4c) + 0x40),
                                  (__POSITION **)&param_1);
      pvVar2 = *ppvVar4;
      if (*(int *)((int)pvVar2 + 4) != 0) {
        for (this_01 = *(CDataBoundProperty **)(*(int *)((int)pvVar2 + 4) + 0x94);
            this_01 != (CDataBoundProperty *)0x0;
            this_01 = (CDataBoundProperty *)FUN_0046afe5((int)this_01)) {
          FUN_0046afdc(this_01,*(undefined4 *)((int)pvVar2 + 4));
          if (*(ushort *)(this_01 + 4) != 0) {
            pCVar5 = CWnd::GetDlgItem(this_00,(uint)*(ushort *)(this_01 + 4));
            CDataBoundProperty::SetDSCSite(this_01,*(COleControlSite **)(pCVar5 + 0x50));
          }
        }
        uVar1 = *(ushort *)(*(int *)((int)pvVar2 + 4) + 0x98);
        if (uVar1 != 0) {
          pCVar5 = CWnd::GetDlgItem(this_00,(uint)uVar1);
          (**(code **)(**(int **)(pCVar5 + 0x50) + 0xb4))();
          *(undefined4 *)(*(int *)((int)pvVar2 + 4) + 0x98) = *(undefined4 *)(pCVar5 + 0x50);
          (**(code **)(**(int **)(*(int *)(pCVar5 + 0x50) + 0x90) + 8))
                    (*(undefined4 *)((int)pvVar2 + 4),1);
        }
      }
    }
    param_1 = *(CWnd **)(*(int *)(this_00 + 0x4c) + 0x44);
    while (param_1 != (CWnd *)0x0) {
      ppvVar4 = CPtrList::GetNext((CPtrList *)(*(int *)(this_00 + 0x4c) + 0x40),
                                  (__POSITION **)&param_1);
      iVar3 = *(int *)((int)*ppvVar4 + 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x90) != 0)) {
        (**(code **)(**(int **)(iVar3 + 0x90) + 0xc))();
      }
    }
  }
  return;
}

