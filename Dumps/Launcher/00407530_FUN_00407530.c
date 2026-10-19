// Address: 0x00407530
// Name: FUN_00407530
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00407530(int param_1,HWND param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  errno_t eVar3;
  int iVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  int iVar7;
  undefined1 auStack_584 [4];
  FILE *local_580;
  int local_57c;
  wchar_t *local_578;
  int local_574;
  int local_570;
  HWND local_56c;
  undefined1 local_568 [4];
  void *local_564;
  undefined4 local_554;
  uint local_550;
  undefined1 local_54c [4];
  void *local_548;
  undefined4 local_538;
  uint local_534;
  char local_530 [256];
  wchar_t local_430;
  undefined1 local_42e [518];
  WCHAR local_228;
  undefined1 local_226 [522];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049a596;
  local_14 = ExceptionList;
  local_1c = DAT_004c3750 ^ (uint)auStack_584;
  ExceptionList = &local_14;
  local_580 = (FILE *)0x0;
  local_530[0] = '\0';
  local_57c = param_1;
  local_56c = param_2;
  _memset(local_530 + 1,0,0xff);
  local_430 = L'\0';
  _memset(local_42e,0,0x206);
  local_228 = L'\0';
  _memset(local_226,0,0x206);
  SHGetSpecialFolderPathW(param_2,&local_228,5,0);
  FUN_004081d0(&local_228,&local_430,L"%s\\DragonNest");
  FUN_004770f2(&local_430);
  FUN_004081d0(extraout_ECX,&local_430,L"%s\\DragonNest\\Config");
  FUN_004770f2(&local_430);
  FUN_004081d0(extraout_ECX_00,&local_430,L"%s\\DragonNest\\Config\\%s");
  FUN_004035c0(&local_578,&local_430);
  local_c = 0;
  eVar3 = __wfopen_s(&local_580,local_578,L"r+");
  if (eVar3 == 0) {
    FUN_00407c70();
    _fseek(local_580,0,0);
    iVar4 = FUN_004776e5(local_580,0x4b0650);
    while (iVar4 == 1) {
      iVar4 = FUN_00407960(local_57c,local_580);
      if (iVar4 == 0) {
        local_550 = 0xf;
        local_554 = 0;
        local_564 = (void *)((uint)local_564 & 0xffffff00);
        local_534 = 0xf;
        local_538 = 0;
        local_548 = (void *)((uint)local_548 & 0xffffff00);
        pcVar5 = local_530;
        local_c._0_1_ = 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00402d00(local_568,(undefined4 *)local_530,(int)pcVar5 - (int)(local_530 + 1));
        FUN_004776e5(local_580,0x4b0650);
        pcVar5 = local_530;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00402d00(local_54c,(undefined4 *)local_530,(int)pcVar5 - (int)(local_530 + 1));
        FUN_00407bc0(local_568);
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < local_534) {
                    /* WARNING: Subroutine does not return */
          _free(local_548);
        }
        local_534 = 0xf;
        local_538 = 0;
        local_548 = (void *)((uint)local_548 & 0xffffff00);
        if (0xf < local_550) {
                    /* WARNING: Subroutine does not return */
          _free(local_564);
        }
        local_550 = 0xf;
        local_554 = 0;
        local_564 = (void *)((uint)local_564 & 0xffffff00);
      }
      iVar4 = FUN_004776e5(local_580,0x4b0650);
    }
    _fclose(local_580);
    if ((*(int *)(param_1 + 0x2c) == 0) ||
       (iVar6 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c), iVar4 = iVar6 >> 0x1f,
       iVar7 = local_57c, iVar6 / 0x38 + iVar4 == iVar4)) {
      local_574 = GetSystemMetrics(0);
      local_570 = GetSystemMetrics(1);
      iVar7 = local_57c;
      if ((double)local_570 / (double)local_574 <= _DAT_004b4710) {
        *(undefined4 *)(local_57c + 4) = 0x500;
        *(undefined4 *)(local_57c + 8) = 800;
        FUN_00407280(local_57c,local_56c);
      }
      else {
        *(undefined4 *)(local_57c + 4) = 0x400;
        *(undefined4 *)(local_57c + 8) = 0x300;
        FUN_00407280(local_57c,local_56c);
      }
    }
    if (*(int *)(iVar7 + 4) < 0x400) {
      *(undefined4 *)(iVar7 + 4) = 0x400;
      *(undefined4 *)(iVar7 + 8) = 0x300;
    }
    local_c = 0xffffffff;
    pwVar1 = local_578 + -2;
    LOCK();
    iVar4 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(local_578 + -8) + 4))(local_578 + -8);
    }
  }
  else {
    local_c = 0xffffffff;
    pwVar1 = local_578 + -2;
    LOCK();
    iVar4 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(local_578 + -8) + 4))(local_578 + -8);
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_584);
  return;
}

