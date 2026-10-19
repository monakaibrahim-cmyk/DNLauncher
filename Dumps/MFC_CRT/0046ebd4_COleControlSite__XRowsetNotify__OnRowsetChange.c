// Address: 0x0046ebd4
// Name: COleControlSite::XRowsetNotify::OnRowsetChange
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XRowsetNotify::OnRowsetChange(struct IRowset
   *,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XRowsetNotify::OnRowsetChange
               (IRowset *param_1,ulong param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46ebe0;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xcc));
  local_8 = 0;
  if ((param_3 == 0xe) && (iVar1 = *(int *)(param_1 + -0x58), iVar1 != 0)) {
    if ((*(undefined4 **)(iVar1 + 0x50) == (undefined4 *)0x0) ||
       (*(CDynamicAccessor **)(iVar1 + 0x54) == (CDynamicAccessor *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    ATL::CDynamicAccessor::ReleaseAccessors
              (*(CDynamicAccessor **)(iVar1 + 0x54),(IUnknown *)**(undefined4 **)(iVar1 + 0x50));
    FUN_00469de6(*(int *)(iVar1 + 0x54));
    FUN_0046dbc4(*(void **)(iVar1 + 0x54),(undefined4 *)**(undefined4 **)(iVar1 + 0x50));
    iVar2 = *(int *)(*(int *)(iVar1 + 0x54) + 0xc);
    if (*(int *)(iVar1 + 0x10) != iVar2) {
      *(int *)(iVar1 + 0x10) = iVar2;
      CoTaskMemFree(*(LPVOID *)(iVar1 + 0x14));
      _Dst = ATL::AtlCoTaskMemCAlloc(0x28,*(ulong *)(iVar1 + 0x10));
      *(void **)(iVar1 + 0x14) = _Dst;
      _memset(_Dst,0,*(int *)(iVar1 + 0x10) * 0x28);
    }
  }
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}

