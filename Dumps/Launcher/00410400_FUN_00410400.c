// Address: 0x00410400
// Name: FUN_00410400
// Category: Launcher


uint FUN_00410400(LPSTR param_1,LPCWSTR param_2,int param_3,UINT param_4)

{
  int iVar1;
  
  if ((param_1 != (LPSTR)0x0) && (param_2 != (LPCWSTR)0x0)) {
    *param_1 = '\0';
    iVar1 = WideCharToMultiByte(param_4,0,param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
    return -(uint)(iVar1 != 0) & (uint)param_1;
  }
  return 0;
}

