// Address: 0x004841a8
// Name: FUN_004841a8
// Category: MFC_CRT


undefined4 __cdecl FUN_004841a8(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00490078(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_004cc260 + 0x84) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_004cc260 + 0x44) & 1) != 0)))) {
      iVar1 = FUN_00490078(2);
      iVar2 = FUN_00490078(1);
      if (iVar2 == iVar1) goto LAB_0048420a;
    }
    hObject = (HANDLE)FUN_00490078(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0048420c;
    }
  }
LAB_0048420a:
  DVar4 = 0;
LAB_0048420c:
  FUN_0048fff7(param_1);
  *(undefined1 *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_0047b86f(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

