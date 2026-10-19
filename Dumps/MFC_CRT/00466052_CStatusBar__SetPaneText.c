// Address: 0x00466052
// Name: CStatusBar::SetPaneText
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CStatusBar::SetPaneText(int,wchar_t const *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __thiscall CStatusBar::SetPaneText(CStatusBar *this,int param_1,wchar_t *param_2,int param_3)

{
  CSimpleStringT<wchar_t,0> *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 * 0x14 + *(int *)(this + 0x78);
  if ((*(byte *)(iVar2 + 0xc) & 1) == 0) {
    if (param_2 == (wchar_t *)0x0) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x10) + -0xc);
    }
    else {
      iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                         (iVar2 + 0x10),param_2);
    }
    if (iVar1 == 0) {
      return 1;
    }
  }
  this_00 = (CSimpleStringT<wchar_t,0> *)(iVar2 + 0x10);
  if (param_2 == (wchar_t *)0x0) {
    ATL::CSimpleStringT<wchar_t,0>::Empty(this_00);
  }
  else {
    FUN_004034e0(this_00,param_2);
  }
  if (param_3 == 0) {
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 1;
  }
  else {
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffffe;
    if ((*(uint *)(iVar2 + 8) & 0x4000000) == 0) {
      uVar3 = *(undefined4 *)this_00;
    }
    else {
      uVar3 = 0;
    }
    (**(code **)(*(int *)this + 0x110))(0x40b,(uint)*(ushort *)(iVar2 + 8) | param_1,uVar3);
  }
  return 1;
}

