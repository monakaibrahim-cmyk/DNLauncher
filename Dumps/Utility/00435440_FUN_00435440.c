// Address: 0x00435440
// Name: FUN_00435440
// Category: Utility


undefined1 __thiscall FUN_00435440(void *this,HRSRC param_1,int param_2,HMODULE param_3)

{
  undefined1 uVar1;
  DWORD DVar2;
  HGLOBAL hResData;
  LPVOID pvVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00495f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar2 = SizeofResource(param_3,param_1);
  hResData = LoadResource(param_3,param_1);
  if (hResData == (HGLOBAL)0x0) {
    pcVar5 = "Unable to load resource!";
    pcVar6 = (char *)((int)this + 0x44);
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    *pcVar6 = *pcVar5;
  }
  else {
    pvVar3 = LockResource(hResData);
    if (pvVar3 != (LPVOID)0x0) {
      FUN_00437880(local_24,(int)pvVar3,DVar2);
      local_4 = 0;
      uVar1 = FUN_004350c0(this,local_24,param_2);
      local_4 = 0xffffffff;
      FUN_00437ae0(local_24);
      ExceptionList = local_c;
      return uVar1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

