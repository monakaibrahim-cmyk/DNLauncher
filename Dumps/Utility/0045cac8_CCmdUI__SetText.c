// Address: 0x0045cac8
// Name: CCmdUI::SetText
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetText(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::SetText(CCmdUI *this,wchar_t *param_1)

{
  UINT UVar1;
  LPCWSTR unaff_EDI;
  
  if (param_1 == (wchar_t *)0x0) {
LAB_0045cad5:
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 0x14) == 0) goto LAB_0045cad5;
    AfxSetWindowText(*(HWND__ **)(*(int *)(this + 0x14) + 0x20),param_1);
  }
  else if (*(int *)(this + 0x10) == 0) {
    UVar1 = GetMenuState(*(HMENU *)(*(int *)(this + 0xc) + 4),*(UINT *)(this + 8),0x400);
    if (*(HMENU *)(this + 0x20) <= *(HMENU *)(this + 8)) goto LAB_0045cad5;
    FID_conflict_ModifyMenuW
              (*(HMENU *)(this + 8),UVar1 & 0xfffff6fb | 0x400,*(UINT *)(this + 4),(UINT_PTR)param_1
               ,unaff_EDI);
  }
  return;
}

