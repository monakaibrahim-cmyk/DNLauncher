// Address: 0x00459755
// Name: AfxEndDeferRegisterClass
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxEndDeferRegisterClass(long)
   
   Library: Visual Studio 2005 Release */

int AfxEndDeferRegisterClass(long param_1)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  uint uVar4;
  uint local_38;
  code *local_34;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  wchar_t *local_14;
  tagINITCOMMONCONTROLSEX local_10;
  AFX_MODULE_STATE *local_8;
  
  local_8 = AfxGetModuleState();
  param_1 = param_1 & ~*(uint *)(local_8 + 0x18);
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    _memset(&local_38,0,0x28);
    local_34 = DefWindowProcW_exref;
    pAVar2 = AfxGetModuleState();
    local_28 = *(undefined4 *)(pAVar2 + 8);
    local_20 = DAT_004cab68;
    local_10.dwSize = 8;
    if ((param_1 & 1U) != 0) {
      local_38 = 0xb;
      local_14 = L"AfxWnd80su";
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_38);
      if (iVar3 != 0) {
        uVar1 = 1;
      }
    }
    if ((param_1 & 0x20U) != 0) {
      local_38 = local_38 | 0x8b;
      local_14 = L"AfxOleControl80su";
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_38);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 0x20;
      }
    }
    if ((param_1 & 2U) != 0) {
      local_38 = 0;
      local_14 = L"AfxControlBar80su";
      local_1c = 0x10;
      iVar3 = AfxRegisterClass((tagWNDCLASSA *)&local_38);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 2;
      }
    }
    if ((param_1 & 4U) != 0) {
      local_38 = 8;
      local_1c = 0;
      iVar3 = _AfxRegisterWithIcon((tagWNDCLASSA *)&local_38,(char *)L"AfxMDIFrame80su",0x7a01);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 4;
      }
    }
    if ((param_1 & 8U) != 0) {
      local_38 = 0xb;
      local_1c = 6;
      iVar3 = _AfxRegisterWithIcon((tagWNDCLASSA *)&local_38,(char *)L"AfxFrameOrView80su",0x7a02);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 8;
      }
    }
    if ((param_1 & 0x10U) != 0) {
      local_10.dwICC = 0xff;
      uVar4 = _AfxInitCommonControls(&local_10,0x3fc0);
      uVar1 = uVar1 | uVar4;
      param_1 = param_1 & 0xffffc03f;
    }
    if ((param_1 & 0x40U) != 0) {
      local_10.dwICC = 0x10;
      uVar4 = _AfxInitCommonControls(&local_10,0x40);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x80U) != 0) {
      local_10.dwICC = 2;
      uVar4 = _AfxInitCommonControls(&local_10,0x80);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x100U) != 0) {
      local_10.dwICC = 8;
      uVar4 = _AfxInitCommonControls(&local_10,0x100);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x200U) != 0) {
      local_10.dwICC = 0x20;
      uVar4 = _AfxInitCommonControls(&local_10,0x200);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x400U) != 0) {
      local_10.dwICC = 1;
      uVar4 = _AfxInitCommonControls(&local_10,0x400);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x800U) != 0) {
      local_10.dwICC = 0x40;
      uVar4 = _AfxInitCommonControls(&local_10,0x800);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x1000U) != 0) {
      local_10.dwICC = 4;
      uVar4 = _AfxInitCommonControls(&local_10,0x1000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x2000U) != 0) {
      local_10.dwICC = 0x80;
      uVar4 = _AfxInitCommonControls(&local_10,0x2000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x4000U) != 0) {
      local_10.dwICC = 0x800;
      uVar4 = _AfxInitCommonControls(&local_10,0x4000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x8000U) != 0) {
      local_10.dwICC = 0x400;
      uVar4 = _AfxInitCommonControls(&local_10,0x8000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x10000U) != 0) {
      local_10.dwICC = 0x200;
      uVar4 = _AfxInitCommonControls(&local_10,0x10000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x20000U) != 0) {
      local_10.dwICC = 0x100;
      uVar4 = _AfxInitCommonControls(&local_10,0x20000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x40000U) != 0) {
      local_10.dwICC = 0x8000;
      uVar4 = _AfxInitCommonControls(&local_10,0x40000);
      uVar1 = uVar1 | uVar4;
    }
    *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | uVar1;
    if ((*(uint *)(local_8 + 0x18) & 0x3fc0) == 0x3fc0) {
      *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | 0x10;
      uVar1 = uVar1 | 0x10;
    }
    uVar1 = (uint)((uVar1 & param_1) == param_1);
  }
  return uVar1;
}

