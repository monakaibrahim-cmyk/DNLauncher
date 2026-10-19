// Address: 0x00453369
// Name: FUN_00453369
// Category: Utility


void __thiscall FUN_00453369(void *this,LPCWSTR param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  DWORD dwCreationDisposition;
  HANDLE pvVar3;
  DWORD dwFlagsAndAttributes;
  DWORD dwShareMode;
  _SECURITY_ATTRIBUTES local_228;
  int local_21c;
  DWORD local_218;
  LPCWSTR local_214;
  wchar_t local_210 [52];
  undefined1 local_1a8 [416];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_1a8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  local_214 = param_1;
  local_21c = param_3;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)((int)this + 0xc));
  if ((local_214 == (LPCWSTR)0x0) || (iVar1 = FUN_00452c42(local_214,0x104,(int *)0x0), iVar1 < 0))
  {
    if (local_21c != 0) {
      *(undefined4 *)(local_21c + 8) = 3;
      FUN_004034e0((void *)(local_21c + 0x10),local_214);
    }
    goto LAB_0045350e;
  }
  iVar1 = FUN_004531a0(local_210,local_214,local_21c);
  if (iVar1 == 0) goto LAB_0045350e;
  FUN_004034e0((CSimpleStringT<wchar_t,0> *)((int)this + 0xc),local_210);
  uVar2 = param_2 & 3;
  local_218 = 0;
  if (uVar2 == 0) {
    local_218 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_218 = 0x40000000;
  }
  else if (uVar2 == 2) {
    local_218 = 0xc0000000;
  }
  uVar2 = param_2 & 0x70;
  dwShareMode = 1;
  if ((uVar2 == 0) || (uVar2 == 0x10)) {
LAB_00453449:
    dwShareMode = 0;
  }
  else if (uVar2 != 0x20) {
    if (uVar2 == 0x30) {
      dwShareMode = 2;
    }
    else {
      dwShareMode = 3;
      if (uVar2 != 0x40) goto LAB_00453449;
    }
  }
  local_228.bInheritHandle = ~((param_2 & 0xffff7fff) >> 7) & 1;
  local_228.nLength = 0xc;
  local_228.lpSecurityDescriptor = (LPVOID)0x0;
  if ((param_2 & 0x1000) == 0) {
    dwCreationDisposition = 3;
  }
  else {
    dwCreationDisposition = (-(uint)((param_2 & 0x2000) != 0) & 2) + 2;
  }
  dwFlagsAndAttributes = 0x80;
  if ((param_2 & 0x10000) != 0) {
    dwFlagsAndAttributes = 0x20000080;
  }
  if ((param_2 & 0x20000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x80000000;
  }
  if ((param_2 & 0x40000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
  }
  if ((param_2 & 0x80000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  pvVar3 = CreateFileW(local_214,local_218,dwShareMode,&local_228,dwCreationDisposition,
                       dwFlagsAndAttributes,(HANDLE)0x0);
  if (pvVar3 == (HANDLE)0xffffffff) {
    AfxFillExceptionInfo(local_21c,local_214);
  }
  else {
    *(HANDLE *)((int)this + 4) = pvVar3;
    *(undefined4 *)((int)this + 8) = 1;
  }
LAB_0045350e:
  __security_check_cookie(local_8 ^ (uint)local_1a8);
  return;
}

