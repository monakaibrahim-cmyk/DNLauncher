// Address: 0x00462565
// Name: CFrameWnd::DestroyDockBars
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CFrameWnd::DestroyDockBars(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::DestroyDockBars(CFrameWnd *this)

{
  int *piVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  CList<HWND__*,HWND__*> *this_00;
  undefined **local_4c;
  undefined4 *local_48;
  undefined **local_30;
  undefined4 *local_2c;
  __POSITION *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x462571;
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_4c,10);
  local_8 = 0;
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_30,10);
  local_14[0] = *(__POSITION **)(this + 0x88);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_14[0] != (__POSITION *)0x0) {
    do {
      ppvVar3 = CPtrList::GetNext((CPtrList *)(this + 0x84),local_14);
      piVar1 = *ppvVar3;
      iVar4 = (**(code **)(*piVar1 + 0x15c))();
      this_00 = (CList<HWND__*,HWND__*> *)&local_4c;
      if (iVar4 == 0) {
        this_00 = (CList<HWND__*,HWND__*> *)&local_30;
      }
      CList<HWND__*,HWND__*>::AddTail(this_00,(HWND__ *)piVar1[8]);
    } while (local_14[0] != (__POSITION *)0x0);
  }
  while( true ) {
    while( true ) {
      do {
        if (local_48 == (undefined4 *)0x0) {
          while (local_2c != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)*local_2c;
            pCVar6 = CWnd::FromHandlePermanent((HWND__ *)local_2c[2]);
            pCVar7 = FUN_0046618c((CRuntimeClass *)&PTR_s_CControlBar_004a29c0,(CObject *)pCVar6);
            local_2c = puVar2;
            if (pCVar7 != (CObject *)0x0) {
              (**(code **)(*(int *)pCVar7 + 0x60))();
            }
          }
          local_8 = local_8 & 0xffffff00;
          local_30 = CList<HWND__*,HWND__*>::vftable;
          CList<HWND__*,HWND__*>::RemoveAll((CList<HWND__*,HWND__*> *)&local_30);
          local_8 = 0xffffffff;
          local_4c = CList<HWND__*,HWND__*>::vftable;
          CList<HWND__*,HWND__*>::RemoveAll((CList<HWND__*,HWND__*> *)&local_4c);
          return;
        }
        puVar2 = (undefined4 *)*local_48;
        pCVar6 = CWnd::FromHandlePermanent((HWND__ *)local_48[2]);
        pCVar7 = FUN_0046618c((CRuntimeClass *)&PTR_s_CDockBar_004a44b4,(CObject *)pCVar6);
        local_48 = puVar2;
      } while (pCVar7 == (CObject *)0x0);
      if (*(int *)(pCVar7 + 0x94) != 0) break;
      (**(code **)(*(int *)pCVar7 + 0x60))();
    }
    pCVar5 = CWnd::GetParentFrame((CWnd *)pCVar7);
    if (pCVar5 == (CFrameWnd *)0x0) break;
    (**(code **)(*(int *)pCVar5 + 0x60))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

