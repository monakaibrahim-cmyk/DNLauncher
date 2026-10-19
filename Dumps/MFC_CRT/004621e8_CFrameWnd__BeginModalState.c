// Address: 0x004621e8
// Name: CFrameWnd::BeginModalState
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::BeginModalState(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)

{
  CFrameWnd *pCVar1;
  longlong lVar2;
  HWND pHVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  int iVar6;
  LRESULT LVar7;
  void *pvVar8;
  rsize_t rVar9;
  int iVar10;
  UINT uCmd;
  undefined **local_2c;
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CFrameWnd *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4621f4;
  pCVar1 = this + 0xb8;
  *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
  if (*(uint *)pCVar1 < 2) {
    local_18 = this;
    local_14 = CWnd::GetTopLevelParent((CWnd *)this);
    if (local_14 == (CWnd *)0x0) goto LAB_00462216;
    iVar10 = 0;
    local_2c = CArray<HWND__*,HWND__*>::vftable;
    local_28 = (void *)0x0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    uCmd = 5;
    local_8 = 0;
    pHVar3 = GetDesktopWindow();
    pHVar3 = GetWindow(pHVar3,uCmd);
    if (pHVar3 != (HWND)0x0) {
      do {
        BVar4 = IsWindowEnabled(pHVar3);
        if (BVar4 != 0) {
          pCVar5 = CWnd::FromHandlePermanent(pHVar3);
          if (pCVar5 != (CWnd *)0x0) {
            iVar6 = AfxIsDescendant(*(HWND__ **)(local_14 + 0x20),pHVar3);
            if (iVar6 != 0) {
              LVar7 = SendMessageW(pHVar3,0x36c,0,0);
              if (LVar7 == 0) {
                EnableWindow(pHVar3,0);
                CArray<HWND__*,HWND__*>::SetAtGrow
                          ((CArray<HWND__*,HWND__*> *)&local_2c,iVar10,pHVar3);
                iVar10 = local_24;
              }
            }
          }
        }
        pHVar3 = GetWindow(pHVar3,2);
      } while (pHVar3 != (HWND)0x0);
      if (iVar10 != 0) {
        if (iVar10 < 1) {
LAB_00462216:
                    /* WARNING: Subroutine does not return */
          FUN_004529e8();
        }
        lVar2 = (ulonglong)(iVar10 + 1) * 4;
        pvVar8 = FUN_00452728(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        rVar9 = iVar10 * 4;
        *(void **)(local_18 + 0xbc) = pvVar8;
        *(undefined4 *)(rVar9 + (int)pvVar8) = 0;
        if (local_28 == (void *)0x0) goto LAB_00462216;
        FUN_004527b0(*(void **)(local_18 + 0xbc),rVar9,local_28,rVar9);
      }
    }
    local_8 = 0xffffffff;
    FUN_00461f64(&local_2c);
  }
  return;
}

