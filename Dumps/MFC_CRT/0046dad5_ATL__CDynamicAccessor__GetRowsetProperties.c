// Address: 0x0046dad5
// Name: ATL::CDynamicAccessor::GetRowsetProperties
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CDynamicAccessor::GetRowsetProperties(struct IUnknown *,unsigned
   long *,int *,unsigned long)
   
   Library: Visual Studio 2005 Release */

long __thiscall
ATL::CDynamicAccessor::GetRowsetProperties
          (CDynamicAccessor *this,IUnknown *param_1,ulong *param_2,int *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  HRESULT local_28;
  int *local_24;
  ulong *local_20;
  ulong local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_30 = param_3;
  if ((param_1 != (IUnknown *)0x0) && (param_3 != (int *)0x0)) {
    local_2c = (int *)0x0;
    local_28 = (*param_1->lpVtbl->QueryInterface)(param_1,(IID *)&DAT_004a3fac,&local_2c);
    uVar2 = param_4;
    if (param_4 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
    }
    if (-1 < local_28) {
      local_20 = param_2;
      local_1c = param_4;
      local_18 = DAT_004abe30;
      uStack_14 = DAT_004abe34;
      uStack_10 = DAT_004abe38;
      local_34 = 0;
      local_24 = (int *)0x0;
      uStack_c = DAT_004abe3c;
      local_28 = (**(code **)(*local_2c + 0xc))(local_2c,1,&local_20,&local_34,&local_24);
      if (-1 < local_28) {
        uVar3 = 0;
        iVar5 = 0;
        while( true ) {
          uVar4 = local_24[1];
          if (param_4 <= (uint)local_24[1]) {
            uVar4 = param_4;
          }
          if (uVar4 <= uVar3) break;
          local_30[uVar3] = (int)*(short *)(*local_24 + 0x2c + iVar5);
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 0x34;
        }
        if ((LPVOID)*local_24 != (LPVOID)0x0) {
          CoTaskMemFree((LPVOID)*local_24);
        }
      }
      CoTaskMemFree(local_24);
    }
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))(local_2c);
    }
  }
  lVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar1;
}

