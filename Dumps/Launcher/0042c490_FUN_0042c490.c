// Address: 0x0042c490
// Name: FUN_0042c490
// Category: Launcher


void __fastcall FUN_0042c490(char *param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  void *_Dst;
  size_t sVar5;
  int *piVar6;
  void *this;
  int *unaff_EBX;
  undefined1 auStack_4c [4];
  undefined4 *puStack_48;
  undefined **local_44;
  FILE *local_40;
  undefined1 local_3c [4];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004988c3;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)auStack_4c;
  ExceptionList = &local_c;
  if (param_1 != (char *)0x0) {
    local_44 = CFileStream::vftable;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = 0;
    local_40 = (FILE *)0x0;
    local_20 = 0;
    local_4 = 0;
    (*(code *)PTR_FUN_004b3e14)(DAT_004c3750 ^ (uint)&stack0xffffffa8);
    local_20 = 0;
    local_1c = DAT_004b3dc8;
    local_1a = DAT_004b3dca;
    local_40 = _fopen(param_1,(char *)&local_1c);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00402d00(local_3c,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
    cVar1 = (*(code *)local_44[4])();
    if (cVar1 != '\0') {
      lVar3 = _ftell(local_40);
      _fseek(local_40,0,2);
      _ftell(local_40);
      _fseek(local_40,lVar3,0);
      lVar3 = _ftell(local_40);
      _fseek(local_40,0,2);
      lVar4 = _ftell(local_40);
      _fseek(local_40,lVar3,0);
      _Dst = thunk_FUN_00452728(lVar4 + 1);
      lVar3 = _ftell(local_40);
      _fseek(local_40,0,2);
      lVar4 = _ftell(local_40);
      _fseek(local_40,lVar3,0);
      _memset(_Dst,0,lVar4 + 1);
      lVar3 = _ftell(local_40);
      _fseek(local_40,0,2);
      sVar5 = _ftell(local_40);
      _fseek(local_40,lVar3,0);
      FUN_004793fd(_Dst,1,sVar5,local_40);
      if ((undefined4 *)*unaff_EBX != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*unaff_EBX)(1);
        *unaff_EBX = 0;
      }
      puStack_48 = FUN_00452728(0x78);
      local_4._0_1_ = 1;
      if (puStack_48 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = FUN_0042df70(this,puStack_48);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *unaff_EBX = (int)piVar6;
      (**(code **)(*piVar6 + 8))(_Dst,0,0);
                    /* WARNING: Subroutine does not return */
      _free(_Dst);
    }
    FUN_00425c20(&local_44);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_4c);
  return;
}

