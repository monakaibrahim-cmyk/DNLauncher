// Address: 0x0046bfff
// Name: COleControlSite::XOleIPSite::GetWindowContext
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::GetWindowContext(struct
   IOleInPlaceFrame * *,struct IOleInPlaceUIWindow * *,struct tagRECT *,struct tagRECT *,struct
   tagOIFI *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::GetWindowContext
               (IOleInPlaceFrame **param_1,IOleInPlaceUIWindow **param_2,tagRECT *param_3,
               tagRECT *param_4,tagOIFI *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c00b;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-0x2c]);
  local_8 = 0;
  if (param_3 != (tagRECT *)0x0) {
    param_3->left = 0;
  }
  uVar2 = CCmdTarget::InternalQueryInterface((CCmdTarget *)param_1[-0x2b],&DAT_004ab65c,param_2);
  if ((int)uVar2 < 0) {
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
    lVar3 = -0x7fffbffb;
  }
  else {
    iVar1 = *(int *)(param_1[-0x2b] + 0x20);
    CopyRect(param_4,(RECT *)(param_1 + -0x27));
    GetClientRect(*(HWND *)(iVar1 + 0x20),(LPRECT)param_5);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_stack_00000018 + 4) = 0;
    *(undefined4 *)(in_stack_00000018 + 8) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(in_stack_00000018 + 0xc) = 0;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0;
    if (local_14 != 0) {
      FUN_00453641();
    }
    lVar3 = 0;
  }
  return lVar3;
}

