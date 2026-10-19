// Address: 0x004833c7
// Name: FUN_004833c7
// Category: MFC_CRT


DWORD __cdecl FUN_004833c7(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)FUN_00490078(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_0047b849();
    *pDVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar3 == 0xffffffff) {
    DVar4 = GetLastError();
  }
  else {
    DVar4 = 0;
  }
  if (DVar4 == 0) {
    pbVar1 = (byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_0047b86f(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}

