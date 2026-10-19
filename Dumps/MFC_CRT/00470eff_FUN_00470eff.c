// Address: 0x00470eff
// Name: FUN_00470eff
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __thiscall FUN_00470eff(void *this,undefined ***param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  IUnknown **ppIVar3;
  CWindowDC local_b4 [8];
  HDC local_ac;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined2 local_90;
  ushort local_8e;
  uint local_8c;
  uint local_88;
  uint local_84;
  void *local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined **local_6c;
  undefined4 local_68;
  int local_64 [4];
  undefined2 local_54;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  short local_48 [32];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&local_74;
  local_74 = 0x34;
  local_68 = 0;
  local_6c = CFont::vftable;
  local_78 = 0;
  if ((param_1 == (undefined ***)0x0) || (param_1[1] == (undefined **)0x0)) {
    bVar1 = FUN_004702d1(&local_6c,0x11);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      bVar1 = FUN_004702d1(&local_6c,0xd);
      if (CONCAT31(extraout_var_00,bVar1) == 0) {
        *(undefined4 *)((int)this + 100) = 0;
        goto LAB_00471027;
      }
    }
    param_1 = &local_6c;
  }
  GetObjectW(param_1[1],0x5c,local_64);
  local_a0 = 0x20;
  FUN_004035c0(&local_74,local_48);
  local_9c = local_74;
  local_90 = local_54;
  local_8e = (ushort)local_4d;
  local_8c = (uint)local_50;
  local_88 = (uint)local_4f;
  local_84 = (uint)local_4e;
  local_78._0_1_ = 1;
  local_70 = local_64[0];
  if (local_64[0] < 0) {
    local_70 = -local_64[0];
  }
  CWindowDC::CWindowDC(local_b4,*(CWnd **)((int)this + 0x20));
  local_78._0_1_ = 2;
  local_98 = GetDeviceCaps(local_ac,0x5a);
  local_98 = (local_70 * 720000) / local_98;
  ppIVar3 = (IUnknown **)((int)this + 100);
  local_94 = 0;
  _AfxRelease(ppIVar3);
  iVar2 = OleCreateFontIndirect(&local_a0,&DAT_004ab7ac,ppIVar3);
  if (iVar2 < 0) {
    *ppIVar3 = (IUnknown *)0x0;
  }
  local_78 = CONCAT31(local_78._1_3_,1);
  CWindowDC::~CWindowDC(local_b4);
  FUN_004031b0((undefined4 *)(local_74 + -0x10));
LAB_00471027:
  local_78 = 0xffffffff;
  local_6c = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_6c);
  ExceptionList = local_80;
  __security_check_cookie(local_8 ^ (uint)&local_74);
  return;
}

