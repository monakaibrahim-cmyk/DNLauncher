// Address: 0x0045d8dc
// Name: CHtmlView::PreTranslateMessage
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CHtmlView::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CHtmlView::PreTranslateMessage(CHtmlView *this,tagMSG *param_1)

{
  int iVar1;
  CFrameWnd *pCVar2;
  CHtmlView *this_00;
  uint uVar3;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x45d8e8;
  iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar1 == 0) {
    pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
    this_00 = this;
    if ((pCVar2 != (CFrameWnd *)0x0) && (*(int *)(pCVar2 + 0x68) != 0)) {
      return 0;
    }
    do {
      this_00 = (CHtmlView *)CWnd::GetParentFrame((CWnd *)this_00);
      if (this_00 == (CHtmlView *)0x0) {
        uVar3 = 0;
        if (*(IUnknown **)(this + 0xec) == (IUnknown *)0x0) {
          return 0;
        }
        ATL::
        CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
        ::
        CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
                  ((CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
                    *)local_14,*(IUnknown **)(this + 0xec));
        local_8 = 0;
        if (local_14[0] != (int *)0x0) {
          iVar1 = (**(code **)(*local_14[0] + 0x14))(local_14[0],param_1);
          uVar3 = (uint)(iVar1 == 0);
        }
        local_8 = 0xffffffff;
        if (local_14[0] == (int *)0x0) {
          return uVar3;
        }
        (**(code **)(*local_14[0] + 8))(local_14[0]);
        return uVar3;
      }
      iVar1 = (**(code **)(*(int *)this_00 + 0x100))(param_1);
    } while (iVar1 == 0);
  }
  return 1;
}

