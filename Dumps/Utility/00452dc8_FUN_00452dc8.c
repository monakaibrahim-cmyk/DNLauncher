// Address: 0x00452dc8
// Name: FUN_00452dc8
// Category: Utility


void __thiscall FUN_00452dc8(void *this,DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  short *psVar3;
  
  BVar1 = LockFile(*(HANDLE *)((int)this + 4),param_1,param_2,param_3,param_4);
  if (BVar1 == 0) {
    psVar3 = *(short **)((int)this + 0xc);
    DVar2 = GetLastError();
    ThrowOsError(DVar2,psVar3);
  }
  return;
}

