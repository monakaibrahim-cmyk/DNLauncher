// Address: 0x0048e04a
// Name: FUN_0048e04a
// Category: MFC_CRT


undefined8 __cdecl FUN_0048e04a(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)FUN_00490078(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 9;
LAB_0048e079:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_0047b86f(DVar4);
        goto LAB_0048e079;
      }
    }
    pbVar1 = (byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}

