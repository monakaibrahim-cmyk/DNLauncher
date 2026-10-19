// Address: 0x00471055
// Name: COleControlContainer::GetAmbientProp
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::GetAmbientProp(class COleControlSite
   *,long,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleControlContainer::GetAmbientProp
          (COleControlContainer *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  tagVARIANT *ptVar2;
  COLORREF CVar3;
  undefined ***pppuVar4;
  int iVar5;
  LCID LVar6;
  int *piVar7;
  undefined4 uVar8;
  CWindowDC local_24 [4];
  WPARAM local_20;
  HDC local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  ptVar2 = param_3;
  lVar1 = param_2;
  uStack_4 = 0x14;
  local_8 = 0x471061;
  switch(param_2) {
  case -0x2cc:
    (param_3->n1).n2.vt = 2;
    *(undefined2 *)((int)&param_3->n1 + 8) = 1;
    break;
  case -0x2cb:
  case -0x2ca:
  case -0x2c5:
  case -0x2c2:
    *(undefined2 *)((int)&param_3->n1 + 8) = 0xffff;
    goto LAB_0047108b;
  case -0x2c9:
    (param_3->n1).n2.vt = 0xb;
    iVar5 = COleControlSite::IsDefaultButton(param_1);
    *(ushort *)((int)&ptVar2->n1 + 8) = -(ushort)(iVar5 != 0);
    break;
  case -0x2c8:
  case -0x2c7:
  case -0x2c6:
    *(undefined2 *)((int)&param_3->n1 + 8) = 0;
LAB_0047108b:
    (param_3->n1).n2.vt = 0xb;
    break;
  default:
    return 0;
  case -0x2c3:
    piVar7 = (int *)FUN_00453ed1();
    FUN_004031d0(&param_2,piVar7);
    local_8 = 1;
    FUN_00402f70(&param_2,0xf1c0);
    goto LAB_0047119b;
  case -0x2c1:
    (param_3->n1).n2.vt = 3;
    LVar6 = GetThreadLocale();
    *(LCID *)((int)&ptVar2->n1 + 8) = LVar6;
    break;
  case -0x2c0:
  case -0x2bd:
    if (*(int *)(this + 0x5c) == -1) {
      CWindowDC::CWindowDC(local_24,*(CWnd **)(this + 0x20));
      SendMessageW(*(HWND *)(*(int *)(this + 0x20) + 0x20),0x138,local_20,
                   *(LPARAM *)(*(int *)(this + 0x20) + 0x20));
      CVar3 = GetBkColor(local_1c);
      *(COLORREF *)(this + 0x5c) = CVar3;
      CVar3 = GetTextColor(local_1c);
      *(COLORREF *)(this + 0x60) = CVar3;
      CWindowDC::~CWindowDC(local_24);
    }
    (param_3->n1).n2.vt = 3;
    if (lVar1 == -0x2bd) {
      uVar8 = *(undefined4 *)(this + 0x5c);
    }
    else {
      uVar8 = *(undefined4 *)(this + 0x60);
    }
    *(undefined4 *)((int)&param_3->n1 + 8) = uVar8;
    break;
  case -0x2bf:
    if (*(int *)(this + 100) == 0) {
      pppuVar4 = (undefined ***)FUN_0041c470(*(int *)(this + 0x20));
      FUN_00470eff(this,pppuVar4);
      if (*(int *)(this + 100) == 0) {
        return 0;
      }
    }
    ptVar2 = param_3;
    (param_3->n1).n2.vt = 9;
    (**(code **)(**(int **)(this + 100) + 4))(*(int **)(this + 100));
    *(undefined4 *)((int)&ptVar2->n1 + 8) = *(undefined4 *)(this + 100);
    break;
  case -0x2be:
    piVar7 = (int *)FUN_00453ed1();
    FUN_004031d0(&param_2,piVar7);
    local_8 = 0;
LAB_0047119b:
    ptVar2 = param_3;
    (param_3->n1).n2.vt = 8;
    uVar8 = FUN_00404770(&param_2);
    *(undefined4 *)((int)&ptVar2->n1 + 8) = uVar8;
    FUN_004031b0((undefined4 *)(param_2 + -0x10));
  }
  return 1;
}

