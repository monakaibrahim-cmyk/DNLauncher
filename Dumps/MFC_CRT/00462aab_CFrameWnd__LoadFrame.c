// Address: 0x00462aab
// Name: CFrameWnd::LoadFrame
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CFrameWnd::LoadFrame
          (CFrameWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  _AFX_THREAD_STATE *p_Var4;
  HMENU pHVar5;
  int iVar6;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  uStack_4 = 8;
  local_8 = 0x462ab7;
  *(uint *)(this + 0xa4) = param_1;
  piVar2 = (int *)FUN_00453ed1();
  FUN_004031d0(&param_1,piVar2);
  iVar6 = 0;
  local_8 = 0;
  iVar3 = FUN_00402f70(&param_1,uVar1);
  if (iVar3 != 0) {
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        (this + 0xc4),(wchar_t *)param_1,0,L'\n');
  }
  AfxEndDeferRegisterClass(8);
  p_Var4 = GetIconWndClass(this,param_2,(ushort)uVar1);
  FUN_00403410(local_14,(int *)(this + 0xc4));
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = (**(code **)(*(int *)this + 0x134))
                    (p_Var4,local_14[0],param_2,&DAT_004c2d2c,param_3,(LPCWSTR)(uVar1 & 0xffff),0,
                     param_4);
  if (iVar3 != 0) {
    pHVar5 = GetMenu(*(HWND *)(this + 0x20));
    *(HMENU *)(this + 0x5c) = pHVar5;
    LoadAccelTable(this,(LPCWSTR)(uVar1 & 0xffff));
    if (param_4 == (CCreateContext *)0x0) {
      CWnd::SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x364,0,0,1,1);
    }
    iVar6 = 1;
  }
  FUN_004031b0((undefined4 *)(local_14[0] + -0x10));
  FUN_004031b0((undefined4 *)(param_1 - 0x10));
  return iVar6;
}

