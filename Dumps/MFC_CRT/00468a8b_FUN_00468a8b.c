// Address: 0x00468a8b
// Name: FUN_00468a8b
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00468a8b(int param_1)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  HDC hdc;
  int iVar4;
  int iVar5;
  int iVar6;
  HGDIOBJ in_stack_ffffff8c;
  tagMENUITEMINFOW local_64;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  uStack_4 = 0x54;
  local_8 = 0x468a97;
  if (*(int *)(param_1 + 0x14) == 0) {
    local_1c = GetSystemMetrics(0x32);
    local_1c = local_1c + 2;
    iVar5 = GetSystemMetrics(0x31);
  }
  else {
    GetObjectW(*(HANDLE *)(*(int *)(param_1 + 0x14) + 4),0x18,local_34);
    local_1c = local_2c + 2;
    iVar5 = local_30;
  }
  iVar6 = iVar5 + 2;
  piVar2 = (int *)FUN_00453ed1();
  FUN_004031d0(&param_1,piVar2);
  local_8 = 0;
  _memset(&local_64,0,0x30);
  local_64.cbSize = 0x30;
  local_64.fMask = 0x40;
  BVar3 = GetMenuItemInfoW(*(HMENU *)(local_14 + 4),*(UINT *)(iVar1 + 8),0,&local_64);
  if (BVar3 != 0) {
    local_64.dwTypeData = (LPWSTR)FID_conflict_PrepareWrite(&param_1,local_64.cch);
    local_64.cch = local_64.cch + 1;
    BVar3 = GetMenuItemInfoW(*(HMENU *)(local_14 + 4),*(UINT *)(iVar1 + 8),0,&local_64);
    FUN_00404990(&param_1,-1);
    if (BVar3 != 0) {
      CWindowDC::CWindowDC((CWindowDC *)&local_30,(CWnd *)0x0);
      local_8._0_1_ = 1;
      hdc = SelectObject((HDC)(local_14 + 8),in_stack_ffffff8c);
      FUN_0041c430(&local_30,&local_18,&param_1);
      SelectObject(hdc,in_stack_ffffff8c);
      iVar6 = iVar5 + 5 + local_18;
      local_8 = (uint)local_8._1_3_ << 8;
      CWindowDC::~CWindowDC((CWindowDC *)&local_30);
    }
  }
  iVar4 = GetSystemMetrics(0xf);
  iVar5 = local_1c;
  if (local_1c < iVar4) {
    iVar5 = GetSystemMetrics(0xf);
  }
  *(int *)(iVar1 + 0x10) = iVar5;
  *(int *)(iVar1 + 0xc) = iVar6;
  FUN_004031b0((undefined4 *)(param_1 + -0x10));
  return;
}

