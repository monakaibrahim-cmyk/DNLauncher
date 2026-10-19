// Address: 0x004632ad
// Name: CFrameWnd::UpdateFrameTitleForDocument
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CFrameWnd::UpdateFrameTitleForDocument(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::UpdateFrameTitleForDocument(CFrameWnd *this,wchar_t *param_1)

{
  int *piVar1;
  ulong uVar2;
  wchar_t *local_58;
  wchar_t local_54 [38];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x4632b9;
  piVar1 = (int *)FUN_00453ed1();
  FUN_004031d0(&local_58,piVar1);
  local_8 = 0;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x4000) == 0) {
    FUN_00403360(&local_58,(undefined4 *)(this + 0xc4));
    if (param_1 != (wchar_t *)0x0) {
      FUN_004064c0(&local_58,(short *)&DAT_004a30a8);
      FUN_004064c0(&local_58,param_1);
      if (0 < *(int *)(this + 0x58)) {
        _swprintf_s(local_54,0x20,L":%d",*(int *)(this + 0x58));
        FUN_004064c0(&local_58,local_54);
      }
    }
  }
  else {
    if (param_1 != (wchar_t *)0x0) {
      FUN_004064c0(&local_58,param_1);
      if (0 < *(int *)(this + 0x58)) {
        _swprintf_s(local_54,0x20,L":%d",*(int *)(this + 0x58));
        FUN_004064c0(&local_58,local_54);
      }
      FUN_004064c0(&local_58,(short *)&DAT_004a30a8);
    }
    FUN_00403360(&local_58,(undefined4 *)(this + 0xc4));
  }
  AfxSetWindowText(*(HWND__ **)(this + 0x20),local_58);
  FUN_004031b0((undefined4 *)(local_58 + -8));
  FUN_0047b7a6();
  return;
}

