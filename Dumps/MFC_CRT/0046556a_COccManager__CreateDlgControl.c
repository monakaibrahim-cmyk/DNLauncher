// Address: 0x0046556a
// Name: COccManager::CreateDlgControl
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall COccManager::CreateDlgControl(class CWnd *,struct HWND__ *,int,struct
   DLGITEMTEMPLATE *,unsigned short,unsigned char *,unsigned long,struct HWND__ * *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COccManager::CreateDlgControl
          (COccManager *this,CWnd *param_1,HWND__ *param_2,int param_3,DLGITEMTEMPLATE *param_4,
          ushort param_5,uchar *param_6,ulong param_7,HWND__ **param_8)

{
  OLECHAR OVar1;
  UINT ui;
  bool bVar2;
  int *piVar3;
  undefined3 extraout_var;
  int iVar4;
  CMemFile local_ac [40];
  CDataBoundProperty *local_84;
  tagRECT local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  void *local_5c;
  uint local_54;
  int local_50;
  int local_4c;
  HWND__ *local_48;
  uint local_44;
  int local_40;
  HWND__ **local_3c;
  undefined4 local_38;
  CWnd *local_34;
  CDataBoundProperty *local_30;
  BSTR local_2c;
  int local_28;
  DLGITEMTEMPLATE *local_24;
  int local_20;
  COleControlSite *local_1c;
  CLSID local_18;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&local_50;
  local_50 = 0x50;
  local_54 = 0x465588;
  local_34 = param_1;
  local_48 = param_2;
  local_3c = param_8;
  local_24 = param_4 + 0x12;
  if (param_3 != 0) {
    local_70 = *(undefined4 *)(param_4 + 8);
    local_6c = *(undefined4 *)(param_4 + 4);
    local_68 = *(undefined2 *)(param_4 + 0xc);
    local_66 = *(undefined2 *)(param_4 + 0xe);
    local_62 = *(undefined2 *)(param_4 + 0x12);
    local_24 = param_4 + 0x18;
    local_64 = *(undefined2 *)(param_4 + 0x10);
    local_60 = *(undefined2 *)(param_4 + 0x14);
    param_4 = (DLGITEMTEMPLATE *)&local_70;
  }
  local_80.top = (LONG)*(short *)(param_4 + 10);
  local_80.left = (LONG)*(short *)(param_4 + 8);
  local_80.bottom = *(short *)(param_4 + 0xe) + local_80.top;
  local_80.right = *(short *)(param_4 + 0xc) + local_80.left;
  MapDialogRect(*(HWND *)(param_1 + 0x20),&local_80);
  local_2c = (BSTR)0x0;
  if (3 < param_7) {
    ui = *(UINT *)param_6;
    param_7 = param_7 - 4;
    param_6 = param_6 + 4;
    if (ui != 0) {
      local_2c = SysAllocStringLen((OLECHAR *)param_6,ui);
      param_6 = (uchar *)((int)param_6 + ui * 2);
      param_7 = param_7 + ui * -2;
    }
  }
  local_30 = (CDataBoundProperty *)0x0;
  piVar3 = (int *)FUN_00453ed1();
  FUN_004031d0(&local_28,piVar3);
  local_54 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  if ((param_5 == 0x37a) || (param_5 == 0x37b)) {
    local_50 = *(int *)param_6;
    local_20 = local_50 + -0xc;
    param_6 = (uchar *)((int)param_6 + 0xc);
    while (local_20 != 0) {
      local_4c = *(int *)param_6;
      local_20 = local_20 + -6;
      OVar1 = *(OLECHAR *)((int)param_6 + 4);
      if (local_4c == -0x7ffeffff) {
        local_40 = *(int *)((int)param_6 + 6);
        local_38 = *(undefined4 *)((int)param_6 + 10);
        FUN_00402e90(&local_28,(LPCSTR)((int)param_6 + 0x16));
        local_20 = local_20 + (-0x11 - *(int *)(local_28 + -0xc));
        param_6 = (uchar *)((int)param_6 + *(int *)(local_28 + -0xc) + 0x17);
        local_44 = (uint)(ushort)OVar1;
      }
      else {
        local_84 = FUN_00452728(0x1c);
        local_54._0_1_ = 1;
        if (local_84 == (CDataBoundProperty *)0x0) {
          local_30 = (CDataBoundProperty *)0x0;
        }
        else {
          local_30 = (CDataBoundProperty *)
                     CDataBoundProperty::CDataBoundProperty(local_84,local_30,local_4c,OVar1);
        }
        local_54 = (uint)local_54._1_3_ << 8;
        param_6 = (uchar *)((int)param_6 + 6);
      }
    }
    param_7 = param_7 - local_50;
    local_20 = 0;
  }
  if (*(short *)local_24 == 0x7b) {
    local_24 = (DLGITEMTEMPLATE *)CLSIDFromString((LPCOLESTR)local_24,&local_18);
  }
  else {
    local_24 = (DLGITEMTEMPLATE *)CLSIDFromProgID((LPCOLESTR)local_24,&local_18);
  }
  CMemFile::CMemFile(local_ac,param_6,param_7,0);
  local_54 = CONCAT31(local_54._1_3_,2);
  local_1c = (COleControlSite *)0x0;
  if (((-1 < (int)local_24) && (bVar2 = FUN_004702ee(local_34,1), CONCAT31(extraout_var,bVar2) != 0)
      ) && (iVar4 = CreateControl(*(void **)(local_34 + 0x4c),0,&local_18.Data1,0,
                                  *(undefined4 *)param_4,&local_80), iVar4 != 0)) {
    COleControlSite::FreezeEvents(local_1c,1);
    SetWindowPos(*(HWND *)(local_1c + 0x24),local_48,0,0,0,0,0x13);
    *(CDataBoundProperty **)(local_1c + 0x94) = local_30;
    FID_conflict_operator_(local_1c + 0xa4,&local_28);
    *(undefined2 *)(local_1c + 0x98) = (undefined2)local_44;
    *(int *)(local_1c + 0x9c) = local_40;
    *(undefined4 *)(local_1c + 0xa0) = local_38;
  }
  if (local_2c != (BSTR)0x0) {
    SysFreeString(local_2c);
  }
  if (local_1c == (COleControlSite *)0x0) {
    *local_3c = (HWND__ *)0x0;
  }
  else {
    *local_3c = *(HWND__ **)(local_1c + 0x24);
  }
  local_54 = local_54 & 0xffffff00;
  CMemFile::~CMemFile(local_ac);
  FUN_004031b0((undefined4 *)(local_28 + -0x10));
  ExceptionList = local_5c;
  iVar4 = __security_check_cookie(local_8 ^ (uint)&local_50);
  return iVar4;
}

