// Address: 0x00402000
// Name: FUN_00402000
// Category: Launcher


void FUN_00402000(LPCWSTR param_1,UINT param_2)

{
  undefined4 *in_EAX;
  int iVar1;
  int iVar2;
  DWORD DVar3;
  size_t cbMultiByte;
  bool bVar4;
  
  if (param_1 == (LPCWSTR)0x0) {
    *in_EAX = 0;
    return;
  }
  iVar1 = lstrlenW(param_1);
  iVar1 = iVar1 + 1;
  FUN_00402680(iVar1 * 4);
  iVar2 = WideCharToMultiByte(param_2,0,param_1,iVar1,(LPSTR)*in_EAX,iVar1 * 4,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    bVar4 = true;
    if (DVar3 == 0x7a) {
      cbMultiByte = WideCharToMultiByte(param_2,0,param_1,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                       );
      FUN_00402680(cbMultiByte);
      iVar1 = WideCharToMultiByte(param_2,0,param_1,iVar1,(LPSTR)*in_EAX,cbMultiByte,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      bVar4 = iVar1 == 0;
    }
    if (bVar4) {
      FUN_00402e70();
    }
  }
  return;
}

