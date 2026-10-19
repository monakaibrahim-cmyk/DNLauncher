// Address: 0x00412b90
// Name: FUN_00412b90
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00412b90(int param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_22d0 [176];
  CHAR local_2010;
  undefined1 local_200f [8191];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049aa4b;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)local_22d0;
  ExceptionList = &local_c;
  FUN_00418fd0(L"Patch Step 3 - ApplyPakPatch Start");
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_2010 = '\0';
  _memset(local_200f,0,0x1fff);
  FUN_00428ee0(local_22d0);
  local_4 = 0;
  if (1 < *(int *)(*(int *)(param_1 + 0x30) + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)(param_1 + 0x30),
               *(int *)(*(int *)(param_1 + 0x30) + -0xc));
  }
  WideCharToMultiByte(0,0,*(LPCWSTR *)(param_1 + 0x30),-1,&local_2010,0x2000,(LPCSTR)0x0,(LPBOOL)0x0
                     );
  uVar2 = FUN_004295b0(&local_2010,&local_2010,1);
  if ((char)uVar2 == '\0') {
    local_4 = 0xffffffff;
    FUN_00429020(local_22d0);
  }
  else {
    iVar3 = FUN_00413320(local_22d0,param_1);
    if (iVar3 == 1) {
      iVar3 = FUN_00414030((int)local_22d0);
      if (iVar3 == 1) {
        FUN_004145d0(param_1,local_22d0);
        uVar4 = 0;
        while( true ) {
          this = *(void **)(param_1 + 0x50);
          if (this == (void *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x54) - (int)this >> 2;
          }
          if (iVar3 <= (int)uVar4) break;
          if ((this == (void *)0x0) || ((uint)(*(int *)(param_1 + 0x54) - (int)this >> 2) <= uVar4))
          {
            FUN_00475b26();
          }
          FUN_00429370(*(void **)(param_1 + 0x50),
                       *(int *)((int)*(void **)(param_1 + 0x50) + uVar4 * 4));
          if ((*(int *)(param_1 + 0x50) == 0) ||
             ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar4)) {
            FUN_00475b26();
          }
          iVar3 = *(int *)(param_1 + 0x50);
          if (*(int *)(iVar3 + uVar4 * 4) != 0) {
            if ((iVar3 == 0) || ((uint)(*(int *)(param_1 + 0x54) - iVar3 >> 2) <= uVar4)) {
              FUN_00475b26();
            }
            puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x50) + uVar4 * 4);
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(1);
            }
            if ((*(int *)(param_1 + 0x50) == 0) ||
               ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar4)) {
              FUN_00475b26();
            }
            *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar4 * 4) = 0;
          }
          uVar4 = uVar4 + 1;
        }
        FUN_00429370(this,(int)local_22d0);
        FUN_00418fd0(L"Patch Step 3 - ApplyPakPatch End");
        local_4 = 0xffffffff;
        FUN_00429020(local_22d0);
        goto LAB_00412d9c;
      }
    }
    local_4 = 0xffffffff;
    FUN_00429020(local_22d0);
  }
LAB_00412d9c:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_22d0);
  return;
}

